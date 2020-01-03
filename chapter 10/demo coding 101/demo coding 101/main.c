/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 26, 2019, 12:03 PM
 */

#include <stdio.h>
int factorial(int);
int main()
{
    int a,fact;
    printf("enter any number:");
    scanf("%d",&a);
    
    fact=factorial(a);
    printf("factorial value=%d\n",fact);
    return 0;
    
}

int factorial(int x)
{
    int f=1,i;
    
    for(i=x;i>=1;i--)
        f=f*i;
    return (f);
    
}