#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, i, f, g;
	cout << "������� ����!" << "\n";
	cin >> a;
	cout << "������� �����!" << "\n";
	cin >> b;
	cout << "������� ���!" << "\n";
	cin >> c;
	cout << "������� ����!" << "\n";
	cin >> i;
	cout << "������� �����!" << "\n";
	cin >> f;
	cout << "������� ���!" << "\n";
	cin >> g;
	if (c % 4 == 0 && c % 100 == 0 && c % 400 == 0 && g % 4 == 0 && g % 100 == 0 && g % 400 == 0 && b&&f==1|3|5|7|8|10|12){
		int r = ((g - c) * 366) + ((b - f) * 31) + (a - i);
		cout << "����������� ���� ����� ������ " << r << "����!" << "\n";
	}
	else {
		cout << "������";

	}
	system("pause");
	return 0;
}