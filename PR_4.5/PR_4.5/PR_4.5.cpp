#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int x, y, R;

    cout << "R = "; cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ") x = "; cin >> x;
        cout << i + 1 << ") y = "; cin >> y;

        if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && ((x >= 0 && y >= 0 && y >= x) || (x <= 0 && y <= 0 && y <= x)))
            cout << "hit" << endl;
        else  cout << "no" << endl;
    }

    x, y = 0;

    for (int i = 0; i < 10; i++)
    {
        x = -R + rand() % (R + 1) * 2;
        y = -R + rand() % (R + 1) * 2;

        cout << setw(2) << i + 1 << ") x = " << setw(2) <<x;
        cout << "  |  " << "y = " << setw(2) << y;

        if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && ((x >= 0 && y >= 0 && y >= x) || (x <= 0 && y <= 0 && y <= x)))
            cout << endl << "hit" << endl;
        else  cout << endl << "no" << endl;
    }
    return 0;
}
