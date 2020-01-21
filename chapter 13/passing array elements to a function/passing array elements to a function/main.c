/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 16, 2020, 1:26 PM
 */

#include <stdio.h>
void display1 (int);
void display2 (int*);
int main()
{
    int i;
    int marks[]={55,65,75,56,78,78,90};
    for(i=0;i<=6;i++)
    display1 (marks[i]);
    
    for(i=0;i<=6;i++)
    display2 (&marks[i]);
    return 0;
}
void display1 (int m)
{
    printf("%d",m);
}
void display2 (int *n)
{
    printf("%d",*n);
}

