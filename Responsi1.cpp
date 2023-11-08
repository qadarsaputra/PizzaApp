#include <iostream>

using namespace std;

main () {
	
	int arr[]= {7,3,8,5,6,5,4,1};
	int temp,n = 8;
	
	cout << "Program Mengurutkan Angka Menggunakan Bubble Sort\n";
	cout << "NIM : 22.12.2690\n";
	cout << "==============================================\n";
	cout << "Data yang belum terurut\n";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << ", ";
	}
	
	cout << endl;
	
	for (int i=1; i < n; i++) {
		for (int j = n-1; j >=i ; j--){
			if (arr[j] > arr[j-1]) {
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}	
	}
	
	cout << "\nData yang Telah diurutkan \n";
	for ( int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
}
