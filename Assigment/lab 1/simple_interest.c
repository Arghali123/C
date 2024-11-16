//6.)Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I =PTR/100)
#include <stdio.h>

int main() {
    double P = 4000, T = 2, R = 5.5;
    double interest = (P * T * R) / 100;
    printf("The simple interest for P = %.2f, T = %.2f, R = %.2f is %.2f\n", P, T, R, interest);
    return 0;
}
