#include<iostream>

using namespace std;
int main() {
	int so, somu, luythua = 1;
	cout << "Nhập số: ";
	cin >> so;
	cout << "Nhập mu: ";
	cin >> somu;
	for (int i = 0; i < somu; i++) {
		luythua *= so;
	}
	cout << "Luy Thua: " << luythua;

	return 0;
}