/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 13, 2019, 1:04 PM
 */

#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    
    if(ch<=95 && ch>=65)
    
        printf("its capital letter");
    
    
    else if(ch<=122 && ch>=97)
    
        printf("\n its small letter");
    
    
    else if(ch<=57 && ch>=48)
        printf("\n its digits");
    
    
    else if ((ch<=47 && ch>=0) || (ch<=64 && ch>=58) || (ch<=96 && ch>=91) || (ch<=127 && ch>=123))
            printf("\n its special symbol");
    
    return 0;
    
}   
        
