#include <stdio.h>

float circle_Area(float radius)
{
    float area;
    area = ((radius * radius) * 3.14);
    return area;
}

int main(){

float circle_area;

printf("What is your radius ? : ");
scanf("%f",&circle_area);
circle_area = circle_Area(circle_area);

printf("Your new area is %.02f \n", circle_area);

}