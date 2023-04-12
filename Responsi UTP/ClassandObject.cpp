#include <iostream>
using namespace std;

struct Mahasiswa {
	string nama, npm;
};

int main (){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
}


////Class dengan akses publik
#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
};

int main (){
	Mahasiswa Mhs;
	
	cin >> 	Mhs.nama;
	cin >> Mhs.npm;
	
	cout<< Mhs.nama << " " << Mhs.npm;
}


////akses publik dengan method
#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		void Perkenalan (){
			cout << "Nama : " << nama << endl;
			cout << "NPM  : " << npm << endl;
		}
};

int main (){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama >> Mhs.npm;
	
	Mhs.Perkenalan();
}


//class dengan akses private
#include <iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama, npm;	
};

int main (){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
}

//constructor
/*Ciri dari konstruktor pada
  C++ adalah nama method sama persis dengan nama kelasnya. */

//constructor without parameter
#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		Mahasiswa(){ //CONSTRUCTOR
			cout << "Hello World";
		}
};

int main (){
	Mahasiswa Mhs;
}
//constructor with parameter
#include <iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(string nama, string b){
			this->nama = nama;
			npm = b; 
		}
};

int main (){
	Mahasiswa Mhs("Reguel", "2217051084");
	
	cout << "Nama : " << Mhs.nama << endl;
	
}






