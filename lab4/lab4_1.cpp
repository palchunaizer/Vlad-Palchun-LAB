#include <iostream>
using namespace std;

int prime_numbers(int x, int y)
{
    int a, b, c, d; 
    int n = 0;
    for (a = x; a <= y; a++)
    {
        c = a / 2;
        d = 0;
        for (b = 2; b <= c; b++)
            if ((a % b) == 0)
            {
                d++;
                break;
            }
        if (d == 0)
        {
            cout << a << "\t";
            n++;
            if ((n > 0) && ((n % 10) == 0)) cout << "\n";
        }
    }
	return n;
}

int main()
{
	int x, y;
    cout << "\tSimple numbers\n";
    cout << "Enter a range of prime numbers X and Y: ";
    cin >> x >> y;
    cout << "\nQuantity: " << prime_numbers(x, y) << endl;
	return 0;
}
