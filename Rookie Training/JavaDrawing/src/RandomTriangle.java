import java.awt.Color;
import java.util.Random;
public class RandomTriangle extends SmartTriangle{
	private static Random rand = new Random();
	
	int randomX1, randomY1;
	int randomX2, randomY2;
	int randomX3, randomY3;
	final int MAX = 400;
	
	
	public RandomTriangle(){
		super(randomColor());
		randomX1 = rand.nextInt(MAX);
		randomY1 = rand.nextInt(MAX);
		randomX2 = rand.nextInt(MAX);
		randomY2 = rand.nextInt(MAX);
		randomX3 = rand.nextInt(MAX);
		randomY3 = rand.nextInt(MAX);
	}
	private static Color randomColor(){
		int R = rand.nextInt(256);
		int G = rand.nextInt(256);
		int B = rand.nextInt(256);
		return new Color(R, G, B);
	}
	protected int x1() {return randomX1;}
	protected int y1() {return randomY1;}
	
	protected int x2() {return randomX2;}
	protected int y2() {return randomY2;}
	
	protected int x3() {return randomX3;}
	protected int y3() {return randomY3;}
	
}
