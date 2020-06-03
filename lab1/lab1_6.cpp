#include <iostream>
using namespace std;

int main() {
  int num, y, m, d, y2;

  cout << "Enter a number ";
  cin >> num;
  y = num / 365;
  y2 = num % 365; 
  m = y2 / 30;
  d = y2 % 30;
  
  cout << y << " - Years;\n" << m << " - Months;\n" << d << " - Days;\n"; 
}