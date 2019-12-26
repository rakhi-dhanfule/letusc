/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 6:12 PM
 */

#include <stdio.h>
void swapv(int, int, int);

int main()
{

    int a = 5, b = 8, c = 10;

    swapv(a, b, c);
    
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}

void swapv(int x, int y, int z)
{
    int t;
    t = x;
    x = y;
    z = t;
    printf("x=%d y=%d z=%d\n", x, y, z);
}