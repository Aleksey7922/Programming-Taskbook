#include<iostream>
using namespace std;
using  std::cout;
using  std::cin;


//#define CASE_1
//#define CASE_2
//#define CASE_3
//#define WHILE_1
//#define INTEGER_5
//#define INTEGER_6
//#define INTEGER_7
//#define INTEGER_8
//#define INTEGER_9
//#define INTEGER_10
//#define INTEGER_11
//#define INTEGER_12
//#define INTEGER_13
//#define INTEGER_14
//#define FOR_1
//#define FOR_2
//#define FOR_3
//#define FOR_4
//#define FOR_5


void main()
{
	setlocale(LC_ALL, "");

#ifdef CASE_1

	char a;
	cout << "введите число в диапозоне 1-7:\t"; cin >> a;
	switch (a)
	{
	case'1':cout << "понедельник\n"; break;
	case'2':cout << "вторник\n"; break;
	case'3':cout << "среда\n"; break;
	case'4':cout << "четверг\n"; break;
	case'5':cout << "пятница\n"; break;
	case'6':cout << "суббота\n"; break;
	case'7':cout << "воскресенье\n"; break;
	default:cout << "нет такого дня недели"; break;
	}
#endif // CASE_1

#ifdef CASE_2
	char a;
	cout << "введите число в диапозоне 1-5:\t"; cin >> a;
	switch (a)
	{
	case'1':cout << "плохо\n"; break;
	case'2':cout << "неудовлетворительно\n"; break;
	case'3':cout << "плохо\n"; break;
	case'4':cout << "хорошо\n"; break;
	case'5':cout << "отлично\n"; break;
	default:cout << "error"; break;

	}
#endif // CASE_2

#ifdef CASE_3

	char a;
	cout << "введите число в диапозоне 1-12:\t"; cin >> a;
	switch (a)
	{
	case'1':cout << "зима\n"; break;
	case'2':cout << "зима\n"; break;
	case'3':cout << "весна\n"; break;
	case'4':cout << "весна\n"; break;
	case'5':cout << "весна\n"; break;
	case'6':cout << "лето\n"; break;
	case'7':cout << "лето\n"; break;
	case'8':cout << "лето\n"; break;
	case'9':cout << "осень\n"; break;
	case'10':cout << "осень\n"; break;
	case'11':cout << "осень\n"; break;
	case'12':cout << "зима\n"; break;
	default:cout << "error"; break;
	}
#endif // CASE_3

#ifdef WHILE_1

	int b = 0;
	int a;
	cout << "введите положительное число :\t"; cin >> a;
	cout << "введите второе положительное,меньше первого числа :\t"; cin >> b;
	while (a >= 0)
	{
		a -= b;
	}

	cout << a;

#endif // WHILE

#ifdef INTEGER_5
	int a, b;
	cout << "введите первое число "; cin >> a;
	cout << "введите второе число "; cin >> b;
	int res = a % b;
	cout << res;
#endif // INTEGER_5

#ifdef INTEGER_6

	int a;
	cout << "введите двузначное число :\t"; cin >> a;
	int b = a / 10;
	cout << "левая цифра :\t" << b << endl;
	int c = a % 10;
	cout << "правая цифра:\t" << c << endl;

#endif // INTEGER_6

#ifdef INTEGER_7
	int a;
	cout << "введите двузначное число:\t"; cin >> a;
	int sum = (a / 10) + (a % 10);
	cout << "сумма=\t" << sum << endl;
	int  work = (a / 10) * (a % 10);
	cout << "произведение=\t" << work;
#endif // INTEGER_7

#ifdef INTEGER_8
	int a;
	cout << "введите двузначное число :\t"; cin >> a;
	int b = a / 10;
	int c = a % 10;
	cout << c << b;
#endif // INTEGER_8

#ifdef INTEGER_9

	int a;
	cout << "введите трехзачное число:\t"; cin >> a;
	int res = a / 100;
	cout << "первая цифра (сотня):\t" << res;

#endif // INTEGER_9

#ifdef INTEGER_10


	int a;
	cout << "введите трехзначное число :\t"; cin >> a;
	int res = a % 10;
	cout << "последня цифра(единицы):\t" << res << endl;
	int res1 = a % 100 / 10;
	cout << "средняя цифра(десятки):\t" << res1;
#endif // INTEGER_10

#ifdef INTEGER_11
	int A;
	cout << "введите трехзначное число :\t"; cin >> A;
	int a = A / 100;//сотни 
	int b = A % 100 / 10;//десятки
	int c = A % 100 % 10;//единицы
	int sum = a + b + c;
	cout << "сумма трех чисел :\t" << sum << endl;
	int work = a * b * c;
	cout << "произведение трех чисел :\t" << work;

#endif // INTEGER_11

#ifdef INTEGER_12

	int A;
	cout << "введите трехзначное число:\t"; cin >> A;
	int a = A / 100;
	int b = A % 100 / 10;
	int c = A % 10;
	cout << "число \"наоборот \"\t" << c << b << a;
#endif // INTEGER_12

#ifdef INTEGER_13
	int A;//трехзначное число 
	cout << "введите трех значное число :\t"; cin >> A;
	int a = A / 100;
	int b = A % 100 / 10;
	int c = A % 10;
	cout << b << c << a;

#endif // INTEGER_13

#ifdef INTEGER_14

	int A;
	cout << "введите трехзнасное число \t"; cin >> A;
	int a = A / 100;
	int b = A % 100 / 10;
	int c = A % 10;
	cout << c << b << a;
#endif // INTEGER_14

#ifdef FOR_1
	int k;
	cout << "введите число:\t"; cin >> k;
	for (int n = 0; n < 5; n++)
		cout << k << "\t";
#endif // FOR_1

#ifdef FOR_2
	int sum = 0;
	int a, b;
	cout << "введите первое число :\t"; cin >> a;
	cout << "введите второе число :\t"; cin >> b;
	for (int i = a; i <= b; i++)
	{

		cout << i << "\t";
	}
	cout << "количество чисел:\t";
	sum = b - a + 1;
	cout << sum;
#endif // FOR_2

#ifdef FOR_3
	int a, b;
	cout << "введите первое число :\t"; cin >> a;
	cout << "введите второе число :\t"; cin >> b;

	for (int i = --b; i > a; --i)
	{
		cout << i << "\n";
	}
	cout << "количество чисел :\t";
	int sum = b - a;
	cout << sum;


#endif // FOR_3

#ifdef FOR_4
	double a;
	cout << "введите стоимость конфет :"; cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		double sum = a * i; cout << sum << " ";
	}


#endif // FOR_4

#ifdef FOR_5
	double a;
	cout << "введите стоимость конфет:\t"; cin >> a;
	for (float i = 1 / 10; i <= 10; i++)
	{
		double sum = a * i / 10; cout << sum << " ";
	}
#endif // FOR_5


	





}