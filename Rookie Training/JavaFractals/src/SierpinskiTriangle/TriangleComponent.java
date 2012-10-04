//Kate Cherian APCS Period 2   
//This program creates a triangle component which may be added to a frame by drawing three lines 
//arranged in a triangular shape.

import java.awt.Graphics;    
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.geom.Line2D;
import javax.swing.JComponent;

public class TriangleComponent extends JComponent
{
	Line2D.Double side1; 
	Line2D.Double side2; 
	Line2D.Double side3; 
	
	Point p1;
	Point p2;
	Point p3;
	
	public TriangleComponent(Point p1, Point p2, Point p3) {
		side1 = new Line2D.Double(p1, p2);
		side2 = new Line2D.Double(p2, p3);
		side3 = new Line2D.Double(p3, p1);
		
		this.p1 = p1;
		this.p2 = p2;
		this.p3 = p3;
	} 
	
	public void paintComponent(Graphics g) 
	{
		Graphics2D g2 = (Graphics2D) g;
		
		g2.draw(side1);		
		g2.draw(side2);
		g2.draw(side3);
	}
	
	public void setTriangle(Point p1, Point p2, Point p3){
		side1.setLine(p1, p2);
		side2.setLine(p2, p3);
		side3.setLine(p3, p1);
	}
	
	public Line2D.Double getSide1() {return side1;}
	public Line2D.Double getSide2() {return side2;}
	public Line2D.Double getSide3() {return side3;}
	
	public Point getP1() {return p1;}
	public Point getP2() {return p2;}
	public Point getP3() {return p3;}
	
	public Point getCenter(Line2D.Double line) {
		double x = (line.x1 + line.x2)/ 2.0; 
		double y = (line.y1 + line.y2)/2.0;
		Point center = new Point();
		center.setLocation(x, y);
		return center;
	}
}
