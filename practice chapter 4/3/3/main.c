/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 13, 2019, 1:37 PM
 */

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a+b)>c)
    {
        if((b+c)>a)
            
        {
            if((a+c)>b)
                printf("its a valid");
            
            else
                printf("its not valid");
        }
        else
            printf("its not valid");
    }
    else
        printf("its not valid");
    return 0;
       
    
    
}