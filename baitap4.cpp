// baitap3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main() {
	int so1, so2, hieu;
	cout << "CHUONG TRINH TÍNH HIEU\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cin >> so2;
	hieu = so1 - so2;
	cout << so1 << "-" << so2 << "=" << hieu << endl;
	return 0;
}