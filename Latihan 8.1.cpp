#include <iostream>

using namespace std;

int main() {
	int nomer= 1, umur= 19;
	char kelamin='A';
	float bb=80,tb=178;
	string nama= "qadar";
	
	int* nomers = &nomer, *umurs = &umur;
	char* kelamins = &kelamin;
	float* bbs= &bb,* tbs= &tb;
	string* namas = &nama;

	cout << "Identifikasi Alamat Variabel" << endl;
	cout << "============================" << endl;
	
	cout << "Alamat Var Nomer " << &nomer << endl;
	cout << "Alamat Var Umur " << &umur << endl;
	cout << "Alamat Var Kelamin " << &kelamin << endl;
	cout << "Alamat Var BB " << &bb << endl;
	cout << "Alamat Var TB " << &tb << endl;
	cout << "Alamat Var Nama " << &nama << endl;
	
	cout << "\nValue Variabel" << endl;
	cout << "============================\n" << endl;
	
	cout << "Value Var Nomer " << *nomers << endl;
	cout << "Value Var Umur " << *umurs << endl;
	cout << "Value Var Kelamin " << *kelamins << endl;
	cout << "Value Var BB " << *bbs << endl;
	cout << "Value Var TB " << *tbs << endl;
	cout << "Value Var Nama " << *namas << endl;
	
	return 0;
	
	
}
