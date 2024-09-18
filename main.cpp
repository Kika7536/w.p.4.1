#include<iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "rus");

	int speed, height; 

	cout << "Введите скорость: ";
	cin >> speed;

	cout << "Введите высоту: ";
	cin >> height;

	if (speed >= 750 && speed <= 850) {
		if (height >= 9000 && height <= 9500) {
			cout << "Все в порядке!!!" << endl;
		}
		else if (height < 9000) {
			cout << "Слишком низкая высота!" << endl;
		}
		else {
			cout << "Слишком высокая высота!" << endl;
		}

	}
	else if (speed < 750) {
		if (height >= 9000 && height <= 9500) {
			cout << "Слишком низкая скорость!" << endl;
		}
		else if (height < 9000) {
			cout << "Слишком низкая высота и слишком низкая скорость!" << endl;
		}
		else {
			cout << "Слишком высокая высота и слишком низкая скорость!" << endl;
		}
	}
	else {
if (height >= 9000 && height <= 9500) {
			cout << "Слишком низкая скорость!" << endl;
		}
		else if (height < 9000) {
			cout << "Слишком низкая высота и слишком высокая скорость!" << endl;
		}
		else {
			cout << "Слишком высокая высота и слишком высокая скорость!" << endl;
		}
	}

	


}