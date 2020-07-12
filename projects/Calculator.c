#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<math.h>
float add (float *A,float *B)
{
    float C;
    C = *A + *B;
    return (C);
}
float sub (float *A,float *B)
{
    float C;
    C = *A - *B;
    return (C);
}
float mul (float *A,float *B)
{
    float C;
    C = *A * *B;
    return (C);
}
float divide (float *A,float *B)
{
    float C;
    C = *A / *B;
    return (C);
}
int mod (int *A,int *B)
{
    int C;
    C= *A % *B;
    return (C);
}
int Fact (int i)
{
    int f;
    if(i>=1)
    {
        f = i *Fact(i-1);
    }
    else
        return 1;
    return(f);
}
int main()
{
    float i,j,p;
    int n,l=1,e,f,g;
    printf("Welcome to my C project \n");
    while (l)
    {
        printf("enter the given number to select the operation");
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Modulus");
        printf("\n 6. Factorial");
        printf("\n 7. Power");
        printf("\n 8. Exit\n");
        scanf("%d",&n);
        switch(n)
            {
                case 1: printf("enter 2 number simultaneously \n");
                        scanf("%f%f",&i,&j);
                        p=add(&i,&j);
                        printf("Addition of %f and %f is %f\n",i,j,p);
                        break;
                case 2: printf("enter 2 number simultaneously \n");
                        scanf("%f%f",&i,&j);
                        p=sub(&i,&j);
                        printf("Subtraction of %f and %f is %f\n",i,j,p);
                        break;
                case 3: printf("enter 2 number simultaneously \n");
                        scanf("%f%f",&i,&j);
                        p=mul(&i,&j);
                        printf("Multiplication of %f and %f is %f\n",i,j,p);
                        break;
                case 4: printf("enter 2 number simultaneously \n");
                        scanf("%f%f",&i,&j);
                        p=divide(&i,&j);
                        printf("Division of %f and %f is %f\n",i,j,p);
                        break;
                case 5: printf("enter 2 number simultaneously \n");
                        scanf("%d%d",&e,&f);
                        g=mod(&e,&f);
                        printf("modulus of %d and %d is %d \n",e,f,g);
                        break;
                case 6: printf("enter number \n");
                        scanf("%d",&e);
                        f = Fact(e);
                        printf("factorial of %d is %d \n",e,f);
                        break;
                case 7: printf("enter number \n");
                        scanf("%f",&i);
                        printf("enter power \n");
                        scanf("%f",&j);
                        p= pow(i,j);
                        printf("power of %f is %f \n",i,p);
                        break;
                case 8: exit(0);
                default : printf("invalid choice\n");
            }
    }
}
