#include <iostream>
#include "DZ8.h"

using namespace std;

void DZ1()
{
	cout << "//===================================================[DZ1]===================================================//\n";
}

void DZ2()
{
	cout << "\n\n//===================================================[DZ2]===================================================//";
}

void DZ3()
{
	cout << "\n\n//===================================================[DZ3]===================================================//";
}

void END()
{
	cout << "\n\n//===================================================[END]===================================================//\n\n";
}



int main()
{
	//DZ1 ===============================================================================================
	{
		DZ1();
		cout << "Task 1:\n";
		int numerator = 10;
		double denominator = 18;
		try
		{
			if (denominator == 0) throw overflow_error("Division by zero");
			cout << numerator << " / " << denominator << " = " << div(numerator, denominator);
		}
		catch (overflow_error)
		{
			cout << "Division by zero!";
		}
	}

	//DZ2 ===============================================================================================
	{
		DZ2();
		cout << "\n\nTask 2:\n";
		Bar* bar = new Bar();
		int n = 0;
		try
		{
			bool nNotZero = true;
			while (nNotZero)
			{
				cout << "Enter n: ";
				cin >> n;
				if (n != 0)
				{
					bar->set(n);
				}
				else nNotZero = false;
			}
		}
		catch (Ex& e)
		{
			cout << "Exception thrown, code " << e.getX();
		}
		delete bar;
	}

	//DZ3 ===============================================================================================
	{
		DZ3();
		cout << "\nTask 3:\n";
		int fieldSize = 10;
		Robot* robot = new Robot(fieldSize);

		while (true)
		{
			robot->printCoordinates();
			robot->move();
		}
		delete robot;
		END();
	}
}