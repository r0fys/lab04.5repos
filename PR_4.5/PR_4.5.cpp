#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, R, random_x, random_y;

    /*1 �����: ��� ������ ������ �������, ���������� (x, y) ���� ���������
    � ���������, �������� ������� ����������� ��� ��������� � �����.*/

    cout << "R = "; cin >> R;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ") x = "; cin >> x;
        cout << i + 1 << ") y = "; cin >> y;

        if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) && ((x >= 0 && y >= 0 && y >= x) || (x <= 0 && y <= 0 && y <= x)))
            cout << endl << "hit 1" << endl;
        else  cout << endl << "no 1" << endl;
    }

    x, y, R = 0;

    /*2 �����: ��� ��������� ������ �������, ���������� (x, y)
    ���� ������������ ��������� �� ��������� ��������� x, y[A; B],
    �������� �������� ��������� (x, y) �� ������� ����������� ��� ��������� � �����.*/

    cout << endl << "R = "; cin >> R; // �������: "�� �����"? 
    for (int i = 0; i < 10; i++)
    {
        random_x = -R + rand() % (R + 1) * 2;
        random_y = -R + rand() % (R + 1) * 2;

        cout << i + 1 << ") x = " << random_x;
        cout << "  |  " << "y = " << random_y;

        if ((pow(random_x, 2) + pow(random_y, 2) <= pow(R, 2)) && ((random_x >= 0 && random_y >= 0 && random_y >= random_x) || (random_x <= 0 && random_y <= 0 && random_y <= random_x)))
            cout << endl << "hit 1" << endl;
        else  cout << endl << "no 1" << endl;
    }
    return 0;
}
