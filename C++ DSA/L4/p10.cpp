// for n = 4

// A A A A
// B B B B
// C C C C
// D D D D 


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    char ch = 'A';

    // int count = n*n;

    while (i<=n)
    {
        int j = 1;

        
        while (j<=n)
        {
            
            
            cout << ch<<" ";
            j = j + 1;
            // count = count - 1;
        }

        cout << "\n";

        ch = ch + 1;


        
        i = i+1;
    }
    


}