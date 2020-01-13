/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 13, 2020, 1:01 PM
 */

#include <stdio.h>
#define AREA(x)(3.14*x*x)
int main()
{
    float r1=6.25,r2=2.5,a;
    a=AREA(r1);
    printf("Area of circle=%f\n",a);
    a=AREA(r2);
    printf("Area of circle=%f\n",a);
    return 0;
}