/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 17, 2019, 12:19 PM
 */

#include <stdio.h>
int main()
{
    int hour;
 for(hour=0;hour<=23;hour++)
 {
     if(hour==0)
     {
         printf("12midnight\n");
         continue;
     }
     if(hour<12)
     {
         printf("%dAM\n",hour);
     }
     if(hour==12)
     {
         printf("12NOON\n");
     }
     if(hour>12)
     {
         printf("%dPM\n",hour%12);
     }
 }
    return 0;
    
}