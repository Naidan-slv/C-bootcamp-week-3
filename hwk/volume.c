#include <stdio.h>

float circle_Volume (float radius)
{
    float volume;
    volume = ((radius * radius * radius) * 3.14 * 4/3);
    return volume;
}

int main(){

float circle_area;

printf("What is your radius ? : ");
scanf("%f",&circle_area);
circle_area = circle_Volume(circle_area);

printf("Your new volume is %.02f \n", circle_area);

}