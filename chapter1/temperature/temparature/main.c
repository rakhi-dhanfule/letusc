/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 3, 2019, 2:17 PM
 */
#include<stdio.h>



int main()
{
    float celsius, fahrenheit;

    /* Input temperature in Fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to Celsius conversion formula */
    celsius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of Celsius */
    printf("%f Fahrenheit = %f Celsius", fahrenheit, celsius);

    return 0;
}

