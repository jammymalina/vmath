#ifndef VMATH_QUAT_H
#define VMATH_QUAT_H

#include "./vmath.h"

void quat_set_scalar(quat dest, float s);
void quat_copy(quat dest, const quat src);

void quat_add(quat dest, const quat v);
void quat_add_scalar(quat dest, float s);
void quat_add_vectors(quat dest, const quat v, const quat w);
void quat_add_scaled_vector(quat dest, const quat v, float s);

void quat_sub(quat dest, const quat v);
void quat_sub_scalar(quat dest, float s);
void quat_sub_vectors(quat dest, const quat v, const quat w);

void quat_multiply(quat dest, const quat v);
void quat_multiply_scalar(quat dest, float s);
void quat_multiply_vectors(quat dest, const quat v, const quat w);

void quat_divide(quat dest, const quat v);
void quat_divide_scalar(quat dest, float s);
void quat_divide_vectors(quat dest, const quat v, const quat w);

#endif
