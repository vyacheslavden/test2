#include <iostream>
#include <string>
#include "askname.h"
using namespace std;
int main()
{
   string s1;
   string s2;
   Askname(s1, s2);
   cout << "Hello, " << s1 << " " << s2 << endl;
   return 0;
}
