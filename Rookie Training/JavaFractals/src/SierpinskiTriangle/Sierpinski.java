import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Point;
import java.awt.geom.Line2D;
import java.awt.Color;
import javax.swing.JComponent;
import javax.swing.JFrame;

public class Sierpinski extends JComponent{
	
	TriangleComponent t1;
	Point p = new Point(4,3);
	TriangleComponent t2 = new TriangleComponent(p, p, p);
	TriangleComponent t3 = new TriangleComponent(p, p, p);
	TriangleComponent old;
	private int iter;
	
	public Sierpinski(int iterations, TriangleComponent starter) {
		iter = iterations;
		t1 = starter;
	}
	
	public void paintComponent(Graphics g) {
		Graphics2D g2 = (Graphics2D) g;
		g2.setColor(Color.red);
		g2.draw(t1.side1); g2.draw(t1.side2);g2.draw(t1.side3); 
		g2.setColor(Color.BLACK);
		for(int i = 0; i < iter; i++){
			old = t1;
			Iteration i1 = nextIteration(t1, old);
			drawIteration(g2, i1);
			Iteration i2 = nextIteration(t2, old);
			drawIteration(g2, i2);
			Iteration i3 = nextIteration(t3, old);
			drawIteration(g2, i3);
		}
	}
	
	public void iterate() {
		iterate(t1);
	}
	private void drawIteration(Graphics2D g2, Iteration it){
		Line2D one = new Line2D.Double(it.getOne(), it.getTwo());
		Line2D two = new Line2D.Double(it.getOne(), it.getThree());
		Line2D three = new Line2D.Double(it.getTwo(), it.getThree());
		g2.draw(one); g2.draw(two); g2.draw(three);
	}
	private void iterate(TriangleComponent t) {
		for(int i = 0; i < iter; i++) {
			Point p1 = t.getCenter(t.getSide1());
			Point p2 = t.getCenter(t.getSide2());
			Point p3 = t.getCenter(t.getSide3());
			
			t1.setTriangle(t.getP1(), p1, p3);
			t2.setTriangle(p1, t.getP2(), p2);
			t3.setTriangle(p3, p2, t.getP3());
			
			iterate(t1);
			iterate(t2);
			iterate(t3);
		}
	}
	private Iteration nextIteration(TriangleComponent t, TriangleComponent base){
		Iteration i = new Iteration(t.getCenter(t.getSide1()), t.getCenter(t.getSide2()), t.getCenter(t.getSide3()));
		t1.setTriangle(t.getP1(), i.getOne(), i.getThree());
		t2.setTriangle(i.getOne(), t.getP2(), i.getTwo());
		t3.setTriangle(i.getThree(), i.getTwo(), t.getP3());
		return i;
	}
}
