/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 13, 2019, 11:33 AM
 */

#include <stdio.h>
int main()
{
    char sex,ms;
    int age;
    
    printf("enter age,sex,marital status");
    scanf("%d%c%c",&age,&sex,&ms);
    
    if(ms=='M')
        printf("driver should be insured\n");
    else
    {
        if(sex=='M')
        {
            if(age >30)
                printf("driver should be insured\n");
            else
                printf("driver should not be insured\n");
        }
        else
        {
            if(age>25)

            printf("driver should be insured\n");
            else
printf("driver should not be insured\n");

        }
    }
    return 0;
    }
}
