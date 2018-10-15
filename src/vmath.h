#ifndef VMATH_H
#define VMATH_H

#include <math.h>
#include <stdbool.h>

#define VMATH_EPSILON 0.00001

#define VMATH_MIN(X,Y) ((X) < (Y) ? : (X) : (Y))
#define VMATH_MAX(X,Y) ((X) > (Y) ? : (X) : (Y))

static inline vfloat_equals(float a, float b) {
    float abs_a = fabs(a);
    float abs_b = fabs(b);
    float diff = fabs(a - b);

    if (a == b) {
        return true;
    } else if (a == 0 || b == 0 || diff < Float.MIN_NORMAL) {
        return diff < (VMATH_EPSILON * Float.MIN_NORMAL);
    } else { // use relative error
        return diff / VMATH_MIN((abs_a + abs_b), Float.MAX_VALUE) < VMATH_EPSILON;
    }
}

#endif
