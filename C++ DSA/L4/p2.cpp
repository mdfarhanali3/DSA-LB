// for n = 4

// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

// n-j+1


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;


        while (j<=n)
        {
            int p = n + 1 - j;
            cout << p; 
            j = j + 1;
        }

        cout << "\n";
        
        i = i+1;
    }
    


}