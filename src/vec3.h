#ifndef VMATH_VEC3_H
#define VMATH_VEC3_H

#include "./vmath.h"

void vec3_set_scalar(vec3 dest, float s);
void vec3_copy(vec3 dest, const vec3 src);

void vec3_add(vec3 dest, const vec3 v);
void vec3_add_scalar(vec3 dest, float s);
void vec3_add_vectors(vec3 dest, const vec3 v, const vec3 w);
void vec3_add_scaled_vector(vec3 dest, const vec3 v, float s);

void vec3_sub(vec3 dest, const vec3 v);
void vec3_sub_scalar(vec3 dest, float s);
void vec3_sub_vectors(vec3 dest, const vec3 v, const vec3 w);

void vec3_multiply(vec3 dest, const vec3 v);
void vec3_multiply_scalar(vec3 dest, float s);
void vec3_multiply_vectors(vec3 dest, const vec3 v, const vec3 w);

void vec3_divide(vec3 dest, const vec3 v);
void vec3_divide_scalar(vec3 dest, float s);
void vec3_divide_vectors(vec3 dest, const vec3 v, const vec3 w);

void vec3_apply_axis_angle(vec3 dest, const vec3 axis, float angle);
void vec3_apply_mat3(vec3 dest, const mat3 m);
void vec3_apply_mat4(vec3 dest, const mat3 m);

void vec3_min(vec3 dest, const vec3 v);
void vec3_max(vec3 dest, const vec3 v);

void vec3_clamp(vec3 dest, const vec3 min_v, const vec3 max_v);
void vec3_clamp_scalar(vec3 dest, float min_s, float max_s);
void vec3_clamp_length(vec3 dest, float min_s, float max_s);

void vec3_floor(vec3 dest);
void vec3_ceil(vec3 dest);
void vec3_round(vec3 dest);
void vec3_round_to_zero(vec3 dest);

void vec3_negate(vec3 dest);

float vec3_dot(const vec3 v, const vec3 w);
float vec3_cross(const vec3 v, const vec3 w);

float vec3_length_sq(const vec3 v);
float vec3_length(const vec3 v);
float vec3_manhattan_length(const vec3 v);

void vec3_normalize(vec3 dest);

float vec3_angle(const vec3 v);

float vec3_distance_to_squared(const vec3 v, const vec3 w);
float vec3_distance_to(const vec3 v, const vec3 w);
float vec3_manhattan_distance_to(const vec3 v, const vec3 w);

void vec3_set_length(vec3 dest, float len);
void vec3_lerp(vec3 dest, const vec3 v, float alpha);
void vec3_lerp_vectors(vec3 dest, const vec3 v, const vec3 w, float alpha);

bool vec3_equals(const vec3 v, const vec3 w);

void vec3_rotate_around(vec3 dest, const vec3 center, float angle);

#endif
