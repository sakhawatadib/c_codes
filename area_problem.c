#include<stdio.h>
int main()
{
    char c;
    float b,h;
    float area;
    printf("What do you want : ");
    scanf("%c",&c);
    if(c == 't')
    {
        printf("Input base and hight : ");
        scanf("%f %f",&b,&h);
        area = 0.5 * b * h;
    }
    else if(c == 'c')
    {
        printf("Input radius : ");
        scanf("%f",&b);
        area = 3.14159 * b * b;
    }
    else if(c == 's')
    {
        printf("Input side : ");
        scanf("%f",&b);
        area = b * b;
    }
    else if(c == 'r')
    {
        printf("Input side_1 and side_2 : ");
        scanf("%f %f",&b,&h);
        area = b * h;
    }

    printf("\n\nArea is : %.2f square unit",area);

    return 0;

}
