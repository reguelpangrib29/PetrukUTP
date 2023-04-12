#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int* ptr = &x;
    cout << "Alamat memori dari pointer ptr = " << &ptr << endl;
}


/*Buatlah program yang menerima input nilai integer dari user, kemudian program mengalokasikan memori 
dinamis untuk array integer berukuran sesuai dengan input tersebut. Kemudian, program mengisi array 
tersebut dengan bilangan genap dari 2 hingga nilai input yang diberikan, dan menampilkan nilai-nilai 
array tersebut menggunakan pointer. */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan sebuah nilai integer: ";
    cin >> n;

    int* arr = new int[n];
    int* ptr = arr;
    for(int i = 0; i < n / 2; i++){
        cout << *ptr <<" ";
        ptr++;
    }
    delete[] arr;

    return 0;
}