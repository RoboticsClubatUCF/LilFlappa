#ifndef E0F0B197_E145_4160_AC80_450265C146BE
#define E0F0B197_E145_4160_AC80_450265C146BE
typedef struct
{
  double ddx; // acceleration in the x direction
  double ddy; // acceleration in the y direction
  double ddz; // acceleration in the z direction

  double dx; // velocity in the x direction
  double dy; // velocity in the y direction
  double dz; // velocity in the z direction

  double dpitch; // change in rotation of the pitch
  double droll;  // change in rotation of the roll
  double dyaw;   // change in rotation of the yaw

  double pitch; // pitch
  double roll;  // roll
  double yaw;   // yaw

} five_axis_t;

#endif /* E0F0B197_E145_4160_AC80_450265C146BE */
