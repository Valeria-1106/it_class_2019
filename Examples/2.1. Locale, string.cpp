#include "stdafx.h"
#include <iostream>
//#include <Windows.h>
//#include <string>

//#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	//SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	//SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

	//setlocale(LC_CTYPE, "rus");
	cout << "������ 10�" << endl;
	string s;
	cin >> s;
	cout << s << endl;

	system("pause");
	return 0;
}