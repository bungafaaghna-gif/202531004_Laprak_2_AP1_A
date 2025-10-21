#include <iostream>
using namespace std;

int main () {
    
    // Meminta input umur dari penggguna
    cout<< "masukkan Umur: ";
    cin >> umur;
    
    // Menentukan kategori film berdasarkan umur
    if (umur < 13) {
        cout << "SU" << endl;
    }
    else if (umur < 17) {
        cout << "R13" << endl;
    }
    else if (umur < 21) {
        cout << "D17" << endl;
    }
    else {
        cout << "D21" << endl;
    }

    return 0;

}
          
