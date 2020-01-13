/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 13, 2020, 2:07 PM
 */

#include <stdio.h>
#pragma warn-rvl   /* return value */
#pragma warn-par   /* parameter not used */
#pragma warn-rch   /* unreachable code */
int f1()
{
    int a=5;
}
void f2(int x)
{
    printf("Inside f2\n");
}
int f3()
{
    int x=6;
    return x;
    x++;
}
int main()
{
    f1();
    f2(7);
    f3();
    return 0;
}