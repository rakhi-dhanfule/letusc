/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 11:16 PM
 */
 
#include <stdio.h>

int main()
{
    char ch;
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    
       (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");

    return 0;
}