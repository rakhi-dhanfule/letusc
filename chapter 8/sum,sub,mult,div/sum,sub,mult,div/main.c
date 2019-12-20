/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 5, 2019, 2:09 PM
 */

#include <stdio.h>
   void main()
{
    int a,b,c,d,e,f;
    printf("enter to number:");
    scanf("%d %d",&a,&b);
    
       sum(a,b);
       sub(a,b);
       mult(a,b);
       div(a,b);
       return(0);
      
}
    sum(int x,int y)
{
    int z;
    z=x+y;
   
    return 0;
}

      sub(int x,int y)
{
    int z;
    z=x-y;
    printf("Subtraction:%d\n",z);
    return 0;
}
        mult(int x,int y)
{
     int z;
     z=x*y;
     printf("multiply:%d\n",z);
     return 0;
}
      div(int x,int y)
{
    int z;
    z=x/y;
    printf("Divison:%d\n",z);
    return 0;
}