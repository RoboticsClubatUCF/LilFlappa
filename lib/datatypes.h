#ifndef E0F0B197_E145_4160_AC80_450265C146BE
#define E0F0B197_E145_4160_AC80_450265C146BE
typedef struct
{
  double x;
  double y;
  double z;
} vector3_cartesian;
typedef struct
{
  double x;
  double y;
  double z;
} vector3_polar;
typedef struct
{
  vector3_cartesian acceleration; // accleration vector
  vector3_cartesian velocity;

  vector3_polar vdegs;
  vector3_polar degs;

} five_axis_t;

#endif /* E0F0B197_E145_4160_AC80_450265C146BE */
