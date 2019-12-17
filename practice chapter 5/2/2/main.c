/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 16, 2019, 12:32 PM
 */

#include <stdio.h>
int main()
{
    int n=0;
    
    printf("enter the ASCll values");
    scanf("%d",&n);
    
    while(n<=255)
    {
      printf("character = %c",n);
       n++;
    }
    return(0);

            
}