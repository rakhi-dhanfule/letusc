/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 2:04 PM
 */

#include <stdio.h>
int main()
{
    int  n,remainder=0,temp=100000,reverse=0;
    
    printf("enter the five number:");
    scanf("%d",&n);
    
    while(n!=0)
    {   
       remainder = n % 10;
       n = n / 10;
       reverse = reverse + remainder * temp;
        temp = temp/ 10;
        
        printf("\n remainder is=%d",remainder);
        printf("\n n is=%d",n);
        printf("\n reverse is=%d",reverse);
        printf("\n temp is=%d",temp);
        
    }
     printf("reverse number is=%d", reverse);
     return 0;
}