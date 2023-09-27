#include <iostream>

using namespace std;

int main(){
	const int Ar[10] = {1,2,3,4,5,6,7,8,9,10};
	int tar;
	cout << "Masukkan Data Yang Dicari : ";
	cin >> tar;
	int awal=0, akhir = 10, tengah;
	
while (awal <= akhir) {
	tengah = (awal + akhir)/2;

	if (tar > Ar[tengah])
		{ awal = tengah + 1;}

	else if (tar < Ar[tengah])
		{ akhir = tengah - 1;}

	else {awal = akhir +1;}
	}

		if (tar == Ar[tengah]){
			cout << "Data DItemukan, Ke- " << tengah+1 << endl;
		}
	
		else {
			cout << "Target Tidak Ditemukan " << endl;
		}

}
