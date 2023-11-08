#include <iostream>

using namespace std;

int main() {
	int temp, n=8;
	int arr[]= {7,3,8,5,6,5,4,1};
	
	cout << "Program Mengurutkan Angka Selection Sort min Secara Ascending\n";
	cout << "NIM : 22.12.2690\n";
	cout << "=============================================================\n";
	cout << "Data Belum Terurut\n";
	for (int i =0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	
	int loc_min;
	for (int i =0; i < n; i++) {
		loc_min = i;
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[loc_min]) {
				loc_min = j;
			}
		}
		
	temp = arr[i];
	arr[i] = arr[loc_min];
	arr[loc_min] = temp;
	}
	
	cout << "\n\nData yang telah diurutkan\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
}
