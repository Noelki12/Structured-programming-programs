#include<stdio.h>
#define PI 3.142
float areaofcircle (int radius)
     {
    float area;
    area =PI*(radius*radius);
    return area;
    }
int main(){
    int x;
    printf ("enter radius:");
    scanf ("%d",& x);
    float area =areaofcircle(x);
    printf("%f\n",area);
    return 0;
}