#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    for(int i=0;i<Testcases;i++)
    {
        int X,Y;
        scanf("%d %d\n",&X,&Y);
        
        if(X>Y)
        {
            printf("car\n");
        }
        else if(X<Y)
        {
            printf("bike\n");
        }
        else
        {
            printf("same\n");
        }
    }
    return 0;
}
//code by bhumika nayak