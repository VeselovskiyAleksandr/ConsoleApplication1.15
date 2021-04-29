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
	float currentRadioFrequency;
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
	cout << "\n Укажите радиочастоту, на которой собираетесь слушать радиоприёмник. ";
	cin>> currentRadioFrequency;
 if (currentRadioFrequency == 0) {
		cout<<"\n Радио выключено.";
	}
    else if ((currentRadioFrequency > maxradioFrequencies) || (currentRadioFrequency < minradioFrequencies)) {
		cout<<"\n Вы указали недопустимую частоту.";
		correct =false;
			return correct;
	}
	else if (currentRadioFrequency != radioFrequencies[i]) {
	
	 float t=abs(currentRadioFrequency- radioFrequencies[0]), d=0;
	 for (i = 0; i < 10; i++) {
		 if (abs(currentRadioFrequency - radioFrequencies[i]) < t) {
			 t = abs(currentRadioFrequency - radioFrequencies[i]);
		 } cout << t << " ";
	 }
	 cout << "\n Вы слушаете радиоприёмник на частоте " << currentRadioFrequency+t;
 }
	else {
		cout<<"\n Вы слушаете радиоприёмник на частоте "<< currentRadioFrequency;
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
