#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int time;
	cout << "������ ���: ";
	cin >> time;
	if (time >= 6 && time <= 12) {
		cout << "�� �����";
	}
	else {
		cout << "�� �� �����";
	}
}
