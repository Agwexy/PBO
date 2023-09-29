public class App {
    public static void main(String[] args) {
        // Variabel
        int angka = 10;
        double nilai = 3.14;
        char karakter = 'A';
        boolean benar = true;

        // Tipe data
        int bulan = 9;
        String namaBulan = "September";

        // For loop
        for (int i = 1; i <= 5; i++) {
            System.out.println("Iterasi ke-" + i);
        }

        // If statement
        if (angka > 5) {
            System.out.println("Angka lebih besar dari 5.");
        } else {
            System.out.println("Angka tidak lebih besar dari 5.");
        }

        // While loop
        int j = 1;
        while (j <= 3) {
            System.out.println("Perulangan while ke-" + j);
            j++;
        }

        // Do-while loop
        int k = 1;
        do {
            System.out.println("Perulangan do-while ke-" + k);
            k++;
        } while (k <= 3);

        // Array satu dimensi
        int[] angkaArr = {1, 2, 3, 4, 5};

        // Array multidimensi
        int[][] matriks = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

        // Input
        java.util.Scanner input = new java.util.Scanner(System.in);
        System.out.print("Masukkan sebuah angka: ");
        int inputAngka = input.nextInt();
        System.out.println("Anda memasukkan angka: " + inputAngka);

        // Output
        System.out.println("Halo, dunia!");

        // Comment
        // Ini adalah contoh komentar satu baris

        /*
        Ini adalah contoh komentar
        multi-baris
        */
    }
}