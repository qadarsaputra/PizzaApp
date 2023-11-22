#include <iostream>
#define max 4
using namespace std;

struct Queue{
	int awal, akhir;
	int data[max];
};

Queue q;

bool full(){
	bool penuh;
	if (antre.akhir == max-1){
		penuh = true;
	} else {
		penuh = false;
	}
	return (penuh);
}


int main() {
// Antrian
	int pil, q;
	do {
		cout << "Antrian Layanan" << endl;
		cout << "Pilihan!" << 	endl;
		cout << "1. Masuk Antrian" << endl;
		cout << "2. Keluar Antrian" << endl;
		cout << "3. Lihat Jumlah Antrian" << endl;
		cout << "4. Tutup Antrian" << endl;
		cout << "Silahkah Pilih : "; cin >> pil;
		switch (pil){
			case 1 :
			if (!full()){
				q.ekor++;
				q.nomor[q.ekor]++;
				cout << "Masukkan Nama :" ;
				cin >> q.nama[q.ekor];
				}else {
				cout << "Data penuh";
			};
			break;
		case 2 :
			if (!empty()){
				cout << "Panggilan Nomor : "; cout << q.nomor[q.ekor];
				cout << "\nAtas nama : "; cout << q.nama[q.ekor]; cout << endl;
				for int(i=1;i&lt;=q.ekor;i++){
				q.nama[i-1]=q.nama[i];
				q.nomor[i-1]=q.nomor[i];
				}
				q.ekor--;
				}else {
					cout << "Data kosong";
				};
				break;
		case 3 :
			cout << "Jml Antrian : "; << [q.ekor+1];
			break;
		}		
while (pil !=4)

return 0;
}
