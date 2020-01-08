/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 3, 2020, 12:06 PM
 */

#include <stdio.h>
int sum(int);
int main()
{
    int f,n;
    printf("enter any number:");
    scanf("%d",&f);
    
    n=sum(f);
    printf("\nsum of 5 number=%d",n);
    return 0;
}
 int sum(int f)
{
    if(f==0)
        return 0;
    else
        return(f%10+sum(f/10));
}
