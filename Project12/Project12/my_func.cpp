#include "my_func.h""
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//��������� ������, ���������� �� � ����, ���� ������ �� �������, ���������� true
bool WriteFile(string& msg)
{
	ofstream fout;
	fout.open("file.txt", ios::trunc);
	fout << msg;
	fout.close();
	if (msg.length()) return true;
	else return false;
}