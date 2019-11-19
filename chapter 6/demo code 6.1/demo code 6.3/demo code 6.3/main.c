/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 18, 2019, 1:29 PM
 */

#include <stdio.h>
int main()
{
    int i=1,j=1;
    while(i++<=100)
    {
     
    while(j++<=200)
    {
        if(j==150)
            break;
        else
        printf("%d%d\n",i,j);
    }
        
               
    }

      return 0;
}