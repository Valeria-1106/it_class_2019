#include "stdafx.h"
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int randInt(int a, int b)
{
	return a + rand() % (b - a + 1);
}

void printArray(int* arr, int N)
{
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void selection_sort(int *arr, int N){
	for (int i = 0; i<N; i++){
		int min = i;
		for (int j = i + 1; j<N; j++){
			if (arr[j]<arr[min])
				min = j;
			i++;
		}
		if (min != i)
			swap(arr[min], arr[i]);
	}
}

int main()
{
	srand(time(0));

	const int size = 10000;
	int A[size];

	for (int i = 0; i < size; i++)
		A[i] = randInt(0, 100);

	if (size < 20000)
		printArray(A, size);

	clock_t tStart = clock();

	selection_sort(A, size);

	cout << "Time: " << (double)(clock() - tStart) / CLOCKS_PER_SEC << endl;

	if (size < 20000)
		printArray(A, size);

	system("pause");
	return 0;
}

