/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 12:41 PM
 */

#include <stdio.h>
int main()
{
    int digits,sum=0,n,remainder=0;
    
    printf("enter the five digits:");
    scanf("%d",&n);
    
   while(n!=0)
   {
    remainder = n % 10;
    n = n/10;
    sum = sum + remainder;
    printf("\n enter the value of sum is =%d",sum);
    printf("\n enter the value of n is =%d",n);   
    printf("\n enter the value of remainder is =%d",remainder);
   }
    
    printf("the sum of number is = %d", sum);
    return 0;
    
}