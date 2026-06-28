#pragma once;
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
};
template<class T>
void setArray(T arr[], int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}
template<class T>
void printArray(T arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
template<class T>
int findArray(T arr[], int size, T find_num)
{

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == find_num)
		{
			return i;
		}
	}
	return -1;

}

int* findUniqueElements(int* A, int M, int* B, int N, int* sizeC)
{
	int* C = new int[M];
	*sizeC = 0;

	for (int i = 0; i < M; i++)
	{
		if (findArray(B, N, A[i]) == -1 && findArray(C, *sizeC, A[i]) == -1)
		{
			C[*sizeC] = A[i];
			(*sizeC)++;
		}

	}
	return C;
}
int* findArrayElDifference(int* A, int M, int* B, int N, int* sizeC)
{
	int* C = new int[M + N];
	*sizeC = 0;

	for (int i = 0; i < M; i++)
	{
		if (findArray(B, N, A[i]) == -1 && findArray(C, *sizeC, A[i]) == -1)
		{
			C[*sizeC] = A[i];
			(*sizeC)++;
		}

	}

	for (int i = 0; i < N; i++)
	{
		if (findArray(A, M, B[i]) == -1 && findArray(C, *sizeC, B[i]) == -1)
		{
			C[*sizeC] = B[i];
			(*sizeC)++;
		}

	}

	return C;
}
