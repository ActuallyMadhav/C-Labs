#include <stdio.h>
#include <string.h>

char *sweepSpace1(char *str);

char *sweepSpace2(char *str);

int main()
{
 char str[80],str2[80], *p;

 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 strcpy(str2,str);
 printf("sweepSpace1(): %s\n", sweepSpace1(str));
 printf("sweepSpace2(): %s\n", sweepSpace2(str2));
 return 0;
}

/*Need two pointers/indices: i for reading and j for writing
i scans through every character in the string
j only advances when we find a non-space character
When we find a non-space character, we copy it to position j and increment j
This effectively overwrites the original string, removing spaces
Finally add null terminator at position j to properly end the string
Return the modified string as required by function prototype
*/

char *sweepSpace1(char *str)
{
 /* Write your program code here */
    int i = 0, j = 0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    return str;
}
char *sweepSpace2(char *str)
{
 /* Write your program code here */
    char *src = str, *dst = str;
    while(*src){
        if(*src != ' '){
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
    return str;
} 