/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 3, 2020, 11:28 AM
 */

#include <stdio.h>
int main()
{
    char name[]="Klinsman";
    int i=0;
    while(i<=7)
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    return 0;
}
