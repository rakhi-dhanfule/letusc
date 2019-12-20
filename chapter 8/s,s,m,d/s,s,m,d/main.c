/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 5, 2019, 2:43 PM
 */

#include <stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter to number:");
    scanf("%d %d",&a,&b);
    printf("\nAddition %d:",sum(a,b));
    printf("\nSubtraction %d:",sub(a,b));
    printf("\nmultiply %d:",mult(a,b));
    printf("\nDivision %d:",div(a,b));
    return(0);
      
}
   int sum(int x,int y)
  {
    int z;
    z=x+y;
   return z;
  }

    int  sub(int x,int y)
  {
    int z;
    z=x-y;
     return z;
  }
       int mult(int x,int y)
  {
     int z;
     z=x*y;
    return z;
  }
     int div(int x,int y)
  {
    int z;
    z=x/y;
   return z;
  }