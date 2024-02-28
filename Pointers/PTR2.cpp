/* --------------------------------------------------------- */
/* File Program : PTR2.CPP */
/* Contoh pemakaian pointer yang salah */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */

#include <stdio.h>

int main()
{
	float* pu;   // Deklarasi Pointer ke float
	float nu;    // Deklarasi Variabel float

	int u = 1234;  // Deklarasi dan inisialisasi sebuah var integer dengan nilai 1234

	pu = &u;  // Warning karena tipe pointer dan tipe variabel yang ditunjuk tidak cocok.
	nu = *pu; // Isi dari alamat yang ditunjuk oleh 'pu'

	// Mencetak nilai variabel 'u'
	printf("u = %d\n", u);
	// Mencetak nilai variabel 'nu'
	printf("nu = %f\n", nu);

	return 0;
}