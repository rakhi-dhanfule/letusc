/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 13, 2019, 2:14 PM
 */

#include <stdio.h>
int main()
{
    float x=1.1;
    
    while(x==1.1)
    {
        printf("%f\n",x);
        x=x-0.1;
    }
    return 0;
}
