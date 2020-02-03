/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on January 24, 2020, 11:30 AM
 */

#include <stdio.h>
int main()
{
    int stud[4][2];
    int i,j;
    for(i=0;i<=3;i++)
    {
        printf("enter roll no.and marks");
        scanf("%d%d",&stud[i][0],&stud[i][1]);
        
    }
    for(i=0;i<=3;i++)
        printf("%d%d\n",stud[i][0],stud[i][1]);
    
    return 0;
}