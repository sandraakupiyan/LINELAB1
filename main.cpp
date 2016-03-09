#include <stdio.h>
//This program is just an exampie one under VCS.
float a,b;
int main()
{
    printf("chislo a: ");
    scanf("%f",&a);
    printf("chislo b: ");
    scanf("%f",&b);
    printf("%1.0f+%1.0f=%1.0f \n",a,b,a+b);
    printf("%1.0f-%1.0f=%1.0f \n",a,b,a-b);
    printf("%1.0f*%1.0f=%1.0f \n",a,b,a*b);
    printf("%1.0f/%1.0f=%1.4f \n",a,b,a/b);
    return 0;
}
