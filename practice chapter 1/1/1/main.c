/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 11:19 AM
 */

#include <stdio.h>
int main()
{
    float km,m,feet,inches,cm;
    
    printf("enter the distance between two cities(km):");
    scanf("%f",&km);
    
    m = km * 1000;
    feet = km * 3280.84 ;
    inches = km * 39370.1;
    cm = km * 100000 ;
    
    
    printf("\n distance in meter=%f",m);
    printf("\n distance in feet=%f",feet);
    printf("\n distance in inches=%f",inches);
    printf("\n distance in centimeter=%f",cm);
    
    return 0;
     
}