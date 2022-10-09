#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    cout << "Kelipatan 5 dari 0 - 40" << endl;
    do {
        if ( x % 5 == 0 )
            cout << x << endl;
            x++;
    }
    while (x <= 40);
    return 0;
}
