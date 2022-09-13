#include<stdio.h>

int main()
{

    int testcases;

    scanf("%d", &testcases);

    while (testcases--)

    {
        int a,b;

        scanf("%d", &a);
        scanf("%d", &b);

        if (a<b)
        {
            printf("REPAIR\n");
        }
        else if (a>b)
        {
            printf("NEW PHONE\n");
        }
        else
        {
            printf("ANY\n");
            
        }

    }
    
    return 0;
}