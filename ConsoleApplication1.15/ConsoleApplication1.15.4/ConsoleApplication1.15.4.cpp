// ConsoleApplication1.15.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 15. Задача 4. Радиоприёмник.

#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float radioFrequencies[10], maxradioFrequencies = 0;
	int radioCannal;
	int i;
	bool correct=true;
cout << "\n Укажите рабочие частоты радиоприёмника ";
	for (i = 0; i < 10; i++) {
		cout << "\n ";
		cin >> radioFrequencies[i];
		
	}
	float minradioFrequencies = radioFrequencies[0];
	for (i = 0; i < 10; i++) {
		if (radioFrequencies[i] > maxradioFrequencies) {
			maxradioFrequencies = radioFrequencies[i];
		}
		if (radioFrequencies[i] < minradioFrequencies) {
			minradioFrequencies = radioFrequencies[i];
		}
   }

	while (true) {
		int radioCannal;
		cout << "\n Укажите канал, который собираетесь слушать ";
		cin >> radioCannal;
		if (radioCannal < 0 || radioCannal>10) {
			cout << "\n Указанный канал радиоприёмник не поддерживает.";
			correct = false;
			return correct;
		}
		else if (radioCannal == 0) {
			cout << "\n Радио выключено.";
			break;
		}
		else {
			cout << "\n Вы слушаете радиоприёмник на частоте " << radioFrequencies[radioCannal - 1];
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
