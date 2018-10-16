#ifndef VMATH_EULER_H
#define VMATH_EULER_H

#include "./vmath.h"

#define EULER_DEFAULT_ROTATION_ORDER EULER_XYZ

void euler_rotation_copy(euler_rotation *dest, const euler_rotation *src);
void euler_rotation_set_from_rotation_matrix(euler_rotation *dest, const mat4 m,
    euler_rotation_order order);
void euler_rotation_set_from_quaternion();

#endif
