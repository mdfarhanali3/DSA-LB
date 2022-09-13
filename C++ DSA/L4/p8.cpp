// for n = 4

// 1 
// 2 3
// 3 4 5
// 4 5 6 7




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1, count = 1;

    

    while (i<=n)
    {
        count = i;
        int j = 1;
        
        while (j<=i)
        {
            
            
            cout << count<<" ";
            j = j + 1;
            count = count + 1;
           
        }

        cout << "\n";
        // j = j + 1;
        
        i = i+1;
    }
    


}