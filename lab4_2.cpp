#include <iostream>
using namespace std;

int zero_small(int &num_1, int &num_2)
{
	if (num_1 < num_2) 
		num_1 = 0;
	else if (num_1 > num_2)
		num_2 = 0;
	return 0;
}

int main()
{
	int num_1 , num_2;
	cout << "Enter two numbers, less than zero\n";
	cin >> num_1 >> num_2;
	zero_small(num_1, num_2);
	cout << num_1 << " " << num_2;
	return 0;
}

