/*
Name: Keenan Turley
Date (YMD): 2019-04-15

Practice Problem:
    Write a program that calculates the number of pictures that can be stored 
    on a thumb drive.

    Ask the user to enter the number of gigabytes of data the thumb drive can 
    store, as well as the length and width of each picture, in pixels. 
    
    Assume that each pixel takes 3 bytes of storage. 
    
    (This isn’t really the case, since most pictures are stored in a compressed 
    format.) 
    
    Output your answer as a whole number.
*/

#include <stdio.h>

/* 10^9 bytes in a gigabyte */
#define BYTES_PER_GIGABYTE 1000000000

/* 3 bytes per pixel is given */
#define BYTES_PER_PIXEL 3

int main(void)
{
    int num_gigabytes, height, width, max_pictures;

    /* Ask for thumb drive capacity */
    printf("Thumb drive capacity in gigabytes: ");
    scanf("%d", &num_gigabytes);

    /* Ask for image height and width */
    printf("Dimensions of images: \n");
    printf("Width: ");
    scanf("%d", &width);
    printf("Height: ");
    scanf("%d", &height);

    /* Calculate max pictures on thumb drive */
    /* NOTE: Partial image is truncated thanks to integer division */
    /* NOTE: num_gigabytes must be cast to long to prevent integer overflow */
    max_pictures = ((long)num_gigabytes * BYTES_PER_GIGABYTE) / 
                   (width * height * BYTES_PER_PIXEL);

    /* Output max pictures on thumb drive */
    printf("Max pictures stored on thumb drive: %d\n", max_pictures);

    return 0;
}