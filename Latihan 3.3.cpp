#include <iostream>

using namespace std;

int main () {
	int larik[9] = {1,12,3,4,10,6,7,11,9}, i, n, x, posisi;
	
	cout << "Data Yang Ingin DIcari? "; cin >> x;
	i = 0;
	posisi = 0;
	
	while(i<8 && larik[i] !=x) {
		i++;
	}
	
	if (larik[i] !=x) {	
	cout << "Maaf data yang dicari tidak ada";
}
	else if (larik[i] =x) {
		posisi = i+1;
		cout << "Pada Posisi Ke " << posisi;
	}
}

