// for n = 4

// A B C D 
// E F G H
// I J K L
// M N O P


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