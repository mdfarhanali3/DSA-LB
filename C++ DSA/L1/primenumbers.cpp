#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;

    int i = 2;

    while (i<n)
    {
        if (n%i==0)
        {
            cout<< "No\n";
            i = i+1;

        }
        else{
            i = i+1;
        }
        
    }

    cout<< "Yes\n";
    
    
}