#include <iostream>
using namespace std;

int main() {
	int hh1, mm1, ss1, hh2, mm2, ss2, hh3, mm3, ss3;

	cout << "Masukkan jam awal: ";
	cin >> hh1;
	cout << "\nMasukkan menit awal: ";
	cin >> mm1;
	cout << "\n Masukkan detik awal: ";
	cin >> ss1;

	cout << "\nMasukkan jam akhir: ";
	cin >> hh2;
	cout << "\n Masukkan menit akhir: ";
	cin >> mm2;
	cout << "\n Masukkan detik akhir: ";
	cin >> ss2;

	if (ss2 >= ss1) {
		ss3 = ss2 - ss1;
	}
	else if (ss2 < ss1) {
		ss3 = (ss2 + 60) - ss1;
		mm2--;
	}

	if (mm2 >= mm1) {
		mm3 = mm2 - mm1;
	}
	else if (mm2 < mm1) {
		mm3 = (mm2 + 60) - mm1;
		hh2--;
	}

	if (hh2 >= hh1) {
		hh3 = hh2 - hh1;
	}
	else {
		hh3 = (hh2 + 24) - hh1;
	}

	cout << "Durasi: " << hh3 << ":" << mm3 << ":" << ss3;
	return 0;
}