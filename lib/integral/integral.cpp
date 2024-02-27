#include "integral.h"

double integrate(double integrand, double deltaTime)
{
  return integrand * deltaTime;
}

double dbl_integrate(double integrand, double deltaTime)
{
  return integrand * deltaTime * deltaTime;
}