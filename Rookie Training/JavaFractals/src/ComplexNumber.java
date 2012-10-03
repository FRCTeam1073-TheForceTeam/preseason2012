//evin ugur
//class used to represent complex numbers... contains some functions to perform basic math
public class ComplexNumber {
	private double real, imaginary;
	public ComplexNumber(){
		this(0.0, 0.0);
	}
	public ComplexNumber(double real, double imaginary){
		setReal(real);
		setImaginary(imaginary);
	}
	public double getReal(){ // get reeeaaaallllll, man
		return real;
	}
	public double getImaginary(){
		return imaginary;
	}
	public void setReal(double real){
		this.real = real;
	}
	public void setImaginary(double imaginary){
		this.imaginary = imaginary;
	}
	public ComplexNumber getComplexConjugate(){
		return new ComplexNumber(real, -imaginary);
	}
	public ComplexNumber getSquare(){
		return multiply(this);
	}
	public ComplexNumber add(ComplexNumber in){
		return new ComplexNumber(real + in.getReal(), imaginary + in.getImaginary());
	}
	public ComplexNumber subtract(ComplexNumber in){
		return new ComplexNumber(real - in.getReal(), imaginary - in.getImaginary());
	}
	public ComplexNumber multiply(ComplexNumber in){
		double real = this.real * in.real - this.imaginary - in.getImaginary();
		double imaginary = this.real * in.getImaginary() + this.imaginary * in.getReal();
		return new ComplexNumber(real, imaginary);
	}
	public ComplexNumber divide(ComplexNumber denominator){
		double denom = denominator.getMagnitude();
		double numerator_real = real * denominator.getReal() + imaginary * denominator.getImaginary();
		double numerator_imaginary = imaginary * denominator.getReal() - real * denominator.getImaginary();
		return new ComplexNumber(numerator_real/denom, numerator_imaginary/denom);
	}
	public boolean equals(ComplexNumber in){
		return (real == in.getReal()) && (imaginary == in.getImaginary());
	}
	public double getMagnitude(){
		return real * real + imaginary * imaginary;
	}
	public String toString(){
		char sign = (imaginary < 0) ? '-' : '+';
		return '(' + real + ", " + sign + imaginary + "i)";
	}
}
