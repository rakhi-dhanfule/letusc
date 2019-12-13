/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 13, 2019, 2:18 PM
 */

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    
    if ((a==b)&&(b==c))
    
        printf("its equilateral triangle");
    
    
    else if((a==b)||(b==c)||(c==a))
    
        printf("its isosceles triangle");
    
    else
    
        printf("its scalene triangle");
    
    return 0;
    
}