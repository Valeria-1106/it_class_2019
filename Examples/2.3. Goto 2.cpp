#include "stdafx.h"
 #include <iostream>

using namespace std;

int main()
{
    goto skip; // ������ ����� ����������
    int z = 7;
	
skip: // �����
    z += 4; // ����� �������� ����� � ���� ����������?
		
	system("pause");
    return 0;
}