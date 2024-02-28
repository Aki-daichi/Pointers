/* --------------------------------------------------------------------------------------------- */
/* File Program : PTR5.CPP */
/* Deskripsi : pointer ke type dasar, mendeklarasikan & alokasi variabel dinamik */
/* --------------------------------------------------------------------------------------------- */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	/* Kamus Data (deklarasi, inisialisasi nilai variabel)*/
	int i = 5, j;	// Deklarasi variabel i dengan nilai awal 5, dan variabel j tanpa nilai awal.
	char c = 'X';	// Deklarasi variabel c dengan karakter 'X'.
	int* Ptri = (int*)malloc(4);	// Mengalokasikan memori dinamis untuk pointer Ptri sebesar 4 byte (ukuran int).
	int* Ptrj = (int*)malloc(sizeof(int));	// Mengalokasikan memori dinamis untuk pointer Ptrj dengan ukuran yang sesuai dengan int.
	float* fx = (float*)malloc(sizeof(float));	// Mengalokasikan memori dinamis untuk pointer fx dengan ukuran yang sesuai dengan float.
	int A[5];	// Deklarasi array A dengan 5 elemen.
	float f = 7.23;	// Deklarasi variabel f dengan nilai awal 7.23.

	/* program */
	*Ptri = 8;    // Memasukkan nilai 8 ke dalam alamat yang ditunjuk oleh pointer Ptri.
	*Ptrj = 0;    // Memasukkan nilai 0 ke dalam alamat yang ditunjuk oleh pointer Ptrj.
	*fx = 3;      // Memasukkan nilai 3 ke dalam alamat yang ditunjuk oleh pointer fx (mengabaikan presisi desimal karena fx bertipe float).

	printf("Alamat i = %x \n", &i);
	printf("Nilai i = %d \n", i);
	printf("Ukuran int = %d byte\n\n", sizeof(int));
	printf("Alamat j = %x \n", &j);
	printf("Nilai j = %d \n", j);
	printf("Alamat c = %x \n", &c);
	printf("Nilai c = %c \n", c);
	printf("Ukuran char = %d byte\n\n", sizeof(char));
	printf("Alamat Ptri = %x \n", &Ptri);
	printf("Isi var Ptri = %x \n", Ptri);
	printf("Nilai yang ditunjuk oleh Ptri = %d \n", *Ptri);
	printf("Ukuran pointer int = %d byte\n\n", sizeof(int*));
	printf("Alamat Ptrj = %x \n", &Ptrj);
	printf("Isi var Ptrj = %x \n", Ptrj);
	printf("Nilai yang ditunjuk oleh Ptrj = %d \n", *Ptrj);

	Ptrj = Ptri;   // Menetapkan nilai pointer Ptrj = pointer Ptri.

	printf("Isi var Ptrj sekarang = %x \n", Ptrj);
	printf("Nilai yang ditunjuk oleh Ptrj sekarang = %d \n", *Ptrj);
	printf("Alamat A = %x \n", &A);
	printf("Isi var A = %x \n", A[0]);
	printf("Ukuran array A = %d byte\n\n", sizeof(A));
	printf("Alamat f = %x \n", &f);
	printf("Nilai f = %f \n", f);
	printf("Ukuran float = %d byte\n\n", sizeof(float));

	return 0;
}