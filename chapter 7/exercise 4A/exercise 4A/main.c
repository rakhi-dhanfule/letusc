/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 28, 2019, 11:27 AM
 */

#include <stdio.h>
int main()
{
    int k;
    float j=2.0;
    switch(k=j+1)
    {
        case 3:
            printf("Trapped\n ");
            break;
            
        default:
            printf("Caught\n");
            
    }
    return 0;
}