/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 12, 2019, 2:32 PM
 */

#include <stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("enter the ages of ram,shyam and ajay:");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    
    if(ram < shyam && ram < ajay)
        
    {
        printf("\n youngest of three is= %d", ram);
    }
    
    else if (shyam < ajay && shyam < ram )
    {
        printf("\n youngest of three is=%d", shyam);
    }
    
    else if(ajay < shyam && ajay < ram)
    {
        printf("\n youngest of three is=%d", ajay);
    }
    
    else
    {
        printf("\n same age");
    }
    return 0;
    
}