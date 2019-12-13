/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 11:36 AM
 */

#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,total,avg,percentage;
    
    printf("enter the marks obtained bye student:");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    
    
    total=(s1+s2+s3+s4+s5);
    avg= (s1+s2+s3+s4+s5)/5;
    percentage=(s1+s2+s3+s4+s5)/500*100;
    
    printf("\ntotal is=%f",total);
    printf("\naverage is=%f",avg);
    printf("\npercentage is=%f",percentage);
    
    return 0;
}