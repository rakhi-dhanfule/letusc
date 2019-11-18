/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 18, 2019, 11:36 AM
 */

#include <stdio.h>
int main()
{
    int a, b;
    double pnum = 1;
    printf("Enter the value of A :");
    scanf("%d",&a);
    
    printf("Enter the value of B :");
    scanf("%d",&b);
    
    if (b > 0)
    {
        for (int i = b; i>0; i--)
          pnum = pnum * a;
    }
    else if(b < 0)
    {
        for(int i=b; i<0; i++)
           pnum = pnum/a;
    }

    printf("%d Raised to the Power of %d is %f", a, b,pnum);

    return 0;
}
