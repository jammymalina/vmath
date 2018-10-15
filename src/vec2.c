#include "./vec2.h"

void vec2_set_scalar(vec2 dest, float s) {
    dest[0] = s;
    dest[1] = s;
}

void vec2_copy(vec2 dest, const vec2 src) {
    dest[0] = src[0];
    dest[1] = src[1];
}

void vec2_add(vec2 dest, const vec2 v) {
    dest[0] += v[0];
    dest[1] += v[1];
}

void vec2_add_scalar(vec2 dest, float s) {
    dest[0] += s;
    dest[1] += s;
}

void vec2_add_vectors(vec2 dest, const vec2 v, const vec2 w) {
    dest[0] = v[0] + w[0];
    dest[1] = v[1] + w[1];
}

void vec2_add_scaled_vector(vec2 dest, const vec2 v, float s) {
    dest[0] += v[0] * s;
    dest[1] += v[1] * s;
}

void vec2_sub(vec2 dest, const vec2 v) {
    dest[0] -= v[0];
    dest[1] -= v[1];
}

void vec2_sub_scalar(vec2 dest, float s) {
    dest[0] -= s;
    dest[1] -= s;
}

void vec2_sub_vectors(vec2 dest, const vec2 v, const vec2 w) {
    dest[0] = v[0] - w[0];
    dest[1] = v[1] - w[1];
}

void vec2_multiply(vec2 dest, const vec2 v) {
    dest[0] *= v[0];
    dest[1] *= v[1];
}

void vec2_multiply_scalar(vec2 dest, float s) {
    dest[0] *= s;
    dest[1] *= s;
}

void vec2_multiply_vectors(vec2 dest, const vec2 v, const vec2 w) {
    dest[0] = v[0] * w[0];
    dest[1] = v[1] * w[1];
}

void vec2_divide(vec2 dest, const vec2 v) {
    dest[0] /= v[0];
    dest[1] /= v[1];
}

void vec2_divide_scalar(vec2 dest, float s) {
    dest[0] /= s;
    dest[1] /= s;
}

void vec2_divide_vectors(vec2 dest, const vec2 v, const vec2 w) {
    dest[0] = v[0] / w[0];
    dest[1] = v[1] / w[1];
}

void vec2_apply_mat3(vec2 dest, const mat3 m) {
    const float x = dest[0], y = dest[1];
    dest[0] = m[0] * x + m[3] * y + m[6];
    dest[1] = m[1] * x + m[4] * y + m[7];
}

void vec2_min(vec2 dest, const vec2 v) {
    dest[0] = VMATH_MIN(dest[0], v[0]);
    dest[1] = VMATH_MIN(dest[1], v[1]);
}

void vec2_max(vec2 dest, const vec2 v) {
    dest[0] = VMATH_MAX(dest[0], v[0]);
    dest[1] = VMATH_MAX(dest[1], v[1]);
}

void vec2_clamp(vec2 dest, const vec2 min_v, const vec2 max_v) {
    dest[0] = vclamp(dest[0], min_v[0], max_v[0]);
    dest[1] = vclamp(dest[1], min_v[1], max_v[1]);
}

void vec2_clamp_scalar(vec2 dest, float min_s, float max_s) {
    dest[0] = vclamp(dest[0], min_s, max_s);
    dest[1] = vclamp(dest[1], min_s, max_s);
}

void vec2_clamp_length(vec2 dest, float min_s, float max_s) {
    const float len = vfloat_equals(vec2_length(dest), 0, VMATH_EPSILON) ? 1.0 : vec2_length(dest);
    vec2_divide_scalar(dest, len);
    const float clamped_len = vclamp(len, min_s, max_s);
    vec2_multiply_scalar(dest, clamped_len);
}

void vec2_floor(vec2 dest) {
    dest[0] = floorf(dest[0]);
    dest[1] = floorf(dest[1]);
}

void vec2_ceil(vec2 dest) {
    dest[0] = ceilf(dest[0]);
    dest[1] = ceilf(dest[1]);
}

void vec2_round(vec2 dest) {
    dest[0] = roundf(dest[0]);
    dest[1] = roundf(dest[1]);
}

void vec2_round_to_zero(vec2 dest) {
    dest[0] = dest[0] < 0 ? ceilf(dest[0]) : floorf(dest[0]);
    dest[1] = dest[1] < 0 ? ceilf(dest[1]) : floorf(dest[1]);
}

void vec2_negate(vec2 dest) {
    dest[0] = -dest[0];
    dest[1] = -dest[1];
}

void vec2_reflect(vec2 dest, const vec2 normal) {
    vec2 v;
    vec2_copy(v, normal);
    vec2_multiply_scalar(v, 2 * vec2_dot(dest, normal));
    vec2_sub(dest, v);
}

float vec2_dot(const vec2 v, const vec2 w) {
    return v[0] * w[0] + v[1] * w[1];
}

float vec2_cross(const vec2 v, const vec2 w) {
    return v[0] * w[1] - v[1] * w[0];
}

float vec2_length_sq(const vec2 v) {
    return vec2_dot(v, v);
}

float vec2_length(const vec2 v) {
    return sqrtf(vec2_length_sq(v));
}

float vec2_manhattan_length(const vec2 v) {
    return fabs(v[0]) + fabs(v[1]);
}

void vec2_normalize(vec2 dest) {
    const float len = vfloat_equals(vec2_length(dest), 0, VMATH_EPSILON) ? 1.0 : vec2_length(dest);
    vec2_divide_scalar(dest, len);
}

float vec2_angle(const vec2 v) {
    const float angle = atan2f(v[1], v[0]);
    return angle < 0 ? angle + 2 * VMATH_PI : angle;
}

float vec2_distance_to_squared(const vec2 v, const vec2 w) {
    const float dx = v[0] - w[0], dy = v[1] - w[1];
    return dx * dx + dy * dy;
}

float vec2_distance_to(const vec2 v, const vec2 w) {
    return sqrtf(vec2_distance_to_squared(v, w));
}

float vec2_manhattan_distance_to(const vec2 v, const vec2 w) {
    return fabs(v[0] - w[0]) + fabs(v[1] - w[1]);
}

void vec2_set_length(vec2 dest, float len) {
    vec2_normalize(dest);
    vec2_multiply_scalar(dest, len);
}

void vec2_lerp(vec2 dest, const vec2 v, float alpha) {
    dest[0] += (v[0] - dest[0]) * alpha;
    dest[1] += (v[1] - dest[1]) * alpha;
}

void vec2_lerp_vectors(vec2 dest, const vec2 v, const vec2 w, float alpha) {
    vec2_sub_vectors(dest, v, w);
    vec2_multiply_scalar(dest, alpha);
    vec2_add(dest, v);
}

bool vec2_equals(const vec2 v, const vec2 w) {
    return vfloat_equals(v[0], w[0], VMATH_EPSILON) && vfloat_equals(v[1], w[2], VMATH_EPSILON);
}

void vec2_rotate_around(vec2 dest, const vec2 center, float angle) {
    const float c = cosf(angle), s = sinf(angle);

    const float x = dest[0] - center[0];
    const float y = dest[1] - center[1];

    dest[0] = x * c - y * s + center[0];
    dest[1] = x * s + y * c + center[1];
}
