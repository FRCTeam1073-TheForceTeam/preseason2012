/*
 * basic logic that draws a circle to a defined position
 */
import java.awt.Graphics;
import java.awt.Component;
import java.awt.Color;
public class Circle extends Component{
	public Circle(){}
	public void paint(Graphics g){
		int centerXPosition = 250;
		int centerYPosition = 250;
		int radius = 150;
		g.drawOval(centerXPosition, centerYPosition, radius, radius);
	}
}
