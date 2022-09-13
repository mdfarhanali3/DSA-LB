// for n = 4

// 1
// 2 1
// 3 2 1
// 4 3 2 1




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1, count = 1;

    // int count = n*n;

    while (i<=n)
    {
        int j = 1;

        count = i;
        
        while (j<=i)
        {
            
            
            cout << count<<" ";
            j = j + 1;
            count = count - 1;
        }

        cout << "\n";
        
        i = i+1;
    }
    


}