#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(nullptr));
	//Вариант 1
	//1 массив из 10 чисел от 0 до 20, найти произведение элементов 
	/*const int n = 10;
	int mas[n];
	int p = 1;
	for (int i = 0; i < n; i++) {
			mas[i] = rand()%21;
			cout << mas[i] << ' ';
			p = mas[i] * p;
		}
	cout << endl;
	cout << p << endl;*/
	//2 массив из 8 чисел от -10 до 10, найти сумму положительных элементов 
	/*const int n = 8;
	int mas[n];
	int s = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21 - 10;
		cout << mas[i] << ' ';
		if (mas[i]>0) { s = s + mas[i]; }
	}
	cout << endl;
	cout << s << endl;*/
	//3 массив из 16 чисел от 0 до 20, найти колво делящ на 3 и 5 элементов 
	/*const int n = 16;
	int mas[n];
	int k = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
		if (mas[i] % 3 == 0 && mas[i] % 5 == 0) { k++; }
	}
	cout << endl;
	cout << k << endl;*/
	//4 массив из 9 чисел от -10 до 10, найти сумму четных элементов 
	/*const int n = 9;
	int mas[n];
	int s = 0;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21 - 10;
		cout << mas[i] << ' ';
		if (mas[i] % 2 == 0) {
			s = s + mas[i];
		}
	}
	cout << endl;
	cout << s << endl;*/
}