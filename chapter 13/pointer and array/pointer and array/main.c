/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 16, 2020, 1:31 PM
 */

#include <stdio.h>
int main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("value of i = %d\n",i);
    printf("value of j = %f\n",j);
    printf("value of k = %c\n",k);
    x=&i; y=&j; z=&k;
    printf("original address in x = %u\n",x);
    printf("original address in y = %u\n",y);
    printf("original address in z = %u\n",z);
    x++; y++; z++;
    printf("new address in x=%u\n",x);
    printf("new address in y=%u\n",y);
    printf("new address in z=%u\n",z);
    return 0;
}