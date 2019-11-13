/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 12, 2019, 11:00 PM
 */

#include<stdio.h>
    int main()
    {
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    
    if((ch>=65)&&(ch<=90))        
printf("Capital Letter\nr"); 
    
    else if((ch>=97)&&(ch<=122))
        printf("Small Letter\n");
       
    else if((ch>=48)&&(ch<=57))
        printf("Digits\n");
       
    else if(((ch>=0)&&(ch<=47))||((ch>=58)&&(ch<=64))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=127)))
    printf("Enter Special Symbol\n");
    return 0;
    }