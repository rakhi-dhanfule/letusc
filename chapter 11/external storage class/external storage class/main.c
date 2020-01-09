/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:04 PM
 */

#include <stdio.h>
int i;
void increment();
void increment();
int main()
{
    printf("\ni=%d",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void increment()
{
    i=i+1;
    printf("on increment i=%d\n",i);
}
void decrement()
{
    i=i-1;
    printf("on decrement i=%d\n",i);
}