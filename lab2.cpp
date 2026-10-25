#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int sum = 0;

    for (int i = 21; i < 100; i += 3)
    {
        sum += i;
    }

    cout << "Сумма чисел: " << sum << endl;

    return 0;
}
