#include "my_func.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string var;
	cout << "Enter var:\n";
	getline(cin, var);
	WriteFile(var);
	system("pause");
	return 0;
}