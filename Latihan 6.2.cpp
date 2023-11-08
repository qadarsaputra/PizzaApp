#include <iostream>
#include <string>

using namespace std;

int main () {
	struct siswa { //Deklarasi Input
		int no_induk;
		string nama;
		float nilai[4];
	};
	siswa murid; //inisiasi object di luar struct
	
	cout << "Masukkan NIS : "; cin >> murid.no_induk;
	cout << "Masukkan Nama : "; cin >> murid.nama;
	int rata;
	for (int i=0; i<4; i++) {
		cout << "Masukkan Nilai " << i+1 << ": "; cin >> murid.nilai[i];
		rata+=murid.nilai[i];
	}
		if (rata < 75) {
		cout << "\nRata-Rata Nilai Saya adalah " << rata/4 << " dinyatakan Remedial";
		}
		else {
		cout << "\nRata-Rata Nilai Saya adalah " << rata/4 << " dinyatakan Lulus";	
		}
	
}
