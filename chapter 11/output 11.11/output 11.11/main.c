/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 9, 2020, 12:35 PM
 */

#include <stdio.h>
int main()
{
    static int count=5;
    printf("count=%d\n",count--);
    if(count!=0)
        main();
    return 0;
}