#include <iostream>

using namespace std;

int main() {
	int A[]= {2,6,4,3,1,5,7,2};
	int i;
	for (i=0; i<8; i++){ //perbaikan pada i-- menjadi i++
		cout << "Nilai Array Elemen "<< i+1 <<" Adalah "<< A[i] << endl;
		//memisahkan output text dengan output variabel menggunakan " 
		//ntuk menutup dan mebuka variebl text 
	}
}
