// for n = 4

// D 
// C D
// B C D
// A B C D


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

        char ch = ('A' + n - i);


        


        
        while (j<=i)
        {
            
            // ch = (n -i +j);
            
            cout << ch<<" ";
            j = j + 1;
            ch = ch + 1;
        }

        cout << "\n";

        // ch = ch - 1;


        
        i = i+1;
    }
    


}