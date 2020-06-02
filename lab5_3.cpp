#include <iostream>
using namespace std;

int main()
{
    int i, n, x, y, a[20];
    cout << "Enter the number of array elements ";
    cin >> n;
	cout << "Enter spaces of the array as an integer as a space " << endl;
    for (i = 0; i < n; i++) cin >> a[i];
	x = 2147483647;
	y = -2147483648; 
	for (i = 0; i < n; i++) 
	{
		if (x > a[i]) x = a[i];
		if (y < a[i]) y = a[i];
  	}
	cout << "The smallest value of an array element = " << x << endl;
	cout << "The largest value of an array element = " << y << endl;
    return 0;
}

