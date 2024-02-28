/**
 * @file integral.cpp
 * @author Peter Cross (peter.cross222@gmail.com)
 * @brief defines basic integration functions
 * @version 0.1
 * @date 2024-02-27
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "integral.h"

double integrate(double integrand, double deltaTime)
{
  return integrand * deltaTime;
}

double dbl_integrate(double integrand, double deltaTime)
{
  return integrand * deltaTime * deltaTime;
}