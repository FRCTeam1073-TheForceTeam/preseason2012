import java.awt.Component;
import java.awt.Graphics;
import java.awt.Color;
public class DevinDrawing extends Component{
	public DevinDrawing() {}
	public void paint(Graphics g) {
		g.setColor(Color.yellow);
		int sunCenterx = 50;
		int sunCentery = 50;
		int sunwigth = 150;
		int sunheight = 120;
		g.fillOval(sunCenterx, sunCentery, sunwigth, sunheight);
		g.setColor(Color.black);
		int housex = sunCenterx + sunwigth + 20;
		int housey = sunCentery + sunheight + 40;
		int housewidth = 200;
		int househeight = 200;
		int roofcenterx = housex+housewidth/2;
		int roofcentery = 100;
		g.drawLine(housex, housey, roofcenterx, roofcentery);
		g.drawLine(housex+housewidth, housey, roofcenterx, roofcentery);
		g.drawRect(housex, housey, housewidth, househeight);
		g.setColor(Color.MAGENTA);
		int doory = housey+househeight-80;
		g.drawRect(housex+113, doory, 70, housey + househeight - doory);
	}   
}