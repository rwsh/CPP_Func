#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

double calc(double x, int n) // ������� ��������� double � int, ���������� double
{
    double res = 1; // �������������� ����������
    for (int i = 0; i < n; i++) // ��������� n ���
    {
        res *= x; // �������� res �� x
    }
    return res; // ���������� ���������
}

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    cout << calc(2.0, 5) << endl; // �������� �������
}
