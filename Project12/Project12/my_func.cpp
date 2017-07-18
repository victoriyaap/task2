#include "my_func.h""
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool WriteFile(string& msg)
{
	ofstream fout;
	fout.open("file.txt", ios::trunc);
	fout << msg;
	fout.close();
	return 0;
}