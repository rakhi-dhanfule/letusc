/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 27, 2019, 2:03 PM
 */

#include <stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1; i<=4; i++)
    {
        for(j=4; j>i; j--)
        {
        printf(" ");
    }
     for(j=1; j<=i; j++)
     {
         printf("%d",k++);
     }
    printf("\n");
               
    }
return 0;
}