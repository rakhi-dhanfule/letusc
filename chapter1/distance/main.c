/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on October 23, 2019, 2:05 PM
 */

#include<stdio.h>
int main()
{
float km,m,feet,inch,cm;

printf("Enter the distance between two cities(in km) - ");
scanf("%f",&km);

m = km*1000; //since 1km = 1000m
feet= km*3280.84; //since 1km=3280.84feet
inch=km*39370.1; //since 1 km=39370.1inches
cm=km*100000; //since 1km = 100000cm

printf("\nDistance in kilometers = %f ",km);

printf("\nDistance in meters = %f ",m);

printf("\nDistance in feet = %f ",feet);

printf("\nDistance in inches = %f ",inch);

printf("\nDistance in centimeters = %f ",cm);

return 0;
}

