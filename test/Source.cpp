#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int v=300, b, l, r;
	cout << "������� ���������� �� ��������"<<"\n";
	cin >> l;
	cout << "������� ���������� �� �������� �� ������ ����������" << "\n";
	cin >> r;
	cout << "������� ��� �����" <<"\n";
	cin >> b;
	if (b <= 500) {
		int t=(l + r) - v ;
		 cout << "���������� ������������� ��"  << t << "�����" << "\n";
	}
	else if (500 < b <= 1000) {
		int t = ((l + r) - v)*4 ;
		cout << "���������� ������������� ��"  << t << "�����" << "\n";
	}
	else if (1000 < b <= 1500) {
		int t = ((l + r) - v) * 7 ;
		cout << "���������� ������������� ��"  << t << "�����" << "\n";
	}
	else if (1500 < b <= 2000) {
		int t = ((l + r) - v) * 9 ;
		cout << "���������� ������������� ��"  << t  << "�����" << "\n";
	}
	else if(b>2001) {
		cout << "������� �� �������!";
	}
	system("pause");
	return 0;
}