/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 3, 2020, 11:48 AM
 */

#include <stdio.h>
int main()
{
    char name[]="klinsman";
    char *ptr;
    ptr=name;/*store base address of string */
    while (*ptr !='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}

