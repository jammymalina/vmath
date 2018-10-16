#ifndef VMATH_H
#define VMATH_H

#include <math.h>
#include <stdbool.h>
#include "./types.h"

#define VMATH_EPSILON 0.00001
#define VMATH_PI 3.14159265

#define VMATH_MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#define VMATH_MAX(X, Y) ((X) > (Y) ? (X) : (Y))

static inline bool vfloat_equals(float a, float b, float max_rel_diff) {
    const float abs_a = fabs(a);
    const float abs_b = fabs(b);
    const float diff = fabs(a - b);

    const float scaled_epsilon = max_rel_diff * VMATH_MAX(abs_a, abs_b);

    return diff <= scaled_epsilon;
}

static inline float vclamp(float x, float min, float max) {
    return VMATH_MAX(min, VMATH_MIN(max, x));
}

#endif
