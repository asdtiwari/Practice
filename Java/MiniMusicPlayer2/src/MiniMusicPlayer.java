import javax.sound.midi.*;
import javax.swing.*;
import java.awt.*;

public class MiniMusicPlayer{
    static JFrame f = new JFrame("My First Music Video");
    static MyDrawPanel m1;
    
    public static void main(String[] args){
        MiniMusicPlayer mini = new MiniMusicPlayer();
        mini.go();
    }   // close method
    
    public void setUpGui(){
        m1 = new MyDrawPanel();
        f.setContentPane(m1);
        f.setBounds(30, 30, 300, 300);
        f.setVisible(true);
    }   // close method
    
    public void go(){
        setUpGui();
        try{
            Sequencer sequencer = MidiSystem.getSequencer();
            sequencer.open();
            sequencer.addControllerEventListener(m1, new int[] {127});
            Sequence seq = new Sequence(Sequence.PPQ, 4);
            Track track = seq.createTrack();
            
            int r;
            for (int i = 0; i < 60; i += 4){
                
                r = (int) ((Math.random() * 50) + 1);
                track.add(makeEvent(144, 1, r, 100, i));
                track.add(makeEvent(176, 1, 127, 0, i));
                track.add(makeEvent(128, 1, r, 100, i + 2));
            }   // end loop
            
            sequencer.setSequence(seq);
            sequencer.start();
            sequencer.setTempoInBPM(120);
        }   catch (InvalidMidiDataException | MidiUnavailableException ex) {}
    }   // close method
    
    public MidiEvent makeEvent(int comd, int chan, int one, int two, int tick){
        MidiEvent event = null;
        try{
            ShortMessage a = new ShortMessage();
            a.setMessage(comd, chan, one, two);
            event = new MidiEvent(a, tick);

        }   catch(InvalidMidiDataException e) { }
        return event;
    }   //close method
    
    class MyDrawPanel extends JPanel implements ControllerEventListener{
        boolean msg = false;
        
        @Override
        public void controlChange(ShortMessage Event)   {
            msg = true;
            repaint();
        }
        
        @Override
        public void paintComponent(Graphics g){
            if(msg){
                g.setColor(Color.white);
                g.fillRect(0, 0, this.getWidth(), this.getHeight());
                Graphics2D g2 = (Graphics2D) g;
                
                int r = (int)   (Math.random() * 250);
                int gr = (int)   (Math.random() * 250);
                int b = (int)   (Math.random() * 250);
                
                g.setColor(new Color (r, gr, b));
                
                int ht = (int) ((Math.random() * 120) + 10);
                int width = (int) ((Math.random() * 120) + 10);
                
                int x = (int) ((Math.random() * 40) + 10);
                int y = (int) ((Math.random() * 40) + 10);
                
                g.fillRect(x, y, ht, width);
                msg = false;
                
            }   // close if
        }   // close method
    }   // close inner class
}   // close class