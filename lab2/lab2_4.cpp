#include <iostream>
using namespace std;

int main()
{

	char c;
	cout << "Input char: ";
	cin >> c;
	int n = (int)c;
	if (n >= 48 && n <= 57)
		cout << "|0 – 9|: " << n; 
	else if (n >= 65 && n <= 90)
		cout << "|A – Z|: " << n;
	else if (n >= 97 && n <= 122)
		cout << "|a – z|: " << n; 
	else if (n >= 0 && n <= 47 | n >= 58 && n <= 64 | n >= 91 && n <= 96 | n >= 123 && n <= 127)
		cout << "|Special chars|: " << n; 
	else
		cout << "|-|: " << n; 
	return 0;

}
