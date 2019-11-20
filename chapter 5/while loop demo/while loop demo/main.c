/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 13, 2019, 12:02 PM
 */

#include <stdio.h>
int main()
{
    int p,n,count;
    float r,si;
    
    count=1;
            while(count<=3)
            {
                printf("\nEnter values of p,n,and r");
                scanf("%d%d%f",&p,&n,&r);
                si=p*n*r/100;
                
                printf("simple interest=Rs.%\f",si);
                
                count=count+1;
                
    }
    return 0;
}

