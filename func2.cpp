#include <iostream> // ?????????? ?????????? ?????/??????

using namespace std; // ?????????? ???????????? ???? ??????????? ??????????

void print_star(int n); // ?????? ????????? ???????, ?? ???? ?? ?????????

int main()
{
    setlocale(LC_ALL, "Russian"); // ????????????? ????????? 

    print_star(5); // ???????? ???????
}

void print_star(int n)
{
    int i = 0; // ????????? ? ?????????????? ??????????
    while (true) // "?????? ????"
    {
        if (i == n)
        {
            return; // ????????? ?????????? ???????
        }
        cout << '*' << '\t';  // ?????? ????????? ? ???? ?????????
        i++; // ??????????? i ?? 1
    }
}
