/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 11:41 AM
 */

#include <stdio.h>
void swapr(int *,int *);
int main()
{
    int a=10,b=20;
    swapr(&a,&b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}

void swapr(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}