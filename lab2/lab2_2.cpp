#include <iostream>
#include <cmath>
using namespace std;

int main() {

  double a,b,c,D,x1,x2;
cout << "Enter a\n";
cin >> a;
cout << "Enter b\n";
cin >> b;
cout << "Enter c\n";
cin >> c;

D = b * b - 4 * a * c;

if (D > 0)
  {
    x1 = ((-b) + sqrt(D)) / (2 * a);
    x2 = ((-b) - sqrt(D)) / (2 * a);
    cout << "x1 = " << x1 << "\n";
    cout << "x2 = " << x2 << "\n";
  }

  if (D == 0) 
  {
    x1 = -(b / (2 * a));
    cout << "x1 = x2 = " << x1 << "\n";
  }

if (D < 0) 
    cout << "There are no real roots";
}