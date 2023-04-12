#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char data[3][100] = {"2217051084Reguel Andreas Agustinus P",
                          "2217051134Rizqi Ahmad Ghozali",
                          "2217051160Wahyu Daffa S"};
    char* endPtr;
    for(int i = 0; i < 3; i++){
        long value = strtod(data[i], &endPtr);
        cout << "Nama : " << endPtr << endl;
        cout << "NPM  : " << value << endl;
        cout << endl;
    }
}
