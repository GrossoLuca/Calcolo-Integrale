/**
 * @file mathf.h
 * @author Luca Grosso (grossolu@icloud.com)
 * @brief mathf library with function intestation
 * @version 0.1
 * @date 2024-02-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef MATHF_H
#define MATHF_H

/**
 * @brief Polynomial calculation
 * 
 * @param coeff coeff array starting from x^0
 * @param size size of polynomial
 * @param in X value in wich we calculate the function
 * @return float returns f(in)
 */
float Polynomial(float* coeff, int size, float in);

/**
 * @brief Calculate the integral of a function using rectangular mode
 * 
 * @param values 
 * @param size 
 * @param stepsize 
 * @param integ1 
 * @param integ2 
 * @return void returns via pointer
 */
void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);

/**
 * @brief calculate the integral of a function using trapezoidal mode
 * 
 * @param values 
 * @param size 
 * @param stepsize 
 * @return float 
 */
float Trapezoidal(float* values, int size, float stepsize);

#endif