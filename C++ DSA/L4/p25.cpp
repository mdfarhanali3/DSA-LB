#include<iostream>
using namespace std;

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;

        while(j<=(n-i+1))
        {
            cout << j;
            j = j+1;
        }
        j = i - 1;
        while(j>=1)
        {
            cout <<"**";
            j = j-1;
        }
        j=(n-i+1);
        while(j>=1)
        {
            cout << j;
            j = j-1;
        }
        

        cout << endl;

        i = i + 1;

       


    }
    


}
