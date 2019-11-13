/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 11, 2019, 1:33 PM
 */

    
#include <stdio.h>
int main()
{
    int length,breadth,perimeter,area;
    
    printf("Enter the Length and Breadth:");
    scanf("%d%d",&length,&breadth);

    perimeter = 2*(length+breadth);
    area = length*breadth;
    
   if(area>perimeter)
       
        printf("\narea is greater than perimeter");
    
   else if(area<perimeter)
           printf("area is smaller than perimeter");

   return 0;
}



