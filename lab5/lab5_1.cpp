#include <iostream>
using namespace std;

int main()
{
    int i, n, sum, a[20];
	float v;
    cout << "Enter the number of array elements: ";
    cin >> n;
	cout << "Enter the integers in space as an integer: " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
	sum = 0; v = 0;
	for (i = 0; i < n; i++) sum = sum + a[i];
	if (n != 0) v = (float)sum / n;
	cout << "The sum of the elements of the array = " << sum << endl;
	cout << "The average value of the array elements = " << v << endl;
    return 0;
}
