/* 
Name: Keenan Turley
Date (YMD): 2019-01-14

Practice Problem 6.5:
    Write a program to guesstimate the total number of jelly beans in a right 
    circular cylinder. 
    
    In particular, the user must enter both the radius and the height of the 
    cylinder, as well as the radius of the jellybean (we'll assume it's a 
    sphere). 
    
    For simplicity's sake, assume that the amount of volume a single jellybean 
    takes up is simply the volume of the cube it would fit into. 

    (Thus, if the radius of a jellybean is 2 units, then the total volume it 
    takes up in the jar is 8 cubic units.)

    You should output a guess as to how many jellybeans are in the jar. 
    
    Your guess need not be an integer. 

    (If you want to enhance the program you may output the nearest integer to 
    the actual value.) 
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float cylinder_radius, cylinder_height, cylinder_volume;
    float bean_radius, bean_volume;

    /* Ask for cylinder details */
    printf("Cylinder radius: ");
    scanf("%f", &cylinder_radius);
    printf("Cylinder height: ");
    scanf("%f", &cylinder_height);

    /* Ask for jellybean radius */
    printf("Jellybean radius: ");
    scanf("%f", &bean_radius);

    /* Calculate cylinder volume (V = pi * r^2 * h) */
    cylinder_volume = M_PI * pow(cylinder_radius, 2) * cylinder_height;

    /* Calculate jellybean volume as a cube (2r)^3 */


    return 0;
}