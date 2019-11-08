 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 5, 2019, 1:47 PM
 */

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    /* Input temperature in Fahrenheit */
    printf("Enter temperature in Celsius: ");
    scanf("%f", &fahrenheit);

    /*  Celsius to Fahrenheit  conversion formula */
    fahrenheit= ( celsius+32 ) * 9/5 ;

    /* Print the value of Celsius */
    printf("%f Celsius = %f Fahrenheit",celsius, fahrenheit);

    return 0;
}