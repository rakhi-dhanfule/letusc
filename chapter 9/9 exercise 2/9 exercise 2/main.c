/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 23, 2019, 5:32 PM
 */

#include <stdio.h>
void students(int,int,int,int*,int*,float*);
int main()
{
    int m1,m2,m3,sum,avg;
    float per;
    
    printf("enter the marks obtained by a students in 3 subjects:");
    scanf("%d %d %d",&m1,&m2,&m3);
    
    students(m1,m2,m3,&sum, &avg, &per);
    
    printf("\nSum %d\nAverage %d\nPercentage %f\n", sum, avg, per);
    return 0;
}
void students(int m1,int m2,int m3,int *sum,int *avg,float *per)
{
    int i;
    *sum = (m1+m2+m3);
    *avg = (*sum/3);
    *per =((*sum * 100)/300);
}