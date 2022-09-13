// for n = 4

// A B C D 
// A B C D
// A B C D
// A B C D


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;


    // int count = n*n;

    while (i<=n)
    {
        int j = 1;

        char ch = 'A';


        
        while (j<=n)
        {
            
            
            cout << ch<<" ";
            j = j + 1;
            ch = ch + 1;
        }

        cout << "\n";

        


        
        i = i+1;
    }
    


}