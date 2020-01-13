/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 13, 2020, 1:07 PM
 */

#include <stdio.h>
#define SQUARE(n)n*n
int main()
{
    int j;
    j=64/SQUARE(4);
    printf("j=%d\n",j);
    return 0;
}