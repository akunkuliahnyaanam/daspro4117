#include <iostream>

using namespace std;

int main(){
    cout << "Bilangan Fibonacci kurang dari 100." << endl;
    int n = 100, t1 = 0, t2 = 1,hasil;
    hasil = t1 + t2;

    while(hasil <= n) {
        cout << hasil << endl;
        t1 = t2;
        t2 = hasil;
        hasil = t1 + t2;
    }

    return 0;
}
