
#include <iostream>
#include <Windows.h>
#include <cmath>
#include "function.h"
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
	/*int M, N, sizeC;
	//Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури). 
	//Необхідно створити третій масив мінімально можливого розміру, 
	//у якому потрібно зібрати елементи масиву A,
	//що не включаються в масив B, без повторень. 

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


	






	////lesson 10, 11, 12


	//int row, col;
	//cin >> row >> col;
	//int** p = nullptr;
	//createArrray(p, row, col);
	//setArray(p, row, col);
	//printArray(p, row, col);
	//adddRowInEnd(p, row, col);
	//printArray(p, row, col);
	

	














	//const int* p_size = &size;
	//int arr1[size];

	//int len = 3500;
	//void(*director)() = prorab(len);
	//director();

	//int* res = SumProdValueArray(arr, size);

	//int ammos[] = { 25, 50, 10 };
	//void(*shoot)(int*) = selectWeapon(ammos);
	//shoot(ammos);



	/*setArray(arr, size);
	printArray(arr, size);

	for (int i = size - 1; i >= 0; i--)
	{
		cout << *(arr + i) << " ";
	}*/

	//int* p = new int[size];
	//setArray(p, size);
	//printArray(p, size);
	//int* temp = new int[size + 1];
	/*
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = p[i];
	}
	temp[size] = 999;
	delete[] p;
	p = temp;
	size++;
	printArray(p, size);*/


	//AppendInArray(arr, size, 20);
	//printArray(arr, size);
	//lesson 9
	//int a = 5;
	//cout << typeid(a).name() << endl;
	//cout << &a << endl;
	//cout << sizeof(a) << endl;



	//lesson 8
	/*const int size = 10;
	int arr[size];

	setArray(arr, size, 0, 10);

	printArray(arr, size);

	sortArray(arr, size);*/
	//cout << endl;
	//starLine();
	//findArray(arr, size, 5);
	//printArray(arr, size);
	//starLine();
	//cout << maxValueArray(arr, size) << endl;
	//starLine();
	//cout << countValueArray(arr, size, 5) << endl;
	//starLine();
	//cout << sumValueArray(arr, size) << endl;
	//lesson 7
	/*const int size = 10;
	int arr[size];*/

	/*starLine();
	starLine(20);
	starLine(10, '*');*/

	/*setArray(arr, size, 0, 10);

	printArray(arr, size);

	sortArray(arr, size);

	printArray(arr, size);*/

	//cout << findArray(arr, size, 5) << endl;

	//mid(1, 2, 3);





	//lesson 6

	/*const int row = 5, col = 5;
	int a[row][col];
	int min = 0, max = 9, maxValue, minValue, sum;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			bool flag = false;
			while (!flag)
			{
				int r = rand() % (max - min + 1) + min;
				for (size_t k = 0; k < row; k++)
				{
					for (size_t m = 0; m < col; m++)
					{
						if (a[k][m] == r)
						{
							flag = true;
						}
					}
				}
				if (!flag)
				{
					a[i][j] = r;
					break;

				}
				flag = false;
			}
		}

	}
	maxValue = a[0][0];
	minValue = a[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (a[i][j] > maxValue)
			{
				maxValue = a[i][j];
			}
			if (a[i][j] < minValue)
			{
				minValue = a[i][j];
			}
		}
	}
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (a[i][j] == maxValue)
			{
				SetColor(Red, Black);
			}
			else if(a[i][j] == minValue)
			{
				SetColor(Green, Black);
			}
			else
			{
				SetColor(White, Black);
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	*/






	//lesson 4,5
	/*const int size = 10;
	int a[size];
	int min = 0, max = 10;


	for (size_t i = 0; i < size; i++)
	{
		a[i] = rand() % (max - min + 1) + min;
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;*/



	//for (size_t i = 0; i < size; i++)
	//{
	//	int t = a[0];
	//	a[0] = a[size - 1];
	//	a[size - 1] = t;
	//	
	//}
	/*for (long long i = size - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}*/

	/*for (size_t j = 0; j < size - 1; j++)
	{
		for (size_t i = 0; i < size - 1 - j; i++)
		{
			if (a[j] < a[j + 1])
			{
				int t = a[j];
				a[j] = a[size - 1 - j];
				a[size - 1 - j] = t;
			}
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}*/






	//int a, sum;
	//a = 0;
	//sum = 0;

	//do
	//{
	//	cin >> a;
	//	sum += a;
	//} while (a != 0);
	//{
	//	sum += a;
	//	cout << sum;
	//}

	/*cin >> a;
	//while (a != 0);
	{
		cin >> a;
		sum += a;
		cout << sum;
	}*/







	//cout << "a" <, endl;

	//type name;
	//int 4b
	//double 
	//float x, y;

	//cin >> x;
	//y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	//cout << y << endl;
	/*int a;
	cin >> a;
	int b = a / 100;
	int c = a / 10 % 10;
	int d = a % 10;
	int a_sum = b + c + d;
	int a_mul = b * c * d;
	cout << a_sum << endl;
	cout << a_mul << endl;*/

	///lesson 2

	/*int a, b,c;
	cin >> a >> b >> c;


	if (a > b and a >c) {
		cout << a << endl;

	}
	else if(b > a and b > c) {
		cout << b << endl;

	}
	else if (c > a and c > b) {
		cout << c << endl;

	}
	else {
		cout
	}*/

	/*int a, b;
	char c;
	cin >> a >> c >> b;*/
	/*if (c == '+') {
		cout << a + b << endl;
	}
	else if (c == '-')
	{
		cout << a - b << endl;
	}
	else if (c == '*') {
		cout << a * b << endl;
	}
	else if (c == '/') {
		cout << a / b << endl;
	}
	else {
		cout << "wrong operator" << endl;
	}*/
	/*int a;
	cin >> a;
	switch (a) {
	case 9: case 10: case 11: cout << "autuhm" << endl; break;

	case 12: case 1: case 2: cout << "winter" << endl; break;

	case 3: case 4:case 5: cout << "spring" << endl; break;

	case 6: case 7: case 8: cout << "summer" << endl; break;
	default:
		cout << "wrong number" << endl;
	}*/
	/*switch (c) {
		case
		'+': cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		default:
			cout << "wrong operator" << endl;
	}*/
	/*int a;
	cin >> a;
	if (a == 9 || a == 10 || a == 11) {
		cout << "autuhm" << endl;
	}
	else if (a == 12 || a == 1 || a == 2) {
		cout << "winter" << endl;
	}
	else if (a == 3 || a == 4 || a == 5) {
		cout << "spring" << endl;
	}
	else if (a == 6 || a == 7 || a == 8) {
		cout << "summer" << endl;
	}
	*/

	//lesson 3
		/*float price, kg;
		cin >> price;
		kg = 0.10;

		for (size_t i = 1; i <= 10; i++)
		{

			cout << " kg " << kg << " price " << price * kg << endl;
			kg += 0.1;

		}*/
		/*float a;
		int n;
		cin >> a >> n;
		for (size_t i = 0; i <= n; i++)
		{
			cout << a << endl;

		}*/
		/*cout << " Mo Tu We Th Fr";
		SetColor(LightRed, White);
		cout << " Sa Su" << endl;
		SetColor(Black, White);
		for (size_t i = 1; i <=31; i++)
		{
			if (i % 7 == 6 || i % 7 == 0)
			{
				SetColor(LightRed, White);
			}
			cout << setw(3) << i ;
			SetColor(Black, White);

			if (i % 7 == 0)
			{
				cout << endl;
			}

		}*/
		/*cout << " Mo Tu We Th Fr";
		SetColor(LightRed, White);
		cout << " Sa Su" << endl;
		SetColor(Black, White);
		int k = 4;

		for (int i = 1 - k; i <= 31; i++)
		{
			if (i <= 0)
			{
				cout << "   ";
			}
			if ((i+k) % 7 == 2 || (i+k) % 7 == 3)
			{
				SetColor(LightRed, White);
			}
			cout << setw(3) << i;
			SetColor(Black, White);

			if ((i+k) % 7 == 3)
			{
				cout << endl;
			}



		}*/








	return 0;
}

