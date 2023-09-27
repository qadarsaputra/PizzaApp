#include <iostream>

using namespace std;

int main()
{
	string nama;
	string MK;
	int nilai;
	
	cout << "Masukkan Nama Mahasiswa : "; cin >> nama;
	cout << "Masukkan MataKuliah Yang DIambil : "; cin >> MK;
	cout << "Masukkan Nilai Mahasiswa : "; cin >> nilai;
	
	cout << "\nTampilkan Data" <<endl;
    cout << "Nama : "<< nama << endl;
	cout << "Nilai Matakuliah "<<MK<<" adalah = "<<nilai << endl;
	
	return 0;
}
