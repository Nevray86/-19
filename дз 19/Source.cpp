
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
#include <algorithm>


//задача 1
int Divider(int n, int m) {

	if (n > m) {
		if (n % m == 0) {
			Divider(n - 1, m - 1);
			return m;
		}
	}

	else if (m > n) {
		if (m % n == 0) {
			Divider(n - 1, m - 1);
			return n;
		}
	}

}
//Задача 2
void resurveNumber(int a) {
	if (a == 0)
		return;
	cout << a % 10;
	resurveNumber(a / 10);
}
//Задача 3
template<typename T>  int  sor(T array[], int length, int key) {
	for (int i = 0; i < length; i++)
		if (array[i] == key)
			return i;
	return-1;
}
//Задача 4
template<typename T> void show(T arr[], int length, int key, int begin = 0) {
	cout << "Изначальный массив";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
		cout << arr[i];
	}
	cout << endl;
	cout << "Массив от позиции " << begin << " до позиции " << key << endl;
	length = key;
	for (int i = begin; i <= length; i++) {
		cout << arr[i];
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//задача 1
	cout << "Задача 1 Наибольший общий делитель \nВведите два числа:\n";
	int n, m;
	cin >> n >> m;
	cout << "Наибольший делитель этих чисел = " << Divider(n, m);
	cout << endl;

	//задача 2
	int c;
	cout << "Задача 2 Реверс числа\nВведите число:";
	cin >> c;
	resurveNumber(c);
	cout << endl;

	//задача 3
	int N;
	cout << "Задача 3 Массив с идекса числа N\nВведите число N\n";
	cin >> N;
	cout << "Изначальный массив!\n";
	int ar[10] = { 8,7,54,3,13,87,5,4,2,6 };
	for (int i = 0; i < 10; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;
	int index = sor(ar, 10, N);
	cout << "Отсортированный массив с индекса числа N\n";
	cout << index << " ";
	sort(ar, ar + 10);
	for (int i = index; i < 10; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;

	//задача 4
	//задча 4
	cout << "Задача 4 \nВедите начало и конец массива:\n";
	int a;
	int b;
	cin >> a >> b;
	int Array[10];
	show(Array, 10, b, a);


	return 0;
}