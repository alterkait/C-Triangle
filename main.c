//Program to find the Area of a Right angle Triangle//

#include <stdio.h>
#include <math.h>

int main (void)


{

    float w, height, c, area, perimeter;

    int width = 80;
    char str[] = "AlTerkait's Area & Perimeter Triangle Program!";
    int length = sizeof(str) - 1;
    int pad = (length >= width) ? 0 : (width - length)
     / 2;
    printf("%*.*s%s\n", pad, pad, " ", str);
    printf("\n");


    printf("Hello and welcome to this program! This Program will help you with\n");
    printf("finding the area and perimeter of a Right-angled Triangle, given it's \n");
    printf("height and width.\n");

    printf("\nPlease Enter the height of the triangle:\n");
    scanf("%f", &height);

    printf ("Please Enter the width of the triangle:");
    scanf("%f", &w);

    area        = 0.5 * width * height;
    c           = sqrt((w*w) + (height * height));
    perimeter   = w + height + c;


    printf("the Area of the Triangle is: %.2f\n", area);
    printf("\nThe Perimeter of the Triangle is: %.2f\n", perimeter);

    printf("I Hope you found this helpful! :) ");


    return 0;
}

