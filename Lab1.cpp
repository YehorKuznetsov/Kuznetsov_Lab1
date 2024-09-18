#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int time;
	cout << "Введіть час: ";
	cin >> time;
	if (time < 0 || time > 23) {
		cout << "Error";
	}
	else{
		if (time >= 6 && time <= 12) {
			cout << "Це ранок";
		}
		else {
			cout << "Це не ранок";
		}
	}
}
