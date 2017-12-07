/* The program searches for a value in the given array and prints the index at which the value is found. */
#include <stdio.h>

void my_recursive_function(int *arr, int val, int idx, int len)
{
    if(idx == len)
    {
         printf("-1");
         return ;
    }
    if(arr[idx] == val)
    {
         printf("%d",idx);
         return;
    }
    my_recursive_function(arr,val,idx+1,len);
}
int main()
{
     int array[10] = {7, 6, 4, 3, 2, 1, 9, 5, 0, 8};
     int value = 2;
     int len = 10;
     my_recursive_function(array, value, 0, len);
     return 0;
}

/* In this case, the program searches for value = 2. Since, the index of 2 is 4(0 based indexing), the program prints 4. */
