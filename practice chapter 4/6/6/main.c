/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 15, 2019, 3:09 PM
 */

#include <stdio.h>
int main()

{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    
    (ch<=4 && ch>=0)||(ch<=64 && ch>=58)||(ch<=96 && ch>=91)||(ch<=127 && ch>=123)?printf("its a special symbol\n"):printf("its not a special symbol");
    return 0;
}