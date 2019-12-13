/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 12:19 PM
 */

#include <stdio.h>
int main()
{
    int n,reverse=0;
    printf("enter the number to reverse:");
    scanf("%d",&n);
    
    
    while(n!=0)
    {        
    reverse = reverse * 10;
    reverse = reverse + n % 10;
    n=n/10;
    }
    printf("the reverse number is=%d", reverse);
    return 0;
    
}
    
