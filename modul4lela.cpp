#include <iostream>
using namespace std;
int main() {
	double nilai;

	cout << "=== Program Penentuan Nilai Mutu ===" << endl;
	cout << "Masukkan nilai angka : ";
	cin >> nilai;

	cout << "\nHasil :" << endl;

	if (nilai > 76) {
		cout << " Nilai mutu : A" << endl;
	}
	else if (nilai > 70 && nilai <= 76) {
		cout << " Nilai mutu : B" << endl;
	}
	else if (nilai > 65 && nilai <= 70) {
		cout << "Nilai mutu : C" << endl;
	}
	else if (nilai > 50 && nilai <= 65) {
		cout << "Nilai mutu : D" << endl;
	}
	else if (nilai <= 50) {
		cout << "Nilai mutu : E" << endl;
	}
}