#include <iostream>

using namespace std;

int main(){
	int array[]={1,2,3,4,5}, i=0,x;
	cout << "Masukkan Data Yang Akan DIcari "; cin >> x;
	array[5]= x;
	i=0;
	while(array[i]!=x)
	i++;
	
	if (i<5) {
		cout << "Data Ketemu";
	}
	
	else {
		cout << "Data Tidak DItemukan";
	}

}

