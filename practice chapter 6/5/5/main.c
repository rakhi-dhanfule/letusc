/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 17, 2019, 12:32 PM
 */

#include <stdio.h>
int main()
{
    int i,j,k=0;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
            
        {
            k++;
            printf("%d",k);
           
        }
        printf("\n");
    }
    return 0;
}
