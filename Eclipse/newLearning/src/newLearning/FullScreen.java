package newLearning;
 import java.awt.*;
 import javax.swing.*;
 
public class FullScreen {

	public static void main(String [] srgs) {
		GraphicsEnvironment graphics = GraphicsEnvironment.getLocalGraphicsEnvironment();
		GraphicsDevice device = graphics.getDefaultScreenDevice();
		
		BorderLayout layout = new BorderLayout();
		Box box = new Box(BoxLayout.Y_AXIS);
		JFrame frame = new JFrame("FullScreen");
		JPanel panel = new JPanel(layout);
		JLabel label = new JLabel("", JLabel.CENTER);
		JButton button = new JButton("Exit");
		
		
		button.addActionListener(Exit -> System.exit(0));
		button.setBounds(150, 40, 80, 30);
		
		label.setText("This is in fullscreen mode!");
		label.setOpaque(true);
		
		box.add(button);;

		panel.add(BorderLayout.EAST, box);
		panel.add(BorderLayout.SOUTH, label);
		
		frame.add(panel);
		frame.setUndecorated(true);
		frame.setResizable(false);
		
		device.setFullScreenWindow(frame);
	}
}
