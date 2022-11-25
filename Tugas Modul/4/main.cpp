#include <iostream>

using namespace std;

int main()
{
    // Deklarasi integer x untuk melimit dan
    // integer hasil untuk penampung hasil.
    int x = 20;
    int hasil = 0;

    // Loop, untuk mengoperasi nilai i yang di
    // limit nilai x dan ditampung di var hasil.
    for(int i=1 ; i <= x; i++){
        hasil = hasil + i;
    }

    // Menampilkan dan membagi nilai hasil
    // dengan nilai x agar memperoleh rata-rata.
    cout << hasil / x << endl;
    return 0;
}
