/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 18, 2019, 2:01 PM
 */
#include <stdio.h>

int main()
{
    int i=1,j=1;
    for(;;)
    {
        if(i>5)
        break;
    else
    j+=i;
    printf("%d\n",j);
    i+=j;
    return 0;
    
    }  
    }