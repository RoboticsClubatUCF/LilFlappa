/**
 * @file unitvectors.h
 * @author Gabi Hernandez (not.gabi.hernandez@gmail.com)
 * @brief obtains unit vectors from given vector
 * @version 0.1
 * @date 2024-03-04
 * fgfgh
 * @copyright Copyright (c) 2024
 *
 */
#include "datatypes.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

vector3_cartesian v={1,1,1}; // arbritrary vector and something else 




double vecMagnitude(vector3_cartesian v) {
    double magnitude= sqrt((pow(v.x,2)+pow(v.y,2)+pow(v.z,2)));
    return magnitude;
    
}

vecMagnitude(vector3_cartesian v); 
printf("%d", magnitude);