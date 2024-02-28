/* --------------------------------------------------------- */
/* File Program : PTR3.CPP */
/* Contoh pengubahan isi suatu variabel melalui pointer */
/* Tujuan : Menggunakan type data pointer dan manipulasinya */
/* --------------------------------------------------------- */

#include <stdio.h>

int main()
{
	float d, * pd; // Deklarasi variabel float d dan pointer float pd

	d = 54.5; // Inisialisasi nilai variabel d dengan 54.5

	// Mencetak nilai awal dari variabel d
	printf("Isi d semula = %g\n", d);

	pd = &d; // Memasukkan alamat variabel d ke dalam pointer pd
	*pd = *pd + 10; // Mengakses nilai, menambahkannya dengan 10, dan menyimpan hasilnya kembali ke variabel d

	// Mencetak nilai terbaru dari variabel d setelah penambahan
	printf("Isi d kini = %g\n", d);

	return 0;
}
