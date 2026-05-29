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
	}*/



/*//hometask 1.1
	int sec, hours, min, rem_sec;
	cout << "Введіть час в секундах:" << endl;
	cin >> sec;
	hours = sec / 3600;
	rem_sec = sec % 3600;
	min = rem_sec / 60;
	rem_sec = rem_sec % 60;
	cout << hours << " год. " << min << " хв. " << rem_sec << " сек." << endl;


//hometask 1.2
	float num;
	int hrn, kop;
	cout << "Введіть дробове число для перетворення його в грошовий формат:" << endl;
	cin >> num;
	hrn = num;
	kop = (num - hrn) * 100;
	cout << hrn << " грн " << kop << " коп." << endl;


//hometask 1.3
	float distance, input_time, speed_km, speed_m;
	int time, min, sec;
	cout << "Обчислення швидкості бігу." << endl;
	cout << "Введіть довжину дистанції (метрів) = ";
	cin >> distance;
	cout << "Введіть час (хв.сек) = ";
	cin >> input_time;	

	min = input_time;
	sec = (input_time - min) * 100;
	time = min * 60 + sec;
	speed_m = distance / time;
	speed_km = speed_m * 3.6;

	cout << "Дистанція: " << distance << " м." << endl;
	cout << "Час: " << min << " хв " << sec << " сек = " << time << " сек." << endl;
	cout << "Ви бігли зі швидкістю " << speed_km << " км/год." << endl;

//hometask 1.4
	int total_days, weeks, remaining_days;
	cout << "Введіть кількість днів: ";
	cin >> total_days;
	weeks = total_days / 7;
	remaining_days = total_days % 7;
	cout << weeks << " тижні і " << remaining_days << " дні." << endl;*/
	


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

	double sales1, sales2, sales3,salary1,salary2,salary3;
	cout << "Введіть рівень продажів для трьох менеджерів:" << endl;
	cin >> sales1 >> sales2 >> sales3;
		
	if (sales1 < 500) {
		salary1 = 200 + sales1 *0.03;
	}
	else if (sales1 <= 1000) {
		salary1 = 200 + sales1 *0.05;
	}
	else {
		salary1 = 200 + sales1*0.08;
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