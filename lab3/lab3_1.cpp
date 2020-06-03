#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, s;
  cout << "Entrer side a ";
  cin >> a;
  cout << "Entrer side b ";
  cin >> b;
  cout << "Entrer side c ";
  cin >> c;
  s=(a+b+c) / 2;

  if(a>b+c || b>a+c || c>b+a) {
    cout << "The sides of the triangle are invalid";
  } else {
    cout << sqrt(s*(s-a)*(s-b)*(s-c));
  }

}