#include <iostream>
using namespace std;

int main()
{
    int i, n, a[20];
    cout << "Enter the number of array elements ";
    cin >> n;
	cout << "Enter the array elements as an integer through the space " << endl;
    for (i = 0; i < n; i++) cin >> a[i]; 
    for (i = 0; i < n / 2; i++) swap(a[i], a[n-i-1]); 
    cout << endl;
    for (i = 0; i < n; i++) cout << a[i] << " "; 
    cout << endl;
    return 0;
}
