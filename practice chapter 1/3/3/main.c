/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 11:45 AM
 */

#include <stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    
    printf("enter the temp of a city in Fahrenheit:");
    scanf("%f",&Fahrenheit);
    
    /* Fahrenheit to Celsius conversion formula*/
    Celsius= (Fahrenheit - 32)* (5.0f/9.0f);
    printf("%f Fahrenheit = %f Celsius",Fahrenheit,Celsius );
    return 0;
    
    
}
