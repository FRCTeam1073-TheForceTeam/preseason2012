//evin ugur
//class used to represent complex numbers... contains some functions to perform basic math
public class ComplexNumber {
	private double real, imaginary;
	public ComplexNumber(){
		this(0.0, 0.0);
	}
	public ComplexNumber(double real, double imaginary){
		this.real = real;
		this.imaginary = imaginary;
	}
	public double getReal(){ // get reeeaaaallllll, man
		return real;
	}
	public double getImaginary(){
		return imaginary;
	}
	public void setReal(double real){	//probably unneeded; just reconstruct, but hey
		this.real = real;
	}
	public void setImaginary(double imaginary){	//refer to above comment...
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
	public double getMagnitude(){
		return real * real + imaginary * imaginary;
	}
}
