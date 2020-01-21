/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 20, 2020, 2:22 PM
 */

#include <stdio.h>
int main()
{
    int arr[]={10,20,30,45,67,56,74};
    int i=4,*j,*k,*x,*y;
    j=&i;
    j=j+9;
    k=&i;
    k=k-3;
    x=&arr[1];
    y=&arr[5];
    printf("%d\n",y-x);
    j=&arr[4];
    k=(arr+4);
    if(j==k)
        printf("the two pointers point to the same location\n");
    else
        printf("the two pointers point to different location\n");
    return 0;
}

