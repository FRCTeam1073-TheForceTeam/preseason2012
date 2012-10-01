/*
 * paint logic that allows for a set amount of ellipses to be painted within an x and y range.
 * This class uses data that is passed in through a constructor and the for loop.
 */
import java.awt.Component;
import java.awt.Graphics;
import java.awt.Color;
import java.util.Random;
public class RandomDots extends Component{
	private int numOfDots;
	private int minx, miny;
	private int xbounds, ybounds;
	private Color color;
	private Random rand;
	public RandomDots(int numOfDots, int xbounds, int ybounds, Color color){
		this(numOfDots, 0, xbounds, 0, ybounds, color);
		//by default there is no min location for the dots...
	}
	public RandomDots(int numOfDots, int minx, int xbounds, int miny, int ybounds, Color color){
		this.numOfDots = numOfDots;
		this.xbounds = xbounds;
		this.ybounds = ybounds;
		this.minx = minx;
		this.miny = miny;
		this.color = color;
		rand = new Random();
	}
	public void paint(Graphics g){
		final int MAX_BASE = 40;	//tweak these to adjust the possible sizes of the dots
		//"Remember, you don't have to be a geek to tweak" ~ Rachel Sedlacek
		final int MIN_SIZE = MAX_BASE - 20;
		g.setColor(color);
		for (int i = 0; i < numOfDots; i++){	//runs the code in this bracket numOfDots times
			int x = rand.nextInt(xbounds) + minx;
			int y = rand.nextInt(ybounds) + miny;
			int width = rand.nextInt(MAX_BASE) + MIN_SIZE;
			int height = rand.nextInt(MAX_BASE) + MIN_SIZE;
			g.fillOval(x, y, width, height);
		}
	}
}
