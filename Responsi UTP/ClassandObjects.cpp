//---Program Setter and Getter Persegi Panjang---
#include <iostream>
using namespace std;

class Persegipanjang{
	private:
		int panjang;
		int lebar;
	public:
		Persegipanjang(int panjang, int lebar){
			this->panjang = panjang;
			this->lebar = lebar;
		}
		void setPanjang (int panjang){
			this->panjang = panjang;
		}
		
		void setLebar (int lebar){
			this->lebar = lebar;
		}
		
		int getPanjang(){
			return panjang;
		}
		int getLebar(){
			return lebar;
		}
		int luas (){
			return panjang * lebar;
		}
		
};

int main (){
	Persegipanjang psg(10,10);
	cout << "Panjang : " << psg.getPanjang() << endl;
	cout << "Lebar : " << psg.getLebar() << endl;
	cout << "Luas : " << psg.luas();	
	
}