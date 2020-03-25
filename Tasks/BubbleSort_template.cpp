#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int RandInt(int a, int b)
{
	return a + rand()%(b-a+1);
}

void PrintArr(int *A, int N) //*A- ������ �� ������, N - ������
{
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << endl;

}

void bubble(int *A, int N)	//������� ����������
{
	for (int n = 0; n < N-1; n++)
	{
		if (A[n]>A[n + 1])
		{
			int temp = A[n + 1];
			A[n + 1] = A[n];
			A[n] = temp;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));
	const int size = 10000;  //������ �������
	int Array[size];

	for (int i = 0; i < size; i++)
		Array[i] = RandInt(1, 100); 
	//PrintArr(Array, size); //����� �������
	clock_t start = clock(); //������ ������� �������
		
	//����� ������� ���������� ������ ���� �����
	
	cout << (double)(clock() - start) / CLOCKS_PER_SEC;  //����� ������ �������
	system("pause");
	return 0;
}

