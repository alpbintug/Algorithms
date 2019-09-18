#include <stdio.h>
void findGCD(int a,int b);

int main(){
    int a,b;
    printf("Enter your first value: ");
    scanf("%d",&a);
    if(a<1)
    {
        printf("Your value cannot be smaller than 1");
        return 0;
    }
    printf("Enter your second value: ");
    scanf("%d",&b);
    if(b<1)
        {
        printf("Your value cannot be smaller than 1");
        return 0;
    }
    findGDC(a,b);
}


void findGCD(int a,int b)
{
    int dummy;
    while(b>0){
        dummy=b;
        b=a%b;
        a=dummy;
    }
    printf("Greatest Common Divisor of your values is: %d",a);
}
