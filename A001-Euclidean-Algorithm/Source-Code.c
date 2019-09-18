#include <stdio.h>

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
    
}
