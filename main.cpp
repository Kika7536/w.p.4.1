#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "rus");

	int speed, height; 

	cout << "������� ��������: ";
	cin >> speed;

	cout << "������� ������: ";
	cin >> height;

	if (speed >= 750 && speed <= 850) {
		if (height >= 9000 && height <= 9500) {
			cout << "��� � �������!!!" << endl;
		}
		else if (height < 9000) {
			cout << "������� ������ ������!" << endl;
		}
		else {
			cout << "������� ������� ������!" << endl;
		}

	}
	else if (speed < 750) {
		if (height >= 9000 && height <= 9500) {
			cout << "������� ������ ��������!" << endl;
		}
		else if (height < 9000) {
			cout << "������� ������ ������ � ������� ������ ��������!" << endl;
		}
		else {
			cout << "������� ������� ������ � ������� ������ ��������!" << endl;
		}
	}
	else {
if (height >= 9000 && height <= 9500) {
			cout << "������� ������ ��������!" << endl;
		}
		else if (height < 9000) {
			cout << "������� ������ ������ � ������� ������� ��������!" << endl;
		}
		else {
			cout << "������� ������� ������ � ������� ������� ��������!" << endl;
		}
	}

	


}