#include<stdio.h>
int main()
{
    int Test_Cases;
    scanf("%d",&Test_Cases);
    while (Test_Cases--)
    {
        int Number_Of_Gifts;
        scanf("%d",&Number_Of_Gifts);
        printf("%d\n",(Number_Of_Gifts-(Number_Of_Gifts/5)));
    }
    
}