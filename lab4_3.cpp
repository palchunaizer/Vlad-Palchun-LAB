#include <iostream>
#include <stdlib.h>
using namespace std;

int showChoice()
{
	system("cls");
	cout << "Select the desired operation by entering the appropriate number 1-4\n";
	cout << "Then enter two numbers after the space and press Enter.";
	cout << "The result of the operation is shown below.\n";
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. Completion of the program\n";
}

float add(float a, float b)
{
	return a + b;
}

float substruct(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}

int main()
{
	int n = 0;
	float a, b;
	while (1)
		switch (n)
		{
			case 1:
				cout << add(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				cout << substruct(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				cout << multiply(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 4:
				cout << divide(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a >> b;
		}
}

