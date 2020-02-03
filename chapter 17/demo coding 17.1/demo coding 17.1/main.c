/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on February 3, 2020, 12:51 PM
 */

#include <stdio.h>
int main()
{
    int i;
    char name[3];
    float price[3];
    int pages[3];
    printf("enter names,prices and no. of pages of 3 books\n");
    for(i=0; i<=2; i++)
        scanf("%c %f %d",&name[i],&price[i],&pages[i]);
    printf("\nAnd this is what you entered\n");
    
    for(i=0; i<=2; i++)
        printf("%c %f %d\n",name[i],price[i],pages[i]);
    return 0;
}