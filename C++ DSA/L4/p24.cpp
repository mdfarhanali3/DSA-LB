// for n = 4

//    1
//   121
//  12321
// 1234321


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
    // int count = 1;



    int spaces = 1;


        
        while (spaces<=n-i)
        {
            
            // ch = (n -i +j);
            
            cout << " ";
            spaces = spaces + 1;
            // ch = ch + 1;
        }
        while (j<=i)
        {
            
            
            
            cout << j<<"";
            j = j + 1;
            // count = count + 1;

        }
        j = i - 1;
        while (j>=1)
        {
            
            
            
            cout << j<<"";

            j = j - 1;
            // count = count + 1;

        }

        cout << "\n";


        // ch = ch - 1;


        
        i = i+1;
    }
    


}