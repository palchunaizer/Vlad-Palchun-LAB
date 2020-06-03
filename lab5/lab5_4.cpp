#include <iostream>
using namespace std;

int MIX(int a[], int m, int b[], int n, int c[], int &p)
{
	int i, j, k;

	p = m + n;
    j = 0; k = p - 1;
	for (i = 0; i < m; i++)
		if (a[i] % 2 == 0)
		{
			c[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k--;
		}
	for (i = 0; i < n; i++)
		if (b[i] % 2 == 0)
		{
			c[j] = b[i];
			j++;
		}
		else
		{
			c[k] = b[i];
			k--;
		}
	return p;
}

int main()
{
    int i, m, a[20], n, b[20], p, c[20];
    cout << "Enter the number of elements of the array A ";
    cin >> m;
	cout << "Insert elements of array A as an integer as a space " << endl;
    for (i = 0; i < m; i++) cin >> a[i];
	cout << "Enter the number of elements of the array B ";
    cin >> n;
	cout << "Insert elements of array B as an integer as a space " << endl;
    for (i = 0; i < n; i++) cin >> b[i];
	MIX(a, m, b, n, c, p);
	cout << endl;
    for (i = 0; i < p; i++) cout << c[i] << " "; 
    cout << endl;
    return 0;
}


