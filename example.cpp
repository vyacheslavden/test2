#include <iostream>
#include <string>

using namespace std;

int main()
{
   string s1;
   string s2;
   cout << "Enter your name: ";
   cin >> s1;
   cout << s1.length() << endl; // line to remove from commit
   cout << "Now enter you last name: ";
   cin >> s2;
	cout << "Hello, " << s1 << " " << s2 << endl;
	return 0;
}
