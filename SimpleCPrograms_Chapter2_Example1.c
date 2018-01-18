#include <stdio.h>
#include <math.h> /*lol made a comment fam you aint gon see this in my program*/
int main(void)
{
    double x1=1, y1 = 5, x2 = 4, y2 = 7, side_1, side_2, distance;

    side_1 = x2 - x1;
    side_2 = y2 - y1;
    distance = sqrt(side_1*side_1 + side_2*side_2);

    printf("The distance between the two point is " "%5.2f \n",distance);

    return 0;
}
