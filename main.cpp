#include <iostream>
#include <windows.h>
using namespace std;

double alg(unsigned n, unsigned k);

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
unsigned n = 0, k = 0;
bool ans = 1;
while (ans)
{
system("cls");
cout << "Вычисление алгебраической суммы X = 1^K + 2^K + 3^K ... N^K" << endl;
cout << "N = "; cin >> n;
cout << "K = "; cin >> k;
cout << "Алгебраическая сумма 1^K + 2^K + 3^K ... N^K = " << alg(n, k) << endl;
cout << "Повторить? (1 - да, 0 - нет): "; cin >> ans;
}
system("pause");
return 0;
}

double alg(unsigned n, unsigned k)
{
static double x = 0;
if (n)
{
x += pow(n, (float)k);
n--;
return alg(n, k);
}
return x;
}