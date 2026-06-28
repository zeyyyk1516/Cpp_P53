#include <iostream>
#include <Windows.h>
#include <cmath>
#include "Func.h"
#include <iomanip>
#include <conio.h>;


using namespace std;


int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout.setf(ios::boolalpha);

	SetColor(White, Black);
	srand(time(0));
	//dz 9.1
	//Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
	//Необхідно створити третій масив мінімально можливого розміру,
	//у якому потрібно зібрати елементи масиву A,
	//що не включаються в масив B, без повторень.

	/*int M, N, sizeC;
	cout << "Введіть розмір масиву A: ";
	cin >> M;
	int* A = new int[M];
	setArray(A, M);
	cout << "Введіть розмір масиву B: ";
	cin >> N;
	int* B = new int[N];
	setArray(B, N);
	cout << "Масив A: ";
	printArray(A, M);
	cout << "Масив B: ";
	printArray(B, N);
	int* C = findUniqueElements(A, M, B, N, &sizeC);
	cout << "Масив C: ";
	printArray(C, sizeC);
	delete[] A, B, C;*/

	//dz 9.2
	//Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
	//Необхідно створити третій масив мінімально можливого розміру,
	//в якому потрібно зібрати елементи масивів A і B, 
	//які не є спільними для них, без повторень.

	/*int M, N, sizeC;
	cout << "Введіть розмір масиву A: ";
	cin >> M;
	int* A = new int[M];
	setArray(A, M);
	cout << "Введіть розмір масиву B: ";
	cin >> N;
	int* B = new int[N];
	setArray(B, N);
	cout << "Масив A: ";
	printArray(A, M);
	cout << "Масив B: ";
	printArray(B, N);
	int* C = findArrayElDifference(A, M, B, N, &sizeC);
	cout << "Масив C: ";
	printArray(C, sizeC);
	delete[] A, B, C;*/
	
	return 0;
}