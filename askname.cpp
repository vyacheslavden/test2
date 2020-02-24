#include <string>
#include <iostream>
#include "askname.h"

using namespace std;

void Askname(string& first, string& last)
{
   cout << "Enter your name: ";
   cin >> first;
   cout << "Now enter you last name: ";
   cin >> last;
}
