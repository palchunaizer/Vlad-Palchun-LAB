#include <iostream>
using namespace std;

int main()
{
    int i, j, size, a[20][20], m, n;
    cout << "Enter the size of the square matrix ";
    cin >> size;
	cout << "Enter spaces of the array as an integer as a space " << endl;
    for (i = 0; i < size; i++)
		for (j = 0; j < size; j++) cin >> a[i][j];
	m = 0; n = 0;
	for (i = 0; i < size; i++) m = m + a[i][i];
	for (i = 0; i < size; i++) n = n + a[i][size-i-1];
	cout << "The sum of the left diagonal of the matrix = " << m << endl;
	cout << "The sum of the right diagonal of the matrix = " << n << endl;
    return 0;
}

