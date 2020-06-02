
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  
  srand(time(0));
  bool done;
  do
  {
    int i = rand() % 101;
   while(true)
   {
 cout << "The computer ordered you a number"<<endl;
      int num;
 cin >> num;
      if (i > num){
 cout << "Greater" << endl;}
      if(i < num) {cout<<"Smaller"<<endl;}
      
 if(i == num){cout << "Win" << endl;
          break;}
          }
 cout << "Again?(y/n)? ";
    char c;
 cin >> c;
 done = (c != 'y');
  } while (!done);
}