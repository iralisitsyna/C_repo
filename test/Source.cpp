#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int v=300, b, l, r;
	cout << "Введите расстояние до заправки"<<"\n";
	cin >> l;
	cout << "Введите расстояние от заправки до пункта назначения" << "\n";
	cin >> r;
	cout << "Введите вес груза" <<"\n";
	cin >> b;
	if (b <= 500) {
		int t=(l + r) - v ;
		 cout << "Необходимо дозаправиться на"  << t << "литра" << "\n";
	}
	else if (500 < b <= 1000) {
		int t = ((l + r) - v)*4 ;
		cout << "Необходимо дозаправиться на"  << t << "литра" << "\n";
	}
	else if (1000 < b <= 1500) {
		int t = ((l + r) - v) * 7 ;
		cout << "Необходимо дозаправиться на"  << t << "литра" << "\n";
	}
	else if (1500 < b <= 2000) {
		int t = ((l + r) - v) * 9 ;
		cout << "Необходимо дозаправиться на"  << t  << "литра" << "\n";
	}
	else if(b>2001) {
		cout << "Сомолет не полетит!";
	}
	system("pause");
	return 0;
}