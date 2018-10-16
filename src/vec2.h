#ifndef VMATH_VEC2_H
#define VMATH_VEC2_H

#include <stdbool.h>
#include "./vmath.h"

void vec2_set_scalar(vec2 dest, float s);
void vec2_copy(vec2 dest, const vec2 src);

void vec2_add(vec2 dest, const vec2 v);
void vec2_add_scalar(vec2 dest, float s);
void vec2_add_vectors(vec2 dest, const vec2 v, const vec2 w);
void vec2_add_scaled_vector(vec2 dest, const vec2 v, float s);

void vec2_sub(vec2 dest, const vec2 v);
void vec2_sub_scalar(vec2 dest, float s);
void vec2_sub_vectors(vec2 dest, const vec2 v, const vec2 w);

void vec2_multiply(vec2 dest, const vec2 v);
void vec2_multiply_scalar(vec2 dest, float s);
void vec2_multiply_vectors(vec2 dest, const vec2 v, const vec2 w);

void vec2_divide(vec2 dest, const vec2 v);
void vec2_divide_scalar(vec2 dest, float s);
void vec2_divide_vectors(vec2 dest, const vec2 v, const vec2 w);

void vec2_apply_mat3(vec2 dest, const mat3 m);

void vec2_min(vec2 dest, const vec2 v);
void vec2_max(vec2 dest, const vec2 v);

void vec2_clamp(vec2 dest, const vec2 min_v, const vec2 max_v);
void vec2_clamp_scalar(vec2 dest, float min_s, float max_s);
void vec2_clamp_length(vec2 dest, float min_s, float max_s);

void vec2_floor(vec2 dest);
void vec2_ceil(vec2 dest);
void vec2_round(vec2 dest);
void vec2_round_to_zero(vec2 dest);

void vec2_negate(vec2 dest);
void vec2_reflect(vec2 dest, const vec2 normal);

float vec2_dot(const vec2 v, const vec2 w);
float vec2_cross(const vec2 v, const vec2 w);

float vec2_length_sq(const vec2 v);
float vec2_length(const vec2 v);
float vec2_manhattan_length(const vec2 v);

void vec2_normalize(vec2 dest);

float vec2_angle(const vec2 v);

float vec2_distance_to_squared(const vec2 v, const vec2 w);
float vec2_distance_to(const vec2 v, const vec2 w);
float vec2_manhattan_distance_to(const vec2 v, const vec2 w);

void vec2_set_length(vec2 dest, float len);
void vec2_lerp(vec2 dest, const vec2 v, float alpha);
void vec2_lerp_vectors(vec2 dest, const vec2 v, const vec2 w, float alpha);

bool vec2_equals(const vec2 v, const vec2 w);

void vec2_rotate_around(vec2 dest, const vec2 center, float angle);

#endif
