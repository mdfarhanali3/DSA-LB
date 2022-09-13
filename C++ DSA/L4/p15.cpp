// for n = 4

// A 
// B C
// D E F
// G H I J


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;


    char ch = 'A';

    while (i<=n)
    {
        int j = 1;
        // char ch = 'A';

        


        
        while (j<=i)
        {
            
            
            cout << ch<<" ";
            j = j + 1;
            ch = ch + 1;
        }

        cout << "\n";

        // ch = ch + i;


        
        i = i+1;
    }
    


}