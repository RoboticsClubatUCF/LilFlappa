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

vector3_cartesian vec3_cartesian_integrate(vector3_cartesian vec3, double deltaTime)
{
  vec3.x = integrate(vec3.x, deltaTime);
  vec3.y = integrate(vec3.y, deltaTime);
  vec3.z = integrate(vec3.z, deltaTime);

  return vec3;
}
vector3_polar vec3_cartesian_integrate(vector3_polar vec3, double deltaTime)
{
  vec3.x = integrate(vec3.x, deltaTime);
  vec3.y = integrate(vec3.y, deltaTime);
  vec3.z = integrate(vec3.z, deltaTime);

  return vec3;
}