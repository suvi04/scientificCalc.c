#include <stdio.h>
#include <math.h>

int fact(int a)
{
    int fact = 1;
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    printf("--Scientific Calculator--\n");
    printf("Enter the function: \n1. tan(x)\n2. sin(x)\n3. cos(x)\n4. x^n\n5. e^x\n");
    int choice;
    double ans;
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter the value of x : ");
        double x;
        scanf("%lf",&x);
        double xDeg = x;
        x *= 3.14159265359/180;
        ans = x + pow(x,3)/3 + 2*(pow(x,5)/15) + 17*(pow(x,7)/315);
        printf("ln(%lf) = %lf",xDeg,ans);
    }

    if(choice==2)
    {
        printf("Enter the value of x : ");
        double x;
        scanf("%lf",&x);
        double xDeg = x;
        x *= 3.14159265359/180;
        ans = x- pow(x,3)/fact(3) + pow(x,5)/fact(5) + pow(x,7)/fact(7);
        printf("sin(%.2f)= %lf",xDeg,ans);
    }

    if(choice==3)
    {
        printf("Enter the value of x : ");
        double x;
        scanf("%lf",&x);
        double xDeg = x;
        x *= 3.14159265359/180;
        ans = 1- pow(x,2)/fact(2) + pow(x,4)/fact(4) - pow(x,6)/fact(6) + pow(x,8)/fact(8) ;
        printf("cos(%.2f)= %lf",xDeg,ans);
    }

    if(choice==4)
    {
        printf("Enter the value of x : ");
        double x;
        scanf("%lf",&x);
        printf("Enter the value of n : ");
        double n;
        scanf("%lf",&n);
        ans = pow(x,n);
        printf("%lf^%lf = %lf",x,n,ans);
    }

    if(choice==5)
    {
        printf("Enter the value of x : ");
        double x;
        scanf("%lf",&x);
        ans = pow(2.71828,x);
        printf("e^%lf = %lf",x,ans);
    }


    return 0;
}