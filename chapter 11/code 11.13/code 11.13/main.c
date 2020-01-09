/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:57 PM
 */

#include <stdio.h>
static int y;
int main()
{
    static int z;
    printf("%d %d\n",y,z);
    return 0;
}