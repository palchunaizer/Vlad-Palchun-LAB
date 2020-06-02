#include <iostream>
#include <stdlib.h>
using namespace std;

struct complex
{
	float x; //real
	float y; //imagine
};

int showChoice()
{
	system("cls");
	cout << "Select the mathematical operation by entering the corresponding numbers 1-4, and press Enter.\n";
	cout << "Then enter the real and imaginary part of the first complex number through the space and press Enter.\n";
	cout << "In the same way, the second complex number. \ NThe result of the operation will be shown below.\n";
	cout << "To return to the main menu, press any key.\n";
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. Completion of the program\n";
}

complex add(complex a, complex b)
{
	complex c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

complex substruct(complex a, complex b)
{
	complex c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

complex multiply(complex a, complex b)
{
	complex c;
	c.x = a.x * b.x - a.y * b.y;
	c.y = a.x * b.y + b.x * a.y;
	return c;
}

complex divide(complex a, complex b)
{
	complex c;
	float d;
	d = b.x * b.x + b.y * b.y;
	c.x = (a.x * b.x + a.y * b.y) / d;
	c.y = (b.x * a.y - a.x * b.y) / d;
	return c;
}

int main()
{
	int n = 0;
	complex a, b, c;
	while (1)
		switch (n)
		{
			case 1:
				c = add(a, b);
				cout << c.x << " " << c.y << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				c = substruct(a, b);
				cout << c.x << " " << c.y << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				c = multiply(a, b);
				cout << c.x << " " << c.y << endl; 
				system("pause");
				n = 0;
				break;
			case 4:
				c = divide(a, b);
				cout << c.x << " " << c.y << endl; 
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a.x >> a.y >> b.x >> b.y;
		}
}