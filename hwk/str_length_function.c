// a function str_len that takes a string as a parameter and returns its length.
#include <stdio.h>

int str_len(char *string)
{
    int length = 0;
    while (string[length] =! '\0')length ++;
    return length;
}

int main (){
    
    char *sentence = "";
    int i;
    printf("Enter the length of your string : ");
    scanf("%s",sentence);
    i = str_len(sentence);

    printf("The length is: %d\n", i);

return 0;
}