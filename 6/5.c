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

Personal Note:
    The problem says that a sphere with radius 2 would take up 8 cubic units
    inside of the jar because it fits into a cube of that volume.

    However, the volume of a sphere with radius 2 is 33.51 units.

    The appropriate volume of a cube the sphere can fit into would be found
    using the formula (2r)^3, which would make the volume of that cube 64.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float cylinder_radius, cylinder_height, cylinder_volume;
    float bean_radius, bean_volume;
    int guess;

    /* Ask for cylinder details */
    printf("Cylinder radius: ");
    scanf("%f", &cylinder_radius);
    printf("Cylinder height: ");
    scanf("%f", &cylinder_height);

    /* Ask for jellybean radius */
    printf("Jellybean radius: ");
    scanf("%f", &bean_radius);

    /* Calculate cylinder volume: (V = pi * r^2 * h) */
    cylinder_volume = M_PI * pow(cylinder_radius, 2) * cylinder_height;

    /* Calculate jellybean volume as a cube: (2r)^3 */
    bean_volume = pow((2 * bean_radius), 3);

    /* Calculate guess to closest integer */
    guess = round(cylinder_volume / bean_volume);

    /* Output guess */
    printf("Amount of jelly beans: %d\n", guess);

    return 0;
}