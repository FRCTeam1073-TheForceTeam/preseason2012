/*
 * this is a triangle that contains method definitions for the 3 points as well as a Color
 * input. The method definitions can be overriden for other triangles - making this a smart
 * triangle
 */

import java.awt.Component;
import java.awt.Graphics;
import java.awt.Color;
public class SmartTriangle extends Component{
	private Color triangleColor;
	public SmartTriangle(Color triangleColor){
		this.triangleColor = triangleColor;
	}
	public void paint(Graphics g){
		g.setColor(triangleColor);
		g.drawLine(x1(), y1(), x2(), y2());
		g.drawLine(x1(), y1(), x3(), y3());
		g.drawLine(x2(), y2(), x3(), y3());
		
	}
	protected int x1(){return 40;}
	protected int y1(){return 100;}
	
	protected int x2(){return 300;}
	protected int y2(){return 200;}
	
	protected int x3(){return 223;}
	protected int y3(){return 42;}
}
