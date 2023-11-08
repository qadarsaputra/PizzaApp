#include <iostream>

using namespace std;

int main() {
	struct siswa {
		int no_induk;
		string nama;
		float nilai[4];
		float rata;
	};
	siswa murid[20];
	
	for (int j=0; j<4; j++) {
		cout << "Masukkan NIS : "; cin >> murid[j].no_induk;
		cout << "Masukkan Nama : "; cin >> murid[j].nama;
		for (int i=0; i<4; i++) {
			cout << "Masukkan Nilai " << i+1 << ": "; cin >> murid[j].nilai[i];
			murid[j].rata+=murid[j].nilai[i];
		}
	}
	
		cout << endl << endl << "=========================================" << endl << "Data Siswa " << endl;
		cout << "NIS : " << murid[3].no_induk<<" Nama : "<< murid[3].nama<<endl;
		cout << "Daftar Nilai : " << endl;
		
			for (int i=0; i<4; i++) {
				cout << "Nilai " << i+1 << ": " << murid[4].nilai[i]<< endl;
			}
			
			murid[0].rata = murid[0].rata/4;
			cout << endl << "Rata - Rata Nilai " << murid[0].nama << " adalah" << murid[0].rata;
			if (rata > 70) {
				cout << " dinyatakan LULUS";
			}
			else {
				cout << "dinyatakan Remidi";
			}
		} 
}
