#ifndef VMATH_TYPES_H
#define VMATH_TYPES_H

typedef float vec2[2];
typedef float vec3[3];
typedef float vec4[4];
typedef float quat[4];

typedef float mat3[9];
typedef float mat4[16];

typedef enum euler_rotation_order {
    EULER_XYZ,
    EULER_YZX,
    EULER_ZXY,
    EULER_XZY,
    EULER_YXZ,
    EULER_ZYX
} euler_rotation_order;

typedef struct euler_rotation {
    float x, y, z;
    euler_rotation_order order;
} euler_rotation;

#endif
