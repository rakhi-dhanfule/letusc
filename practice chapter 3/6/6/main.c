/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 13, 2019, 11:49 AM
 */

#include <stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("enter the three angles of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    
    sum = a+b+c;
    printf("enter the sum is=%d",sum);
    
    if(sum==180)
     printf("\nthe triangle is valid");
    
    
    else
     printf("\nthe triangle is not valid");
    
    return 0;
}