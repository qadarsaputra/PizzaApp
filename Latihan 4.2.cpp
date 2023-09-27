#include <iostream>

using namespace std;

main(){
	int temp, length=8;
	int arr[] = {3,4,1,5,7,9,2,7};
	cout << "Data Belum Terurut\n";
	for (int i=0; i<length; i++){
		cout << arr[i] << " ";
	}
	
	int loc_min;
	for (int i = 0; i <length; i++){
		loc_min = i;
		for (int j = i; j < length; j++){
			if (arr[j] < arr[loc_min]){
				loc_min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[loc_min];
		arr[loc_min] = temp;
	}
	
	cout << "\n\n Data Telah Terurut \n";
	for (int i = 0; i < length; i++){
		cout << arr[i] << " ";
	}
}
