//Wap to determine the roots of quadratic equation ax^2+bx+c=0.
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,realPart,imaginaryPart;
    printf("Enter coefficients a,b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    //check if it is quadratic equation
    if(a==0)
    {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    //Calculate discriminant
    discriminant=b*b-4*a*c;

    //Determine root type based on discriminant
    if(discriminant>0)
    {
        //Two distinct real roots
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and distinct:\n");
        printf("Root1= %.2lf\n",root1);
        printf("Root2= %.2lf\n",root2);
    }
    else if(discriminant==0)
    {
        //One real root
        root1=-b/(2*a);
        printf("Roots are real and equal:\n");
        printf("Root1=Root2= %.2lf.\n",root1);
    }
    else
    {
        //Complex roots
        realPart=-b/(2*a);
        imaginaryPart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and imaginary.\n");
        printf("Root1=%.2lf+%.2lfi\n",realPart,imaginaryPart);
        printf("Root2=%.2lf-%.2lfi.\n",realPart,imaginaryPart);
    }
    return 0;
}