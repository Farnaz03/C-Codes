/* The Collatz conjecture */

/* The Collatz conjecture is apply to positive integers and 
speculates that it is always possible to get “back to 1” if 
you follow these steps:
•If n is 1, stop.
•Otherwise, if n is even, repeat this process on n/2.
•Otherwise, if n is odd, repeat this process on 3n+ 1.

---FarnazBaksh - December 2017--- */

#include<stdio.h>

int collatz (int n);
 
int main ()
 {
 	int n =50;
 	int abc;
 	
 	abc = collatz(n);
 	
 	printf("Collatz: %d ", abc);
 	
 	return 0;
 }
 
int collatz (int n)
{	
	//base case
    if (n==1)
    	return 0;
    	
	//even numbers
    else if ((n%2)==0)
    	return 1 + collatz(n/2);
    
	//odd numbers
    else
    	 return 1 + collatz(3*n+1);
    	 
 }
