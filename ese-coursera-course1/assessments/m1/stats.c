/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Statistics:\n");
  print_statistics(test, SIZE);

  printf("Array:\n");
  print_array(test, SIZE);

  printf("Sorted Array:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array1, unsigned int length){

  unsigned char minimum = 0;
  unsigned char maximum = 0;
  unsigned char mean = 0;
  unsigned char median = 0;

  minimum = find_minimum(array1, length);
  maximum = find_maximum(array1, length);
  mean = find_mean(array1, length);
  median = find_median(array1, length);

  printf("\n"); // Empty line before the statistics
  printf("Minimum Value= %d\n", minimum);
  printf("Maximum Value= %d\n", maximum);
  printf("Mean Value= %d\n", mean);
  printf("Median Value=  %d\n", median);
}

void print_array(unsigned char* array1, unsigned int length){
  printf("\n"); // Empty line before the array

  for(unsigned int i = 0; i < length; i++){
    printf("%d\t", array1[i]);

  }
}

unsigned char find_median(unsigned char* array1, unsigned int length){
  unsigned char median = 0;
  unsigned char array2[length];

  for(unsigned int i = 0; i<length; i++){
    array2[i] = array1[i];
  }

  sort_array(array2, length);
  if(length%2 == 0)
     {
        median = array2[length/2];
     }
  else
    median = array2[(length+1)/2];

  return median;
}

unsigned char find_mean(unsigned char* array1, unsigned int length){
  unsigned char mean = 0;
  unsigned long int sum = 0;

  for (unsigned int i = 0; i < length; i ++) {
    sum += array1[i];
  }

  mean = sum/length;

  return mean;
}

unsigned char find_maximum(unsigned char* array1, unsigned int length){
  unsigned char maximum = array1[0];

  for (unsigned int i = 0; i < length; i ++) {
    if(array1[i] > maximum) maximum = array1[i];
  }

  return maximum;
}

unsigned char find_minimum(unsigned char* array1, unsigned int length){
  unsigned char minimum = array1[0];

  for (unsigned int i = 0; i < length; i ++) {
    if(array1[i] < minimum) minimum = array1[i];
  }

  return minimum;
}

void sort_array(unsigned char* array1, unsigned int length){
  unsigned char temp;

  for(unsigned int i = 0; i < length; i++)
  {
  	  for(unsigned int j = 0; j < length-1; j++)
  	  {
  			   if(array1[j] < array1[i])
  			   {
  				   temp = array1[i];
  				   array1[i] = array1[j];
  				   array1[j] = temp;
  				}
  	   }
  }
}

/* Add other Implementation File Code Here */
