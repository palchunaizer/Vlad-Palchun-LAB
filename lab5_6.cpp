#include <iostream>
using namespace std;

int main()
{
    int i, j, m, n, a[20][20], b[20][20], c[20][20];
    cout << "Enter the size of the square matrix ";
    cin >> m >> n;
	cout << "Enter the elements of the first array as an integer with a space " << endl;
    for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) cin >> a[i][j];
	cout << "Enter spaces of the second array as an integer with a space " << endl;
    for (i = 0; i < m; i++)
		for (j = 0; j < n; j++) cin >> b[i][j];
	for (i = 0; i < m; i++) 
		for (j = 0; j < n; j++) c[i][j] = a[i][j] + b[i][j];
 	for (i = 0; i < m; i++)
	{	
		cout << endl;
		for (j = 0; j < n; j++) cout << c[i][j] << " ";
	}	 
    return 0;
}

