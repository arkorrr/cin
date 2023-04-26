#include <iostream>
#include <cmath> 
using namespace std;

void main()
{
	
	int a, b, c; //1.	Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.
	cout << "Enter number1: "; cin >> a;
	cout << "Enter number2: "; cin >> b;
	cout << "Enter number3: "; cin >> c;
	cout << "Average = " << (a + b + c) / 3 << endl;

	float m, n;	//2.	Написать программу, которая находит корень линейного уравнения ax + b = 0.
	cout << "Number1:m = "; cin >> m;
	cout << "Number2:n = "; cin >> n;
	// mx + n = 0

	if (m == 0)
	{
		cout << "m - should not be equal to 0";
		return;
	}

	cout << "x = " << -n / m << endl;

	int z, x; //3.	Пользователь вводит число и степень. Программа вычисляет указанную степень этого числа (пригодится функция pow).
	cout << "Enter number: "; cin >> z;
	cout << "Enter degree: "; cin >> x;
	cout << "Sum of degree = " << pow(z, x) << endl;

	const double PI = 3.14; //4.	Написать программу, которая  предлагает пользователю ввести радиус окружности, а затем считает площадь и длину этой окружности. Число Pi задать в программе как вещественную константу.
	double r;
	cout << "Enter the radius of the circle: "; cin >> r;
	cout << "S = " << PI * r * r << endl;
	cout << "Circumference = " << 2 * PI * r << endl;
	
	double dollar = 36.87; //5.	Написать программу, которая  предоставляет пользователю возможность ввести с клавиатуры количество гривен, и переводит это количество в доллары, евро и биткоины.
	double euro = 40.74;
	double bitcoin = 1064974.54;
	int hryvnia;
	cout << "Enter a sum of hryvnia: "; cin >> hryvnia;
	cout << "Hryvnia in dollars = " << hryvnia / dollar << endl; cout << "Hryvnia in euro = " << hryvnia / euro << endl; cout << "Hryvnia in bitcoin = " << hryvnia / bitcoin << endl;
	
	int kilometer; //6.	Написать программу, которая переводит километры в сухопутные и морские мили.
	int amile = 6080;
	int bmile = 5280;
	cout << "Enter kilometers: "; cin >> kilometer;
	cout << "Kilometers in British miles: " << (kilometer * 3280.84) / 5280 << endl;
	cout << "Kilometers in Admiralty miles: " << (kilometer * 3280.84) / 6080 << endl;

	float number, procent; //7.	Написать программу, которая находит процент P от числа N
	cout << "Enter a number: "; cin >> number;
	cout << "Enter a procent: "; cin >> procent;
	cout << "Procent of number: " << number * (procent/100) << endl;
		
	int C; ////8.	Написать программу, которая переводит указанное количество градусов по Цельсию в градусы по шкале Фаренгейта, Кельвина, Реомюра и Делиля. Затем реализовать перевод из градусов по Фаренгейту в градусы по Цельсию.
	cout << "Degrees Celsius: "; cin >> C; 
	cout << "F = " << (C * 9 / 5) + 32 << endl;
	cout << "K = " << (C + 273.15) << endl;
	cout << "Re = " << (C * 1.25000) << endl;
	cout << "De = " << ((c + 100) / 1.50000) << endl;

	int g = 5; //9.	Поменять местами значения переменных a и b, сначала с использованием дополнительной третьей переменной, а затем – без.
	int h = 6;
	int j = g;
	g = h;
	h = j;
	cout << "G = " << g << "\nH = " << h << endl;
	int l = 7;
	int k = 10;
	cout << "L = " << (l + k) - l << "\nK = " << (k + l) - k << endl;

}
/**/
