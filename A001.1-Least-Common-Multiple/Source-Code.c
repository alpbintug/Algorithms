#include <stdio.h>
int findGDC(int a,int b);
int findLCM(int a, int b);


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
    printf("Least Common divisor of your values is; %d",findLCM(a,b));
}


int findGDC(int a,int b)
{
    int dummy;
    while(b>0){
        dummy=b;
        b=a%b;
        a=dummy;
    }
    return a;
}

int findLCM(int a, int b)
{
    return (a*b)/findGDC(a,b);
}
