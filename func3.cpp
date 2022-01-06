#include <iostream> // подключаем библиотеку ввода/вывода

using namespace std; // используем пространство имен стандартной библиотеки

void calc(int n)
{
    n++;
    cout << "Внутри функции: " << n << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    int n = 5;
    calc(n);
    cout << "После вызова функции: " << n << endl;
}
