/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 5, 2019, 2:23 PM
 */

#include <stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    
    printf(" enter the temperature in  Fahrenheit:");
    scanf("%f", &  Fahrenheit);
    
    /* Fahrenheit to Celsius conversion formula*/
    Celsius=( Fahrenheit -32)*5/9 ;
     printf("%f Fahrenheit = %f Celsius", Fahrenheit,Celsius);
}
