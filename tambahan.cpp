#include <iostream>
using namespace std;

class Segitiga {
private:
    float luas(int a, int t) {
        return 0.5 * a * t;
    }

    public:
    int alas, tinggi;

    void inputData() {
        cout << "Masukkan Alas Segitiga: ";
        cin >> alas;
        cout << "Masukkan Tinggi Segitiga: ";
        cin >> tinggi;

    }

    void outputData() {
        if (alas % 2 == 1) { // Jika alas ganjil
            cout << "Alas yang dimasukkan adalah bilangan ganjil, luas tidak dapat dihitung." << endl;
        } else { 
            float luasSegitiga = luas(alas, tinggi);
            cout << "Luas Segitiga: " << luasSegitiga << endl;
        }
    }
};