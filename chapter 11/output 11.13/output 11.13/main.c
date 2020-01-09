/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:41 PM
 */

#include <stdio.h>
int x=10;
int main()
{
    int x=20;
    {
        int x=30;
        printf("%d\n",x);
    }
    printf("%d\n",x);
}