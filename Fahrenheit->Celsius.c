/*This is a C program that lets the user enter a value of temperature in degree Fahrenheit. Then it converts and prints out the value of temperature in degrees Celsius. */
#include <stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter the degree in Fahrenheit \n");
    scanf("%f", &f);
    c=(f-32)*(5.0/9.0);
    printf("%f degrees Fahrenheit when converted into Celsius is = %f degrees Centigrade", f,c);
    getch();
    return 0;
}
