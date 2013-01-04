//Kate Cherian APCS Period 2    
//This program creates a frame with a triangle component inside, which was created in the other program 
//in this folder.

import java.awt.Point;
import javax.swing.JFrame;

public class TriangleViewer 
{	
	public static void main(String[] args) 
	{
		JFrame frame = new JFrame();
		frame.setSize(500, 500);
		frame.setTitle("Business 1073 Demo");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Point p1 = new Point(250, 50);
		Point p2 = new Point(125, 400);
		Point p3 = new Point(375, 400);
		
		TriangleComponent t = new TriangleComponent(p1, p2, p3);
		
		Sierpinski s = new Sierpinski(3, t);
		
		frame.add(s);
		
		frame.setVisible(true);
	}
}
