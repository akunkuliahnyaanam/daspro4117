#include <iostream>

using namespace std;

int main()
{
    // Deklarasi string d dan integer x.
    string d = "input\t: ";
    int x;

    // Jika angka yang di input -99,
    // keluar dari loop.
    while(x != -99){
        cout << d;
        cin >> x;
    }
    return 0;
}
