#include "Calculator.h"
#include <string>
#include <cmath>

namespace Calculator
{
	double current_value = 0.0;
	double memory_Value = 0.0;
	double memory_Recalled = 0.0;

	// Get the current value of the calculator
	double currentValue ()
	{
		return current_value;
	}

	// Add two numbers together and return the sum
	double add (double left, double right)
	{
		current_value = left + right;
		return current_value;
	}
	// Subtract two numbers together and return the sum
	double subtract(double left, double right)
	{
		current_value = left - right;
		return current_value;
	}
	// Multiply two numbers together and return the sum
	double multiply(double left, double right)
	{
		current_value = left * right;
		return current_value;
	}
	// Divide two numbers together and return the sum
	double divide(double left, double right)
	{
		current_value = left / right;
		return current_value;
	}
	
	// X^y 
	double pow(double left, double right)
	{//Runtime Error: stack overflow error: 0x0000000000000001 0x000000695b203f80
		{
			return pow(left, right);
		}
		
	}

	// Invert a number and return inverted value
	double invert ()
	{
		return current_value * -1.0;
	}
	// Clearing Calculator
	//void clearCalc()
	//{
		//current_value = 0.0;
		//left_value = "";
		//right_value = "";

	//}

	// Storing current value as memory value
	double memory_Store (double)
	{
		memory_Value = current_value;
		return memory_Value;
	}

	// Recalling Function
	double memory_Recall (double)
	{
		memory_Recalled = memory_Value;
		return memory_Recalled;
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
