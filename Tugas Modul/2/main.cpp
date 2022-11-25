#include <iostream>

using namespace std;

int main()
{
    // Loop - for.
    for(int i=100 ; i > 0; i--){
        // Jika integer i ganjil,
        // lewati.
        if(i % 2 != 0){
            continue;
        }
        // Output i.
        cout << i << endl;
    }
    return 0;
}
