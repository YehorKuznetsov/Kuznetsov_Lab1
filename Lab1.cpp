#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int time;
	cout << "¬вед≥ть час: ";
	cin >> time;
	if (time >= 6 && time <= 12) {
		cout << "÷е ранок";
	}
	else {
		cout << "÷е не ранок";
	}
}
