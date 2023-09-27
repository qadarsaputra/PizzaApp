#include <iostream>

using namespace std;

main(){
	int data[]= {3,4,1,5,7,9,2,7};
	int temp, n=8;
	cout << "Data Belum Terurut\n";
		for (int i=0; i<n; i++){
		cout << data[i] << " ";
	}
	
	for (int i=1; i<n; i++){
		for (int j=n-1; j>=i; j--){
			if (data[j] < data [j-1]) {
				// diubah ke > jika descending
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
			}
		}
	}
	
	cout << "\n\nData Telah Terurut \n";
	for (int i = 0; i < n; i++){
		cout << data[i] << " ";
	}
	
}
