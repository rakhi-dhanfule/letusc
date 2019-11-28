/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 28, 2019, 11:30 AM
 */

#include <stdio.h>
int main()
{
    int ch='a'+'b';
    switch(ch)
    {
        case 'a':
            
        case'b':
            printf("You entered b\n");
            
        case 'A':
            printf("a as in ashar\n");
            
        case 'b'+'a':
            printf("You entered a and b\n");
    }
    return 0;
}