#include <iostream>

using namespace std;

int main()
{
    // Deklarasi string d dan integer x.
    string d = "input\t: ";
    int x;

    // Deklarasi pertama untuk x, dan
    // inisialisasi integer ma dan mi
    // dari nilai x.
    cout << d;
    cin >> x;
    int ma = x;
    int mi = x;

    // Jika angka yang di input -99,
    // keluar dari program.
    if(x == -99){
        return 0;
    }

    // Jika angka yang di input -99,
    // keluar dari loop.
    while(x != -99){
        cout << d;
        cin >> x;
        // Pengecekan nilai maksimal
        // minimal dari var ma dan
        // mi yang tersimpan.
        if(x >= ma && x != -99){
            ma = x;
        }
        if(x <= mi && x != -99){
            mi = x;
        }
    }

    // Output dari var ma dan mi.
    cout << "\nNilai Maksimal\t: " << ma << "\nNilai Minimal\t: "<< mi << endl;

    return 0;
}
