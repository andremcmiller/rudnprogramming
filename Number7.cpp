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

//                 Мой код


#include <stdio.h>
int main()
{
    int t ;
    scanf("%d",&t);
    int seconds = t % 60;
    t /= 60;
    int minutes = t % 60;
    t /= 60;
    printf(" %d Hours\n %d Minutes\n %d Seconds\n",t,minutes,seconds);
    return 0;
}
