/* --------------------------------------------------------- */
/* File Program : PTR4.CPP */
/* Contoh pemakaian pointer */
/* --------------------------------------------------------- */

#include <stdio.h>

int main()
{
	int z, s, * pz, * ps; // Deklarasi variabel integer z, s, dan pointer integer pz, ps

	z = 20; // Inisialisasi nilai variabel z dengan 20
	s = 30; // Inisialisasi nilai variabel s dengan 30

	pz = &z; // Memasukkan alamat variabel z ke dalam pointer pz
	ps = &s; // Memasukkan alamat variabel s ke dalam pointer ps
	*pz = *pz + *ps; // Mengakses nilai, menjumlahkannya, dan menyimpan hasilnya kembali ke variabel yang ditunjuk oleh pz

	// Mencetak nilai variabel z dan s
	printf("z = %d, s = %d\n", z, s);

	return 0;
}
