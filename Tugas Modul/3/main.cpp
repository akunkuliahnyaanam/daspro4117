#include <iostream>

using namespace std;

int main()
{
    // Loop - for,
    for(int i=100 ; i > 0; i--){
        // Output i.
        cout << i << endl;
        // Jika integer i = 55,
        // keluar dari loop.
        if(i == 55){
            break;
        }
    }
    return 0;
}
