
#pragma once
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

template <class T>
bool asc(const T& a, const T& b)
{
	return a > b;
}

void starLine(int size = 10, char symbol = '-')
{
	for (size_t i = 0; i < size; i++)
	{
		cout << symbol << ' ';
	}
	cout << endl;

}
int mid(int first, int second, int third)
{
	return (first + second + third) / 3;
}



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
void sortArray(T arr[], int size, bool(*method)(const T&, const T&) = asc)
{
	for (size_t j = 0; j < size - 1; j++)
	{
		for (size_t i = 0; i < size - 1 - j; i++)
		{
			if (method(arr[i + 1], arr[i])) {
				swap(arr[i + 1], arr[i]);
			}
		}
	}
}
template<class T>
void mult10(T& num)
{
	num *= 10;
}

template< class T>
int* foreach(T* arr, int size, void(*func)(T&) = mult10)
{
	for (size_t i = 0; i < size; i++)
	{
		func(arr[i]);
	}
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
template<class T>
T maxValueArray(T arr[], int size)
{
	T maxValue = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}
	return maxValue;
}
template <class T>
int countValueArray(T arr[], int size, T num_count)
{
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == num_count)
		{
			count++;
		}
	}
	return count;
}
template<class T>
T sumValueArray(T arr[], int size)
{
	auto sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <class T>
int* AppendInArray(T* arr[], int* size, T append)
{
	T* temp = new T[*size + 1];
	for (size_t i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = append;
	delete[] arr;
	(*size)++;
	return temp;
}
int* SumProdValueArray(int* arr, int size)
{
	int* res = new int[2] {0, 1};

	for (size_t i = 0; i < size; i++)
	{
		res[0] += arr[i];
		res[1] *= arr[i];

	}

	return res;
}


int* FindInArray(int* arr, int size, int* arr1, int size1)
{
	int* p = nullptr;
	for (size_t i = 0; i < size; i++)
	{
		if (arr1[i] == arr[i])
		{
			p = &arr[i];
		}
	}
	return p;
}

template <class T>
void createArray(T**& arr, int row, int col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}
template < class T>
void setArray(T** arr, int row, int col, int min = 0, int max = 9)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}
template <class T>
void printArray(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
template <class T>
void deleteArray(T**& arr, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}
//template <class T>
//void printArray(T** arr)
//{
//	int block = _msize(*arr);
//	int row = block / sizeof(*T);
//	int block2 = _msize(arr);
//	int col = block2 / sizeof(T)
//
//	for (size_t i = 0; i < row; i++)
//	{
//		for (size_t j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//	}
//	cout << endl;
//}
template <class T>
void adddRowInEnd(T**& arr, int& row, int col, T* newrow = nullptr)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		temp[i] = arr[i];
	}
	temp[row] = new T[col];
	for (size_t i = 0; i < col; i++)
	{
		temp[row][i] = (newrow != nullptr) ? newrow[i] : 0;
	}
	delete[] arr;
	row++;
	arr = temp;
}

template < class T >
void adddRowInstart(T**& arr, int& row, int col, T* newrow = nullptr)
{
	T** temp = new T * [row + 1];
	temp[0] = newrow;
	for (size_t i = 0; i < row; i++)
	{
		temp[i + 1] = arr[i];
	}
	delete[] arr;
	arr = temp;
	row++;
}

int*** createArray3D(int* arr)
{
	int count = 0;
	int size = _msize(arr) / sizeof(int);
	for (size_t i = 2; i < size; i++)
	{
		if (size % i == 0)
		{
			count++;
		}
	}
	int*** m = new int** [count];
	int k = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (size % i == 0)
		{
			int row = i;
			int col = size / i;
			createArray(m[k], row, col);
			for (size_t j = 0; j < size; j++)
			{
				m[k][j / col][j % col] = arr[j];
			}
			k++;
		}
	}
	return m;
}
void print(int*** arr)
{
	int count = _msize(arr) / sizeof(int**);
	for (size_t k = 0; k < count; k++)
	{
		int row = _msize(arr[k]) / sizeof(int*);
		int col = _msize(arr[k][0]) / sizeof(int);
		printArray(arr[k], row, col);
		cout << endl;
	}
}

//int** multiplayMatrix(int** a, int** b)
//{
//	int r1 = _msize(a) / sizeof(int*);
//	int c1 = _msize(a[0]) / sizeof(int);
//
//
//	int r2 = _msize(b) / sizeof(int*);
//	int c2 = _msize(b[0]) / sizeof(int);
//
//	int** m = nullptr;
//	createArray(m, r1, c2);
//
//}
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