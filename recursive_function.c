#include<stdio.h>
/* Program prints the number of digits in the number 1-9 */
int counter=0;
void recursive_function(int n)
{
	if (n==0)
	return;
	counter++;
	recursive_function(n/10);
}

int main()
{
	recursive_function(123456789);
	printf("Number of digits: %d", counter);
	return 0;
}


/*
void my_recursive_function(int n)
{
	if (n==0)
	return;
	my_recursive_function(n-1);
	printf("%d \n", n);
}

int main ()
{
	my_recursive_function(10);
	return 0;
} */

