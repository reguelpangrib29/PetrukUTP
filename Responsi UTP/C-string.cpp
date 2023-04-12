//Deklarasi dan inisialisasi C-string
#include <iostream>
using namespace std;

int main(){
    char nama[15] = "Reguel";
    char prodi[] = "Ilkom";

    cout << nama << endl;
    cout << sizeof(nama) << endl;

    cout << prodi << endl;
    cout << sizeof(prodi) << endl;

// Pada contoh diatas, kita membuat looping pada char prodi[] untuk mengecek apakah
// terdapat karakter Null ('\0') atau tidak
    for(int i = 0; i < sizeof(prodi); i++)
        cout << prodi[i] <<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;

}

//Input pada C-String (cin.get & cin.ignore)
//untuk cin.get
#include <iostream>
using namespace std;

int main(){
    char nama[15];
    char npm[10];

    cin.get(nama,15);
    cin.ignore();
    cin.get(npm,10);

    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;

}

//untuk cin.ignore
#include <iostream>
using namespace std;

int main(){
    char karakter;
    while (cin.get(karakter)){
        if (karakter == "a")
            cin.putback('x');
        else 
            cout << karakter ;
    }
}


//Fungsi untuk manipulasi C-string
//1. strlen()
#include <iostream>
using namespace std;

int main(){
    char str [] = {'I', 'L', 'K', 'O', 'M', 'P', '\0'};

    cout << str << endl;
    cout << strlen(str) << endl;
}

//2. strcat()
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char firstName[50] = "Reguel Andreas ";
    char lastName[50] = "Pangaribuan";
    char *fullName[50] = strcat(firstName, lastName);
    cout << fullName;

}

//3. strtol()
/*Pada contoh diatas, kita mengkonversi string value menjadi long value dengan
menggunakan fungsi strtol(), dengan parameter pertama untuk variabel yang akan
dikonversi
Parameter kedua untuk menampung pointer ke pointer ke karakter, ketika mencapai
karakter "J", konversi berhenti dan strtol() mengembalikan alamat karakter “John”.
Parameter ketiga untuk menampung basis bilangan yang dipakai pada variabel di
parameter pertama.*/

#include <iostream>
#include <csting>
using namespace std;

int main(){
    char* endptr;
    char str1[] = "00011010Reguel";
    long value1 = strtol(str1, &endptr, 2);
    cout << "The converted value is" << value1 << endl;
    cout << "Unconverted part: " << endptr << endl;
    
    char str2[] = "1CGhozali";
    long value2 = strtol(str2, &endptr, 16);
    cout << "The converted value is" << value2 << endl;
    cout << "Unconverted part: " << endptr << endl;

    char str3[] = "40Dapa";
    long value3 = strtol(str3, &endptr, 10);
    cout << "The converted value is" << value3 << endl;
    cout << "Unconverted part: " << endptr << endl;

}


//4. strtoul()
#include <iostream>
#include <csting>
using namespace std;

int main(){
    char* endptr;
    char str1[] = "00011010Reguel";
    unsigned long value1 = strtoul(str1, &endptr, 2);
    cout << "The converted value is" << value1 << endl;
    cout << "Unconverted part: " << endptr << endl;
    
    char str2[] = "1CGhozali";
    unsigned long value2 = strtoul(str2, &endptr, 16);
    cout << "The converted value is" << value2 << endl;
    cout << "Unconverted part: " << endptr << endl;

    char str3[] = "40Dapa";
    unsigned long value3 = strtoul(str3, &endptr, 10);
    cout << "The converted value is" << value3 << endl;
    cout << "Unconverted part: " << endptr << endl;

}

//5. strtod()
#include <iostream>
#include <csting>
using namespace std;

int main(){
    char* endptr;
    char str1[] = "10Reguel";
    double value1 = strtod(str1, &endptr);
    cout << "The converted value is" << value1 << endl;
    cout << "Unconverted part: " << endptr << endl;
    
    char str2[] = "20Ghozali";
    double value2 = strtod(str2, &endptr,);
    cout << "The converted value is" << value2 << endl;
    cout << "Unconverted part: " << endptr << endl;

    char str3[] = "40Dapa";
    double value3 = strtod(str3, &endptr,);
    cout << "The converted value is" << value3 << endl;
    cout << "Unconverted part: " << endptr << endl;

}


