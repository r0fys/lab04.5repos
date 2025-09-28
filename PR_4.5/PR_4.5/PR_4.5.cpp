#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, R;

    /*1 �����: ��� ������ ������ �������, ���������� (x, y) ���� ��������� 
    � ���������, �������� ������� ����������� ��� ��������� � �����.*/

    cout << "R = "; cin >> R;

    for (int i = 0; i < 10; i++) 
    {
        cout << i+1 <<") x = "; cin >> x;
        cout << i+1 <<") y = "; cin >> y;

        if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && ((x >= 0 && y >= 0 && y >= x) || (x <= 0 && y <= 0 && y <= x)))
            cout << endl << "hit 1" << endl;
        else  cout << endl << "no 1" << endl;
    }

    x, y, R = 0;

    /*2 �����: ��� ��������� ������ �������, ���������� (x, y) 
    ���� ������������ ��������� �� ��������� ��������� x, y[A; B], 
    �������� �������� ��������� (x, y) �� ������� ����������� ��� ��������� � �����.*/

    cout <<endl<< "R = "; cin >> R; // �������: "�� �����"? 
    for (int i = 0; i < 10; i++)
    {
        cout << i+1 << ") x = "; cin >> x;
        cout << i+1 << ") y = "; cin >> y;

        if (x <= R && x >= -R && y <= R && y >= -R)
        {
            if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && ((x >= 0 && y >= 0 && y >= x) || (x <= 0 && y <= 0 && y <= x)))
                cout << endl << "hit 2" << endl;
            else  cout << endl << "no 2" << endl;
        }
    }
    return 0;
}
