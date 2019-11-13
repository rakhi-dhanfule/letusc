

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 7, 2019, 1:21 PM
 */

#include <stdio.h>
int main()
{
    int qty,dis;
    float rate,tot;
    printf("enter quantity and rate");
    scanf("%d%f",&qty,&rate);
    
    if(qty>1000)
        dis=10;
    
    else
        dis=0;
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("total expenses= Rs.%f\n",tot);
    return 0;
}

