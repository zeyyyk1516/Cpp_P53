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

		//hometask 2.1
		/*	int day1,month1,year1, day2, month2,year2,totalDays1, totalDays2, difference;
			bool isLeap1, isLeap2;
			cout << "Введіть першу дату (день місяць рік (у вигляді цілих чисел)):" << endl;
			cin >> day1 >> month1 >> year1;
			cout << "Введіть другу дату (день місяць рік (у вигляді цілих чисел)):" << endl;
			cin >> day2 >> month2 >> year2;


			if (year1 % 400 == 0) {
				isLeap1 = true;
			}
			else if (year1 % 100 == 0) {
				isLeap1 = false;
			}
			else if (year1 % 4 == 0) {
				isLeap1 = true;
			}
			else {
				isLeap1 = false;
			}

			if (year2 % 400 == 0)
			{
				isLeap2 = true;
			}
			else if (year2 % 100 == 0)
			{
				isLeap2 = false;
			}
			else if (year2 % 4 == 0)
			{
				isLeap2 = true;
			}
			else
			{
				isLeap2 = false;
			}


			totalDays1 = 365 * (year1-1) + (year1 - 1) / 4 - (year1 - 1) / 100 + (year1 - 1) / 400 + day1;
			totalDays2 = 365 * (year2-1) + (year2 - 1) / 4 - (year2 - 1) / 100 + (year2 - 1) / 400 + day2;

			switch (month1) {
				case 12: totalDays1 += 30;
				case 11: totalDays1 += 31;
				case 10: totalDays1 += 30;
				case 9: totalDays1 += 31;
				case 8: totalDays1 += 31;
				case 7: totalDays1 += 30;
				case 6: totalDays1 += 31;
				case 5: totalDays1 += 30;
				case 4: totalDays1 += 31;
				case 3: totalDays1 += (isLeap1 ? 29 : 28);
				case 2: totalDays1 += 31;
				case 1: break;
			}
			switch (month2) {
					case 12: totalDays2 += 30;
					case 11: totalDays2 += 31;
					case 10: totalDays2 += 30;
					case 9: totalDays2 += 31;
					case 8: totalDays2 += 31;
					case 7: totalDays2 += 30;
					case 6: totalDays2 += 31;
					case 5: totalDays2 += 30;
					case 4: totalDays2 += 31;
					case 3: totalDays2 += (isLeap2 ? 29 : 28);
					case 2: totalDays2 += 31;
					case 1: break;
			}
			difference = abs(totalDays1 - totalDays2);
			cout << "Кількість днів між датами: " << difference << endl;*/
			
//hometask 2.2

	double sales1, sales2, sales3, salary1, salary2, salary3;
	cout << "Введіть рівень продажів для трьох менеджерів:" << endl;
	cin >> sales1 >> sales2 >> sales3;

	if (sales1 < 500) {
		salary1 = 200 + sales1 * 0.03;
	}
	else if (sales1 <= 1000) {
		salary1 = 200 + sales1 * 0.05;
	}
	else {
		salary1 = 200 + sales1 * 0.08;
	}
	if (sales2 < 500) {
		salary2 = 200 + sales2 * 0.03;
	}
	else if (sales2 <= 1000) {
		salary2 = 200 + sales2 * 0.05;
	}
	else {
		salary2 = 200 + sales2 * 0.08;
	}
	if (sales3 < 500) {
		salary3 = 200 + sales3 * 0.03;
	}
	else if (sales3 <= 1000) {
		salary3 = 200 + sales3 * 0.05;
	}
	else {
		salary3 = 200 + sales3 * 0.08;
	}
	if (sales1 > sales2 && sales1 > sales3)
	{
		salary1 += 200;
		cout << "Найкращий менеджер: 1" << endl;
	}
	else if (sales2 > sales1 && sales2 > sales3)
	{
		salary2 += 200;
		cout << "Найкращий менеджер: 2" << endl;
	}
	else if (sales3 > sales1 && sales3 > sales2)
	{
		salary3 += 200;
		cout << "Найкращий менеджер: 3" << endl;
	}
	else
	{
		cout << "Немає найкращого менеджера" << endl;
	}
	cout << "Зарплата менеджера 1: " << salary1 << endl;
	cout << "Зарплата менеджера 2: " << salary2 << endl;
	cout << "Зарплата менеджера 3: " << salary3 << endl;
	return 0;

}