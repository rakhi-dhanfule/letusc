/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ANURADHA
 *
 * Created on December 3, 2019, 2:33 PM
 */

#include <stdio.h>
int main()
{
   int choice, num,i,c,n,p,fact; 
   


while(1)
{
printf("1.Factorial\n");
printf("2.Prime\n");
printf("3.Odd/Even\n");
printf("4.Exit\n");
printf("\nYour choice?");

scanf("%d",&choice);
switch(choice)
        
{
    case 1:
        printf("Enter a number to calculate its factorial\n");
        scanf("%d",&n);
 
  for (c=1; c<=n; c++)
    fact = fact*c;
 
  printf("Factorial of %d = %d\n", n, fact);
  break;
  
  
  
  
  
    case 2:
        printf("Please enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Entered number is %d "\
             "and it is a prime number.",num);
   }
   else
   {
      printf("Entered number is %d "\
             "and it is not a prime number.",num);
   }
    break;
    
    
    
    
    case 3:
        printf("Enter an integer:");
         scanf("%d",&num);
   
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    break;
    
    
    
    
    case 4:
        exit();
}

}
return 0;
}