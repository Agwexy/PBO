#include <iostream>

// Main Program

int main() {
    // Variabel
    int angka = 10;
    double nilai = 3.14;
    char karakter = 'A';
    bool benar = true;

    // Tipe data
    int bulan = 9;
    std::string namaBulan = "September";

    // For loop
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iterasi ke-" << i << std::endl;
    }

    // If statement
    if (angka > 5) {
        std::cout << "Angka lebih besar dari 5." << std::endl;
    } else {
        std::cout << "Angka tidak lebih besar dari 5." << std::endl;
    }

    // While loop
    int j = 1;
    while (j <= 3) {
        std::cout << "Perulangan while ke-" << j << std::endl;
        j++;
    }

    // Do-while loop
    int k = 1;
    do {
        std::cout << "Perulangan do-while ke-" << k << std::endl;
        k++;
    } while (k <= 3);

    // Array satu dimensi
    int angkaArr[5] = {1, 2, 3, 4, 5};

    // Array multidimensi
    int matriks[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Input
    int inputAngka;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> inputAngka;
    std::cout << "Anda memasukkan angka: " << inputAngka << std::endl;

    // Output
    std::cout << "Halo, dunia!" << std::endl;

    // Comment
    // Ini adalah komentar satu baris

    /*
    Ini adalah komentar
    multi-baris
    */

    return 0;
}

