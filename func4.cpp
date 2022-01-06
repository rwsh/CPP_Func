#include <iostream> // подключаем библиотеку ввода/вывода

using namespace std; // используем пространство имен стандартной библиотеки

int calc(int a, int b = 7) // если не задать b, то его значение будет 7
{
    return a * b; // возвращаем результат
}

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    cout << calc(5, 9) << "\t" << calc(5) << endl;
}
