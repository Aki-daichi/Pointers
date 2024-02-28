/* --------------------------------------------------------- */
/* File Program : PTR1.CPP */
/* Contoh pemakaian pointer */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */

#include <stdio.h>

int main()
{
	int x, y; // Deklarasi variabel x dan y sebagai integer
	int* px; // Deklarasi pointer px yang menunjuk ke alamat memori var integer

	x = 87; // Inisialisasi nilai x dengan 87

	px = &x; // Mengarahkan pointer px ke alamat memori variabel x
	y = *px; // Menyimpan nilai yang ditunjuk oleh pointer px dalam variabel y

	// Menampilkan alamat memori variabel x
	printf("Alamat x = %p\n", &x);
	// Menampilkan isi variabel x
	printf("Isi px = %d\n", x);
	// Menampilkan nilai yang ditunjuk oleh pointer px
	printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	// Menampilkan alamat memori variabel y
	printf("Alamat y = %p\n", &y);
	// Menampilkan nilai variabel y
	printf("Nilai y = %d\n", y);

	return 0;
}
