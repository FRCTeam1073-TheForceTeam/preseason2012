/*The code in this file gets executed when the program runs
*It creates a window based on the properties we set, and loads in the paint method from a component
*/
import javax.swing.JFrame;
import java.awt.Color;
public class ImageViewer {
	public static void main(String[] args){
		JFrame frame = new JFrame();
		
		final int LENGTH = 500;
		final int HEIGHT = 500;
		final String TITLE = "Hello world!";
		
		frame.setSize(LENGTH, HEIGHT);
		frame.setTitle(TITLE);
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	//house keeping ignore this
		
		//frame.add(new SmartTriangle(Color.RED));
		frame.add(new RandomTriangle());	//change Drawing to Triangle or Another class to use that instead
		frame.setVisible(true);	//makes the Window appear on the screen.
		
	}
}
