/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 15, 2019, 2:48 PM
 */

#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    
    (ch<=122 && ch>=97)?printf("its lower case alphabets\n"):printf("its not a lower case alphabets");
    return 0;
 }