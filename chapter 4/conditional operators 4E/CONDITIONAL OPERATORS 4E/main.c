/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 11:33 PM
 */


#include<stdio.h>
int main()
{
    int ch;
    printf("enter the character:");
    scanf("%c",&ch);
    
    {
        ((((ch>=0)&&(ch<=47))||((ch>=58)&&(ch<=64))||((ch>=91)&&(ch<=96))||((ch>=123)&&(ch<=127)))?
    printf("it is Special Symbol\n"):printf("it is not a special symbol")
                return 0;
    }