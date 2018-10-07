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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * This function  prints the statistics of an array including minimum,
 * maximum, mean, and median.
 */
void print_statistics(unsigned char* array1, unsigned int length);



/**
 * @brief Prints the array on the screen
 */
 void print_array(unsigned char* array1, unsigned int length);



/**
* @brief Returns median value of given array
* This function finds the median value of given array
* @return Array median value
*/
unsigned char find_median(unsigned char* array1, unsigned int length);



/**
* @brief Returns mean value of given array
* This function calcuates the mean value of given array
* @return Array mean value
*/
unsigned char find_mean(unsigned char* array1, unsigned int length);



/**
* @brief Returns maximum value of given array
* This function finds the maximum value of given array
* @return Array maximum value
*/
unsigned char find_maximum(unsigned char* array1, unsigned int length);



/**
* @brief Returns minimum value of given array
* This function finds the minimum value of given array
* @return Array minimum value
*/
unsigned char find_minimum(unsigned char* array1, unsigned int length);



/**
* @brief Sorts the array from largest to smallest
*/
void sort_array(unsigned char* array1, unsigned int length);



#endif /* __STATS_H__ */
