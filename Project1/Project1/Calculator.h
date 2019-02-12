#pragma once

namespace Calculator
{
	// Get the current value of the calculator
	double currentValue();

	// Add two numbers together and return the sum
	void add(double left, double right);

	// Subtract two numbers together and return the difference
	void subtract(double left, double right);

	// Multiply two numbers together and return the product
	void multiply(double left, double right);

	// Divide two numbers together and return the quotient
	void divide(double left, double right);

	// Exponent Function x to the power of y
	void power(double left, double right);

	// Invert a number and return inverted value
	void invert();

	// Memory Storage, saves current value into a variable for later 
	void memory_Store(double memory_Value);

	// Memory recall replaces current value with the previously stored value
	void memory_Recall(double memory_Recalled);

	// Clear Memory Function
	void clear_Memory();

	// Clear the calculator
	void clear_Calc();

}