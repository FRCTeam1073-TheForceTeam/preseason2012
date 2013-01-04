/*
 * Class that paints an ellipse to a defined position. This is "smarter" because it gets information
 * passed into the class from a constructor. This class also contains functions for calculating
 * the different aspects of an ellipse.
 */
import java.awt.Component;
import java.awt.Graphics;
import java.awt.Color;
public class SmartEllipse extends Component{
	private int x, y;
	private int width, height;
	public SmartEllipse(int x, int y, int width, int height){
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;
	}
	public void paint(Graphics g){
		g.setColor(Color.red);
		g.drawOval(x, y, width, height);
	}
	public int a(){
		if (width >= height)
			return width;
		return height;
	}
	public int b(){
		if (a() == height)
			return width;
		return height;
	}
	public double c(){	//doubles are variables that can retain a decimal.
		return Math.sqrt((a() * a()) - (b() * b()));
	}
	public double eccentricity(){
		return c()/a();
	}
}
