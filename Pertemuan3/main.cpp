#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Pertemuan ke 3 \n" << endl;
    cout << "Nama\t: Khoirul Anam \nNIM\t: A11.2022.14651 \n"<< endl;

    // Deklarasi Variabel
    int u;
    char n[50];

    string p = "Pisang";
    int l= 2004;
    float b= 58.42;


    // Menggunakan scanf
    cout << "Nama Panggilan\t: ";
    scanf("%s", n,"\n");

    // Menggunakan cin
    cout << "Umur\t\t: ";
    cin >> u;
    cout << endl;

    //Meng-outputkan variable
    printf("Aku %s", n);
    cout << ", " <<"umurku " << u << " tahun." << endl;
    cout << "Berat badanku " << b << " Kg." << endl;
    cout << "Tahun lahirku " << l << ", \ndan saya suka makan " << p << ". \n";

    return 0;
}
