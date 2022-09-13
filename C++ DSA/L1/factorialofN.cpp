#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int i = 1, fac = 1;

    while (i<=n)
    {
        fac = fac * i;
        i = i + 1;
    }

    cout << fac;
    
}