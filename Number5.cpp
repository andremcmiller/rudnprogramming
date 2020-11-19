#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int n = c * 2, m = c * 9;
    cout << n / 11 << " " << n % 11 << "/11 kg Ni  " << m / 11 << " " << m % 11 << "/11 kg Cu";
    return 0;
}
