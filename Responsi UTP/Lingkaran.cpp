#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

//Class
class Lingkaran{
	private:
		double r;
	
	public:
		Lingkaran(double r){  //CONSTRUCTOR
			this->r = r;
		}
		double hitungLuas(){
			return 3.14 * r * r;
		}
};

//Deklarasi function
void getInput(double* r){
	cout << "Masukkan jari - jari lingkaran : ";
	cin >> *r;
}

int main (){
	//Cstring
	char data[1][100] = {"2217051084Reguel Andreas Agustinus P"};
	char* endPtr;
	for (int i = 0; i < 1; i++){
		unsigned long value = strtod(data[i], &endPtr);
		cout << "Nama : " << endPtr << endl;
		cout << "NPM  : " << value << endl;
		cout << endl;	
	}
	
	double r;
	getInput(&r); //POINTER SEBAGAI ALAMAT DARI VARIABEL LINGKARAN
	
	Lingkaran lingkaran(r);
	cout << "Luas lingkaran dengan jari - jari " << r  << " adalah "<< lingkaran.hitungLuas() << endl;
	
	return 0;	
	
}
