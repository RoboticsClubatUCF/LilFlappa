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

#ifndef C32AA91C_8631_446A_B08C_9575A8512ACE
#define C32AA91C_8631_446A_B08C_9575A8512ACE
#include "../datatypes.h"
double integrate(double integrand, double deltaTime);
double dbl_integrate(double integrand, double deltaTime);

vector3_cartesian vec3_cartesian_integrate(vector3_cartesian vec3, double deltaTime);
vector3_polar vec3_cartesian_integrate(vector3_polar vec3, double deltaTime);

#endif /* C32AA91C_8631_446A_B08C_9575A8512ACE */
