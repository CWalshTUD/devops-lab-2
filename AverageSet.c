#include <stdio.h>
#define SIZE 2


int main()
{
    int Sum;
    int Num;
    int Average;
    int i;

    printf("Enter in 2 numbers\n");

    for(i=0;i<SIZE;i++)
    {
        printf("Enter in 2 numbers\n");
        scanf("%d",&num);
        Sum = Sum + Num;
    }

    Average = Sum / SIZE;

    printf("%d",Average);


}