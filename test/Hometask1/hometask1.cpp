#include <iostream>
#include <Windows.h>
#include <cmath>

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

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout.setf(ios::boolalpha);

	SetColor(Red, Black);

	////hometask 1.1
	//int sec, hours, min, rem_sec;
	//cout << "Введіть час в секундах:" << endl;
	//cin >> sec;
	//hours = sec / 3600;
	//rem_sec = sec % 3600;
	//min = rem_sec / 60;
	//rem_sec = rem_sec % 60;
	//cout << hours << " год. " << min << " хв. " << rem_sec << " сек." << endl;


	//hometask 1.2
/*	float num;
	int hrn, kop;
	cout << "Введіть дробове число для перетворення його в грошовий формат:" << endl;
	cin >> num;
	hrn = num;
	kop = (num - hrn) * 100;
	cout << hrn << " грн " << kop << " коп." << endl;*/


	//hometask 1.3
/*	float distance, input_time, speed_km, speed_m;
	int time, min, sec;
	cout << "Обчислення швидкості бігу." << endl;
	cout << "Введіть довжину дистанції (метрів) = ";
	cin >> distance;
	cout << "Введіть час (хв.сек) = ";
	cin >> input_time;*/

	/*min = input_time;
	sec = (input_time - min) * 100;
	time = min * 60 + sec;
	speed_m = distance / time;
	speed_km = speed_m * 3.6;

	cout << "Дистанція: " << distance << " м." << endl;
	cout << "Час: " << min << " хв " << sec << " сек = " << time << " сек." << endl;
	cout << "Ви бігли зі швидкістю " << speed_km << " км/год." << endl;*/

	//hometask 1.4
	/*int total_days, weeks, remaining_days;
	cout << "Введіть кількість днів: ";
	cin >> total_days;
	weeks = total_days / 7;
	remaining_days = total_days % 7;
	cout << weeks << " тижні і " << remaining_days << " дні." << endl;*/

	return 0;
}