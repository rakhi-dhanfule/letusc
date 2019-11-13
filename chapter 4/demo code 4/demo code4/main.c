/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 13, 2019, 11:10 AM
 */

#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
   printf("enter marks in five subjects");
   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
   per=(m1+m2+m3+m4+m5)*100/500;
   
   if(per>=60)
       printf("first division\n");
   else
   {
       if(per>=50)
           printf("second division\n");
       else
           printf("fail\n");
   }

  return 0;
}
   