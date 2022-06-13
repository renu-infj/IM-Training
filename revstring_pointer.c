#include <stdio.h>  
#include <string.h>  
  
int str_len( char *st);  
void revstr( char *st);  
int main()  
{  
    char st[50];  
    // Enter a string to reverse
    printf (" Enter a string to be reversed: ");  
    scanf( "%s", st);  
     // call the function to reverse the string. 
    revstr(st);   
      
    printf (" The reverse string is: %s", st);  
    return 0;  
}  
  
void revstr (char *st)  
{  
    int len, i;  
    char *start, *end, temp;  
      
    len = str_len (st);  
    start = st;  
    end = st;  
      
    for (i = 0; i < len - 1; i++)  
    end++;  
      // swap using pointers
    for (i = 0; i < len/2; i++)  
    {  
        temp = *end;  
        *end = *start;  
        *start = temp;  
          
        start++;  
        end--;  
    }  
}  
  
int str_len (char *ptr)  
{  
    int i = 0;  
    while ( *(ptr + i) != '\0')  
    i++;  
    return i;  
}
