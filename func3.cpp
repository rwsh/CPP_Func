#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

void calc(int n)
{
    n++;
    cout << "������ �������: " << n << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    int n = 5;
    calc(n);
    cout << "����� ������ �������: " << n << endl;
}
