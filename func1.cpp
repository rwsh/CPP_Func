#include <iostream> // подключаем библиотеку ввода/вывода

using namespace std; // используем пространство имен стандартной библиотеки

double calc(double x, int n) // функция принимает double и int, возвращает double
{
    double res = 1; // результирующая переменная
    for (int i = 0; i < n; i++) // повторяем n раз
    {
        res *= x; // умножаем res на x
    }
    return res; // возвращаем результат
}

int main()
{
    setlocale(LC_ALL, "Russian"); // устанавливаем кириллицу 

    cout << calc(2.0, 5) << endl; // вызываем функцию
}
