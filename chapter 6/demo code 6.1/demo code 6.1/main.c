/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 18, 2019, 11:57 AM
 */

#include <stdio.h>
int main()
{
    int r,c,sum;
    for (r=1; r<=3;r++)
    {
        for(c = 1;c<=2;c++)
        {
            sum=r+c;
            printf("r=%d c=%d sum=%d\n",r,c,sum);
            
        }          
    }
            return 0;
}