#include <iostream>

using namespace std;

int main () {
	struct siswa { //deklarasi Struct
		int no_induk;
		string nama;
		float nilai;
	}adi, bambang; //inisiasi obejct di dalam deklarasi struct
	
	siswa murid; // inisiasi object di luar struct=
	
	cout << "Masukkan NIS : "; cin >> adi.no_induk;
	cout << "Masukkan Nama : "; cin >> adi.nama;
	cout << "Masukkan Nilai : "; cin >> adi.nilai;
	cout << endl;
	cout << "Masukkan NIS : "; cin >> bambang.no_induk;
	cout << "Masukkan Nama : "; cin >> bambang.nama;
	cout << "Masukkan Nilai : "; cin >> bambang.nilai;
	cout << endl;
	cout << "Masukkan NIS : "; cin >> murid.no_induk;
	cout << "Masukkan Nama : "; cin >> murid.nama;
	cout << "Masukkan Nilai : "; cin >> murid.nilai;
	cout << endl;
	cout << "Data Siswa sebagai berikut : \n"<< endl;
	
	cout << "Data Adi\n" << endl;
	cout << "NIS : " << adi.no_induk << endl << "Nama : " << adi.nama << endl << "Nilai : "<< adi.nilai << endl;
	cout << endl;
	
	cout << "Data Banbang\n" << endl;
	cout << "NIS : " << bambang.no_induk << endl << "Nama : " << bambang.nama << endl  << "Nilai : " << bambang.nilai << endl;
	cout << endl;
	
	cout << "Data Siswa\n" << endl;
	cout << "NIS : " << murid.no_induk << endl << "Nama : " << murid.nama << endl <<  "Nilai : " << murid.nilai << endl;
	cout << endl;
}
