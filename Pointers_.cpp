// Pointers_.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

//1. Создать две переменные и определить «расстояние» между ними в памяти. Расстояние показать в переменных того же типа (вычесть из одного указателя другой). Затем показать расстояние в байтах.

int main()
{
	setlocale(LC_ALL, "RU");

	int x = 1;
	int y = 2;
	cout << (long long)&x << "\n";
	cout << (long long)&y << "\n";
	int* pointer_X = &x;
	int* pointer_Y = &y;
	cout << &y - &x << "\n"; //разница между адресами
	int distance = pointer_Y - pointer_X; //разнийа через указатели
	int byte_distance = distance * sizeof(int);
	cout << "«расстояние» между переменными в памяти в элементах =	" << distance << "\n";
	cout << "«расстояние» между переменными в памяти в байтах =	" << byte_distance << "\n";
}



//2. Через указатели на указатели посчитать сумму двух чисел и записать в третье.

int main()
{
	setlocale(LC_ALL, "RU");
	int x = 1;
	int y = 2;
	int z;
	int* pointer_X = &x;
	int* pointer_Y = &y;
	int* pointer_Z = &z;
	int** pointer_XX = &pointer_X;
	int** pointer_YY = &pointer_Y;
	int** pointer_ZZ = &pointer_Z;
	**pointer_ZZ = **pointer_XX + **pointer_YY;
	cout << z;
}

