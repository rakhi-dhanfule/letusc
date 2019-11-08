/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 7, 2019, 1:42 PM
 */
#include <stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("enter the basic salary");
    scanf("%f",&bs);
    
    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
        
    }
    else
    {
        hra=500;
        da=bs*98/100;
        
       
    }
    gs=bs+hra+da;
    printf("gross salary= Rs.%f\n",gs);
    return 0;
    
}