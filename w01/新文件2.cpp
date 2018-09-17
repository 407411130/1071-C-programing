#include<stdio.h>
int main()
{
    float C,F;
    printf("enter C:  \n");
    printf("enter F:\n");
    scanf("%f",&C);
    scanf("%f",&F);
    F=C*9/5+32;C=(F-32)*5/9;
    printf("%.1f F=%.1f C\n",F,C);
    printf("%.1f C=%.1f F\n",C,F);
    return 0;
}
