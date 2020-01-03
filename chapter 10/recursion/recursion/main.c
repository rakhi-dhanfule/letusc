/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 26, 2019, 12:11 PM
 */

#include <stdio.h>
int rec(int);
int main()
{
    int a,fact;
    
    printf("enter  any number:");
    scanf("%d",&a);
    
    fact=rec(a);
    printf("factorial value=%d\n",fact);
    return 0;
}

int rec(int x)
{
    int f;
    if(x==1)
        return(1);
    else
        f=x*rec(x-1);
    return (f);
}