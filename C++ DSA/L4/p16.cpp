// for n = 4

// A 
// B C
// C D E
// D E F G


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
        // char ch = 'A';

        // ch = i;


        
        while (j<=i)
        {
            
            char ch = ('A' + i + j - 2);
            
            cout << ch<<" ";
            j = j + 1;
            // ch = ch + 1;
        }

        cout << "\n";

        // ch = ch - 1;


        
        i = i+1;
    }
    


}