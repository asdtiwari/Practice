package newLearning;
import java.awt.*;
import javax.swing.*;
import javax.sound.midi.*;
import java.util.*;
import java.awt.event.*;

public class BeatBox{
	JPanel mainPanel;
	ArrayList<JCheckBox> checkBoxList;  // We store the check boxes in an ArrayList
	Sequencer sequencer;
	Sequence sequence;
	Track track;
	JFrame theFrame;

	String [] instumentNames = {"Bass Drum", "Closed Hi=Hat",               // These are the names of the instruments as a String
			"Open Hi=Hat", "Acoustic Sare", "Crash Cymbal", "Hand Clap",    // array, for building the GUI labels (on each row
			"High Tom", "Hi Bango", "Maracas", "Whistle", "Low Conga", 
			"Cowbell", "Vibraslap", "Low-mid Tom", "High Agogo", 
	"Open Hi conga"};
	int[] instruments = {35, 42, 46, 38, 49, 39, 50, 60, 70, 72, 64, 56, 58, 47, 67, 63};   // These represent the actual drum keys
	/* The drum channel is like a piano, except each 'key' on the piano is a different drum so the number '35' is the key for the drum, 42 is closed Hi - Hat, etc. */

	public static void main(String[] args)  {
		new BeatBox().buildGUI();
	}

	public void buildGUI()  {
		theFrame = new JFrame("Cyber BeatBox");
		theFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		BorderLayout layout = new BorderLayout();
		JPanel background = new JPanel(layout);
		background.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
		/* An empty border gives us a margin between the edges of the panel and where the components are placed purely aesthetic */

		checkBoxList = new ArrayList<JCheckBox>();
		Box buttonBox = new Box(BoxLayout.Y_AXIS);

		JButton start = new JButton("Start");
		start.addActionListener(new MyStartListener());
		buttonBox.add(start);

		JButton stop = new JButton("Stop");
		stop.addActionListener(new MyStopListener());
		buttonBox.add(stop);

		JButton upTempo = new JButton("Tempo Up");
		upTempo.addActionListener(new MyDownTempoListener());
		buttonBox.add(upTempo);

		JButton downTempo = new JButton("Tempo Down");
		downTempo.addActionListener(new MyUpTempoListener());
		buttonBox.add(downTempo);

		Box nameBox = new Box(BoxLayout.Y_AXIS);
		for (int i = 0; i < 16; i++)    {
			nameBox.add(new Label(instumentNames[i]));
		}

		background.add(BorderLayout.EAST, buttonBox);
		background.add(BorderLayout.WEST, nameBox);

		theFrame.getContentPane().add(background);

		GridLayout grid = new GridLayout(16, 16);
		grid.setVgap(1);
		grid.setHgap(2);
		mainPanel = new JPanel(grid);
		background.add(BorderLayout.CENTER, mainPanel);

		for (int i = 0; i < 256; i++)   {                   // Make the check boxes,
			JCheckBox c = new JCheckBox();      // set them to 'false' 
			c.setSelected(false);                           // (so hey aren't checked)
			checkBoxList.add(c);                        //  and and them to the 
			mainPanel.add(c);                           // ArrayList AND to the GUI panel
		}   // end loop

		setUpMidi();

		theFrame.setBounds(50, 50, 300, 300);
		theFrame.pack();
		theFrame.setVisible(true);
	}   // close method

	public void setUpMidi() {                                           // The usual MIDI set-up stuff for
		try {                                                                         // getting the Sequencer, the Sequnce
			sequencer = MidiSystem.getSequencer();             // and the Track. Again, nothing special
			sequencer.open();
			sequence = new Sequence (Sequence.PPQ, 4);
			track = sequence.createTrack();
			sequencer.setTempoInBPM(120);

		}   catch (Exception e) {e.printStackTrace();}
	}   // close method

