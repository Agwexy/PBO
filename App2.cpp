#include <iostream>
using namespace std;

// Main Program

int main() {
    // Variabel
    int angka = 10;
    char karakter = 'A';
    bool benar = true;

    // Tipe data
    int bulan = 9;
    string namaBulan = "September";

    // For loop
    for (int i = 1; i <= 5; i++) {
        cout << "Iterasi ke-" << i << std::endl;
    }

    // If statement
    if (angka > 5) {
        cout << "Angka lebih besar dari 5" << std::endl;
    } else {
        cout << "Angka tidak lebih besar dari 5" << std::endl;
    }

    // While loop
    int j = 1;
    while (j <= 3) {
        cout << "Perulangan while ke-" << j << std::endl;
        j++;
    }

    // Do-while loop
    int k = 1;
    do {
        cout << "Perulangan do-while ke-" << k << std::endl;
        k++;
    } while (k <= 3);

    // Array satu dimensi
    int angkaArr[5] = {1, 2, 3, 4, 5};

    // Array multidimensi
    int matriks[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Input
    int inputAngka;
    cout << "Masukkan sebuah angka: ";
    cin >> inputAngka;
    cout << "Angka yang dimasukan: " << inputAngka << std::endl;

    // Output
    cout << "Halo, dunia!" << std::endl;

    // Comment
    // Ini adalah komentar satu baris

    /*
    Ini adalah komentar
    multi-baris
    */

    return 0;
}

