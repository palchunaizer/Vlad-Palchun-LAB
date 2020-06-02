#include <iostream>
using namespace std;

int main() {
  srand( time( 0 ) );
  cout << "Random number  - " << 10 + rand()  %100;
}