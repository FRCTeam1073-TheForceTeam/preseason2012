import java.awt.Component;
import java.awt.Graphics;
import java.awt.Color;
public class Ellipse extends Component{
	public Ellipse(){}
	public void paint(Graphics g){
		int centerXPosition = 250;
		int centerYPosition = 250;
		int width = 90;
		int height = 140;
		g.drawOval(centerXPosition, centerYPosition, width, height);
	}
}
