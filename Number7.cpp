//                  Код прислал https://vk.com/fuckaiieasyidareblocked123456789
//                  Чуть ниже будет мой код

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int seconds = t % 60;
    t /= 60;
    int minutes = t % 60;
    t /= 60;
    cout << t << " Hours " << minutes << " Minutes " << seconds << " Seconds";
    return 0;
}
