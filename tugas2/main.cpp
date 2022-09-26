#include <iostream>

using namespace std;

int main()
{
    int j;
    string j1="Teknik Informatika";
    string j2="Sistem Informasi";
    string j3="DKV";
    cout << "======Jurusan======" << endl;
    cout << "1. " << j1 << endl;
    cout << "2. " << j2 << endl;
    cout << "3. " << j3 << endl;
    cout << "Masukan Jurusan Anda\t: ";
    cin >> j;
    if (j == 1){
        cout << "Jurusan Anda Adalah " << j1 << endl;
    }
    if (j == 2 ){
        cout << "Jurusan Anda Adalah " << j2 << endl;
    }
    if (j == 3 ){
        cout << "Jurusan Anda Adalah " << j3 << endl;
    }
    if (j < 0 || j > 3) {
        cout << "Jurusan tidak diketahui." << endl;
    }
    return 0;
}
