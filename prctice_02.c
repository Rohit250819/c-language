#include <stdio.h>

int main()
{
    int radius;
    int height;
    float pi = 3.14;
    printf("radius of circle is\n");
    scanf("%d", &radius);
    printf("Height of the circle is\n");
    scanf("%d", &height);

    printf("Volume of the cylinder is %f m3", pi * radius * radius * height);

    return 0;
}