	/* This is where it all happen! Where we turn check box static into MIDI events and add them to the Track. 
    We'll make a 16 element array to hold the values for one instrument, across all 16 beats. 
    If the instrument is supposed to play on that beat, the value at that element will be the key.
    If that instrument is NOT supposed to play on that beat, put in a zero. */
	public void buildTrackAndStart()    {
		int[] trackList = null;

		sequence.deleteTrack(track);    // get rid of the old track, make a fresh one.
		track = sequence.createTrack();

		for (int i = 0; i < 16; i++) {      // do this for each of the 16 Rows (i.e. Bass, Congo, etc.)
			trackList = new int[16];

			int key = instruments[i];
			/* Set the 'key' that represents which instrument this is (Bass, Hi-Hat, etc. 
            The instruments array hold the actual MIDI members for each instrument.)*/

			for (int j = 0; j < 16; j++) {  // Do this for each of the Beats for this row
				JCheckBox jc = (JCheckBox) checkBoxList.get(j + (16*i));
				if( jc.isSelected())    {   // Is the check box at this beat selected? If yes put
					trackList[j] = key;     // the key value in this slot in the array (the slot that represents this beat).
				}   else    {                   // Otherwise, the instrument is NOT supposed to play at this beat, so set it to zero
					trackList[j] = 0;
				}
			}   // close inner loop

			makeTracks(trackList);                                  // for this instrument, and for all 16 beats,
			track.add(makeEvent(176, 1, 127, 0, 16));       // make events and add them to the track
		}   // close outer

		track.add(makeEvent(192, 9, 1, 0, 15));     // We always to make sure that there IS an event at
		try {                                                          // beat 16 (it goes 0 to 15). Otherwise, the BeatBox might
			sequencer.setSequence(sequence);        // not go the full 16 beats before it starts over.
			sequencer.setLoopCount(Sequencer.LOOP_CONTINUOUSLY);    //Let's you specify the number of loop 
			sequencer.start();                                                                              // iterations, or in this case case continuous loopint
			sequencer.setTempoInBPM(120);               // Now play the thing
		}   catch(Exception e)  {e.printStackTrace();}
	}   //close buildTrackandStart method

	public class MyStartListener implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent a){ // First of the inner classes, listeners for the buttons
			buildTrackAndStart();                                   // nothing special here
		}
	}   // close inner class

	public class MyStopListener implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent a){
			sequencer.stop();
		}
	}   // close inner class

	public class MyUpTempoListener implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent a){
			float tempoFactor = sequencer.getTempoFactor();
			sequencer.setTempoFactor((float) (tempoFactor * 1.03));         // The tempo factor scales
		}                                                                                                   // the sequencer's temp by the 
	}   // close inner class                                                                       // factor provided. The default is 1.0,
	// so we've adjusting +/- 3% per click
	public class MyDownTempoListener implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent a){
			float tempoFactor = sequencer.getTempoFactor();
			sequencer.setTempoFactor((float) (tempoFactor * 0.97));
		}
	}   // close inner class

	public void makeTracks(int[] list)  {       // This makes events for one instrument at a time, for all 16 beats 
		for(int i = 0; i < 16; i++) {                     // So it might get an int [] for the Bass drum, and each index in the 
			int key = list[i];                              // array will hold either the key of that instrument, or a zero. If it's a 
			// zero, the instrument isn't supposed to play at that beat.
			if (key != 0)   {                               // Otherwise, make an event and add it to the track.
				track.add(makeEvent(144, 9, key, 100, i));      // Make the Note ON and Note Off
				track.add(makeEvent(128, 9, key, 100, i+1));    //  events, and add them to the Track
			}
		}
	}

	public MidiEvent makeEvent(int comd, int chan, int one, int two, int tick)  {
		MidiEvent event = null;
		try {
			ShortMessage a = new ShortMessage();
			a.setMessage(comd, chan, one, two);
			event = new MidiEvent(a, tick);

		}   catch (Exception e) {e.printStackTrace();}
		return event;
	}
}   //close class