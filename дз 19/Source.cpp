
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
#include <algorithm>


//������ 1
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
//������ 2
void resurveNumber(int a) {
	if (a == 0)
		return;
	cout << a % 10;
	resurveNumber(a / 10);
}
//������ 3
template<typename T>  int  sor(T array[], int length, int key) {
	for (int i = 0; i < length; i++)
		if (array[i] == key)
			return i;
	return-1;
}
//������ 4
template<typename T> void show(T arr[], int length, int key, int begin = 0) {
	cout << "����������� ������";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10;
		cout << arr[i];
	}
	cout << endl;
	cout << "������ �� ������� " << begin << " �� ������� " << key << endl;
	length = key;
	for (int i = begin; i <= length; i++) {
		cout << arr[i];
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	//������ 1
	cout << "������ 1 ���������� ����� �������� \n������� ��� �����:\n";
	int n, m;
	cin >> n >> m;
	cout << "���������� �������� ���� ����� = " << Divider(n, m);
	cout << endl;

	//������ 2
	int c;
	cout << "������ 2 ������ �����\n������� �����:";
	cin >> c;
	resurveNumber(c);
	cout << endl;

	//������ 3
	int N;
	cout << "������ 3 ������ � ������ ����� N\n������� ����� N\n";
	cin >> N;
	cout << "����������� ������!\n";
	int ar[10] = { 8,7,54,3,13,87,5,4,2,6 };
	for (int i = 0; i < 10; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;
	int index = sor(ar, 10, N);
	cout << "��������������� ������ � ������� ����� N\n";
	cout << index << " ";
	sort(ar, ar + 10);
	for (int i = index; i < 10; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;

	//������ 4
	//����� 4
	cout << "������ 4 \n������ ������ � ����� �������:\n";
	int a;
	int b;
	cin >> a >> b;
	int Array[10];
	show(Array, 10, b, a);


	return 0;
}