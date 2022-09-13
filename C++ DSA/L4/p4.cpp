// for n = 4

// 987
// 654
// 321




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    int count = n*n;

    while (i<=n)
    {
        int j = 1;

        
        while (j<=n)
        {
            
            
            cout << count<< " ";
            j = j + 1;
            count = count - 1;
        }

        cout << "\n";
        
        i = i+1;
    }
    


}