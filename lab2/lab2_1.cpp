#include <iostream>
using namespace std;

int main() {
  cout << "Enter the sides of the triangle\n";
  int a, b, c, sum;
  cin >> a;
  cin >> b;
  cin >> c;
  sum = a + b + c;

  if (sum == 180) {
    cout << "The triangle is valid"; 
 } else {
   cout << "The triangle is not valid";
 }
  
}