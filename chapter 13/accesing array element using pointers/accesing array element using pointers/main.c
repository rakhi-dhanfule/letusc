/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 20, 2020, 2:38 PM
 */

#include <stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i,*j;
    j=&num[0];
    for(i=0;i<=5;i++)
    {
        printf("address=%u element=%d\n",j,*j);
        j++;
        
    }
    return 0;
}
    
