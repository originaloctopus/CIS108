#include <iostream>
#include <string>
#include <conio.h>
#include "Calculator.h"

using namespace std;

string left_value;
string right_value;
char op;

void shiftLeftValue (char keycode)
{
	if (keycode == '.')
	{
		if (left_value.find ('.') == string::npos)
		{
			left_value = left_value + keycode;
		}
	}
	else
	{
		left_value = left_value + keycode;
	}
}

void shiftRightValue (char keycode)
{
	if (keycode == '.')
	{
		if (right_value.find ('.') == string::npos)
		{
			right_value = right_value + keycode;
		}
	}
	else
	{
		right_value = right_value + keycode;
	}
}

int main ()
{
	// When this is true, we are working on the right value
	bool working_on_right = false;

	// This is the operation that the user requested
	char op;

	// When this is true, we should exit the program
	bool should_exit = false;

	do
	{
		char keycode = _getche ();

		if ((keycode >= '0' && keycode <= '9') || keycode == '.')
		{
			if (working_on_right)
			{
				shiftRightValue (keycode);
			}
			else
			{
				shiftLeftValue (keycode);
			}
		}
		else
		{
			switch (keycode)
			{
				case 'x':
				case 'X':
				{
					should_exit = true;
				} break;

				case 'i':
				case 'I':
				{
					Calculator::invert ();
					cout << Calculator::currentValue () << endl;
				} break;

				//Clearing calculator
				case 'c':
				case 'C':
				{
					Calculator::clear_Calc();
					cout << "Calculator cleared!";
				} break;


				case '+':
				case '-':
				case '*':
				case '/':
				case '^':
				{
					op = keycode;
					working_on_right = true;
				} break;

				case 13:
				{
					cout << endl;

					switch (op)
					{
						case '+':
						{
							Calculator::add (stod (left_value), stod (right_value));
						} break;

						case '-':
						{
							Calculator::subtract(stod(left_value), stod(right_value));
						} break;

						case '*':
						{
							Calculator::multiply(stod(left_value), stod(right_value));
						} break;

						case '/':
						{
							Calculator::divide(stod(left_value), stod(right_value));
						} break;

						// Breaks Calc. :(
						case '^':
						{
							Calculator::pow(stod(left_value), stod(right_value));
						}

						case 'S':
						case 's':
						{
							Calculator::memory_Store;
						}
						case 'R':
						case 'r':
						{
							Calculator::memory_Recall;
						}
						case 'M':
						case'm':
						{
							Calculator::clear_Memory;
						}
						case 'c':
						case 'C':
						{
							Calculator::clear_Calc;
						}
					}

					cout << Calculator::currentValue () << endl;
				} break;
			}
		}
	} while (should_exit == false);

	return 0;
}
