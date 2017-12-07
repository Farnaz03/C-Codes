/* The function counts the number of vowels in a string. */
#include <stdio.h>

int counter = 0;
void recursive_function(char *s, int i)
{
     if(s[i] == '\0')
        return;
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
     counter++;
     recursive_function(s,i+1);
}
int main()
{
     recursive_function("thisisrecursion",0);
     printf("Number of vowels: %d", counter);
     return 0;
}
