#include<stdio.h>
int main()
{
    
    printf("Input binary : ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("your gray code :");
    if(a==0 && b==0 && c==0)
    {
        printf("0 0 0");
    }
    else if(a==0 && b==0 && c==1)
    {
        printf("0 0 1");
    }
    else if(a==0 && b==1 && c==0)
    {
        printf("0 1 1");
    }
    else if(a==0 && b==1 && c==1)
    {
        printf("0 1 0");
    }
    else if(a==1 && b==0 && c==0)
    {
        printf("1 1 0");
    }
    else if(a==1 && b==0 && c==1)
    {
        printf("1 1 1");
    }
    else if(a==1 && b==1 && c==0)
    {
        printf("1 0 1");
    }
    else if(a==1 && b==1 && c==1)
    {
        printf("1 0 0");
    }

}
