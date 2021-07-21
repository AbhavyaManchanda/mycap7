#include<iostream>
using namespace std;
int prime(int a)
{
    int i;
    int count=0;
    for(i=1;i<a;i++)
     {
         if (a%i==0)
         {
            count+=1;
         }
    }
    if (a<=1)
    {
        return 0;

    }
    else if (count>1)
     {
    return 1;

    }
    else
    {
        return 2;
    }
}
/* Code for the main function*/
int main()
{
    printf("Enter your desired number");
    int a;
    scanf("%d",&a);
    int i;
     for(i=2;i<a;i++)
    {
        if (prime(i)==2 && prime(a-i)==2)
        {
            printf("The sum of %d and %d is %d\n",i,a-i,a);
        }
    }
    return 0;
}

