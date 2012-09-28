import java.awt.Component;
import java.awt.Graphics;
import java.awt.Color;
public class Triangle extends Component{
	public Triangle(){}
	public void paint(Graphics g){
		g.setColor(Color.RED);
		
		int x1 = 100, y1 = 100;
		int x2 = 321, y2 = 155;
		int x3 = 400, y3 = 322;
		
		g.drawLine(x1, y1, x2, y2);
		g.drawLine(x1, y1, x3, y3);
		g.drawLine(x3, y3, x2, y2);
		
	}
}
