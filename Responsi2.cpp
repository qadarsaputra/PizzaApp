#include <iostream>

using namespace std;

int main () {
	int arr[]= {7,3,8,5,6,5,4,1};
	int n=8;
	int angka_cari;
	bool ditemukan = false;
	
	cout << "Program Mencari Angka Menggunakan Boolean\n";
	cout << "NIM : 22.12.2690\n";
	cout << "==============================================\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;
	
	cout << "\nMasukkan Angka yang ingin di-cari : "; cin >> angka_cari;
	
	for (int i = 0; i < n; i++) {
		if (angka_cari == arr[i] ) {
			ditemukan = true;
			cout << "Angka Ditemukan pada Posisi ke- " << i << endl;
			break;
		}
	}
	
	if (!ditemukan) {
		cout << "\nMaaf, Angka " << angka_cari << " Tidak ditemukan" << endl;
	}
	
	return 0;
	
}
