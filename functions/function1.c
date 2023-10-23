#include <stdio.h>

int sum (int a, int b)
{
    int answer;
    answer = a + b;
    return answer;
}

int main () 
{
    int y;
    int x;
    printf("Enter the value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y : ");
    scanf("%d",&y);
    

    int z = sum(x, y); // calling our new function

    printf ("The sum of %d and %d is %d\n", x, y, z);
}