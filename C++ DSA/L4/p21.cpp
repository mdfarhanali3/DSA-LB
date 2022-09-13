// for n = 4

// 1111
//  222
//   33
//    4


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    
    

    while (i<=n)
    {

    int j = i;



        int spaces = 1;


        
        while (spaces<i)
        {
            
            // ch = (n -i +j);
            
            cout << " ";
            spaces = spaces + 1;
            // ch = ch + 1;
        }
        while (j<=n)
        {
            
            int count = i;
            
            cout << count;
            j = j + 1;
            // ch = ch + 1;
        }

        cout << "\n";

        // ch = ch - 1;


        
        i = i+1;
    }
    


}