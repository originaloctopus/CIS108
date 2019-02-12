#include "Calculator.h"
#include <string>
#include <cmath>

namespace Calculator
{
	double current_value = 0.0;
	double memory_Value = 0.0;
	double memory_Recalled = 0.0;
	double left_value = 00.0;

	// Get the current value of the calculator
	double currentValue ()
	{
		return current_value;
	}

	// Add two numbers together and return the sum
	void add (double left, double right)
	{
		 current_value = left + right;
	}
	// Subtract two numbers together and return the sum
	void subtract(double left, double right)
	{
		 current_value = left - right;
	}
	// Multiply two numbers together and return the sum
	void multiply(double left, double right)
	{
		 current_value = left * right;
	}
	// Divide two numbers together and return the sum
	void divide(double left, double right)
	{
		current_value = left / right;
	}
	
	// X^y 
	void power(double left, double right)
	{//Runtime Error: stack overflow error: 0x0000000000000001 0x000000695b203f80
		{
			current_value = pow(left, right);
		}
		
	}

	// Invert a number and return inverted value
	void invert ()
	{
		current_value *= -1.0;
	}

	// Storing current value as memory value
	void memory_Store (double)
	{
		memory_Value = current_value;
	}

	// Recalling Function
	void memory_Recall (double)
	{
		memory_Recalled = memory_Value;
	}

	// Memory Clear Function
	void clear_Memory()
	{
		memory_Recalled = 0;
	}

	// Clear calculator & clear screen
	void clear_Calc()
	{
		current_value = 0.0;
		
	}

}
