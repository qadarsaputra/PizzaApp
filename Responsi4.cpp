#include <iostream>

using namespace std;

int main () {
	struct dosen {
		int no_induk;
		string nama;
	}ali, mustopa;
	
	dosen stevi;
	cout << "Program Struct Dosen\n";
	cout << "NIM : 22.12.2690\n";
	cout << "=============================================================\n";
	cout << "Masukkan No Induk : "; cin >> ali.no_induk;
	cout << "Masukkan Nama : "; cin >> ali.nama;
	cout << endl;
	
	cout << "Masukkan No Induk : "; cin >> mustopa.no_induk;
	cout << "Masukkan Nama : "; cin >> mustopa.nama;
	cout << endl;
	
	cout << "Masukkan No Induk : "; cin >> stevi.no_induk;
	cout << "Masukkan Nama : "; cin >> stevi.nama;
	cout << endl;
	
	cout << "Data Adi\n" << endl;
	cout << "No Induk : " << ali.no_induk << endl << "Nama : " << ali.nama << endl;
	cout << endl;
	
	cout << "Data Mustopa\n" << endl;
	cout << "No Induk : " << mustopa.no_induk << endl << "Nama : " << mustopa.nama << endl;
	cout << endl;
	
	cout << "Data Stevi\n" << endl;
	cout << "No Induk : " << stevi.no_induk << endl << "Nama : " << stevi.nama << endl;


}
