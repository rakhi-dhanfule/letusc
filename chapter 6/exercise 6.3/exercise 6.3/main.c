/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on November 27, 2019, 1:49 PM
 */

#include <stdio.h>
int main()
{
    int i1=0,i2=0,i3=0;
    
    for(i1=1;i1<=3;i1++)
 {
    for(i2=1;i2<=3;i2++)
 {
        
     for(i3=1;i3<=3;i3++)
  {
      if(i1!=i2 && i2!=i3 && i3!=i1)
   {
       printf("%d %d %d\n",i1,i2,i3); 
}
}
}
}
     return 0;
}