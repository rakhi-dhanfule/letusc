/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 11:36 AM
 */

#include <stdio.h>
void swapv(int x,int y);
int main()
{
    int a=10,b=20;
    swapv(a,b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}
void swapv(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d\n",x,y);
}