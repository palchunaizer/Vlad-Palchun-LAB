#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cout << "Input five grades from zero to one hundred across space: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	f = (a + b + c + d + e) / (float)5;
	cout << "Average grade: " << f << endl;
	switch (f / 10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			cout << "First division";
			break;
		case 5:
			cout << "Second division";
			break;
		case 4:
			cout << "Third division";
			break;
		default:
			cout << "Failure";
	}	
	return 0;
}