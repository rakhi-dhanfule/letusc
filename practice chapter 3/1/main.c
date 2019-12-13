/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 1:43 PM
 */

#include <stdio.h>
int main()
{
    int n;
    printf("enter the integer:");
    scanf("%d",&n);
    
    if(n%2==0)
        printf("print even number is=%d", n);
    
    else
        printf("print odd number is=%d",n);
    return 0;
}