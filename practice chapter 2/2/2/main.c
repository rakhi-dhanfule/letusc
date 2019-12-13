/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 12:27 PM
 */

#include <stdio.h>
int main()
{
    int a,b,c,s;
     float area;
    printf("enter the three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("area of triangle is = %f", area);
    return 0;
    
}