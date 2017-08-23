#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, i, f, g;
	cout << "¬ведите день!" << "\n";
	cin >> a;
	cout << "¬ведите мес€ц!" << "\n";
	cin >> b;
	cout << "¬ведите год!" << "\n";
	cin >> c;
	cout << "¬ведите день!" << "\n";
	cin >> i;
	cout << "¬ведите мес€ц!" << "\n";
	cin >> f;
	cout << "¬ведите год!" << "\n";
	cin >> g;
	if (c % 4 == 0 && c % 100 == 0 && c % 400 == 0 && g % 4 == 0 && g % 100 == 0 && g % 400 == 0 && b&&f==1|3|5|7|8|10|12){
		int r = ((g - c) * 366) + ((b - f) * 31) + (a - i);
		cout << " олличество дней между датами " << r << "дней!" << "\n";
	}
	else {
		cout << "Ќичего";

	}
	system("pause");
	return 0;
}