#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int calc(int a, int b = 7) // ���� �� ������ b, �� ��� �������� ����� 7
{
    return a * b; // ���������� ���������
}

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    cout << calc(5, 9) << "\t" << calc(5) << endl;
}
