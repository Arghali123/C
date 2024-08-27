//Wap a c program to calculate the total price of item purchased in a store.
// #include<stdio.h>
// #define SalesTaxRate 0.15
// int main()
// {
//     int Broom=2,DairyMilk=6,Kurkura=3;
//     float Broom_Price=120,DairyMilk_Price=100,Kurkura_Price=50,Sub_total,Total,tax;
//     Sub_total=(Broom*Broom_Price)+(DairyMilk*DairyMilk_Price)+(Kurkura*Kurkura_Price);
//     tax=SalesTaxRate*Sub_total;
//     Total=tax+Sub_total;
    

//     printf("The Total salestax  is %f \n",tax);
//     printf("The subtotal is %.2f: \n",Sub_total);
//     printf("The total price including sales tax is %.2f",Total);
//     return 0;
    
// }


//WAP to calculate the compound interest 
// #include <stdio.h>
// #include<math.h>
// #define n 3
// int main()
// {
//     float principle=20000,rate=15,time=3,amount,x =1+rate/100;
//     amount=principle*(pow(x,n*time));
//     printf("The compund interest is %.2f",amount);
//     return 0;
// }

//WAP to convert an amount from one currency to another
// #include<stdio.h>
// #define Rate 1.6
// int main()
// {
//     float num,amount;
//     printf("Enter the Indian Currency:\n");
//     scanf("%f",&num);
//     amount=Rate*num;
//     printf("Your Nepali rupess amount is %2.f",amount);
//     return 0;
// }

//WAP to convert a given temperature from celcius to fahrenheit and kelvin
// #include<stdio.h>
// #define CELSIUS_TO_KELVIN 278.15
// #define CELCSIUS_TO_FAHRENHEIT_MULTIPLIER 1.8
// #define CELCIUS_TO_FAHRENHEIT_OFFSET 32.0
// int main()
// {
//     float celcius,kelvin,fahrenheit;
//     printf("Enter the Celsius:\n");
//     scanf("%f",&celcius);
//     kelvin=celcius+CELSIUS_TO_KELVIN;
//     fahrenheit=(celcius*CELCSIUS_TO_FAHRENHEIT_MULTIPLIER)+CELCIUS_TO_FAHRENHEIT_OFFSET;
//     printf("Temperature in Kelvin is %.2f\n",kelvin);
//     printf("Temperature in fahrenheit is %.2f\n",fahrenheit);
//     return 0;
// }

//WAP to find the area of 2 cocentric circles and area between them 
// #include <stdio.h>
// #define PI 3.1416
// int main()
// {
//     float r1,r2,a1,a2,area;
//     printf("Enter small radius 1:\n");
//     scanf("%f",&r1);
//     printf("Enter big radius 2:\n");
//     scanf("%f",&r2);
//     a1=PI*r1*r1;
//     a2=PI*r2*r2;
//     area=a2-a1;
//     printf("The area of small circle is %.2f\n",a1);
//     printf("The area of big circle is %.2f\n",a2);
//     printf("The area of cocentric circle with radius %.2f and %.2f is %.2f",r1,r2,area);
//     return 0;
// }

//WAP to find area and perimeter rectangle 
// #include<stdio.h>
// int main()
// {
//     float l,b,perimeter,area;
//     printf("Enter the length of rectangle\n");
//     scanf("%f",&l);
//     printf("Enter the breadth of rectangle\n");
//     scanf("%f",&b);
//     perimeter=2*(l+b);
//     area=l*b;
//     printf("The perimeter of the circle is %.2f\n",perimeter);
//     printf("The area of the circle is %.2f\n",area);
//     return 0;

// }

//Escape Sequence 
/*
1.) \a->audible alert or beep sound 
2.) \b->backspace delete on character to the left 
3.) \v->vertical tab
4.) \t->horizontal tab
5.) \'->single quote
6.) \"->double quote
7.) \\backslash 
8.) \0 null character 

*/
