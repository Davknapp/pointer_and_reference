#ifndef T8_ALGO_USING_VEC_WRAPPER_HXX
#define T8_ALGO_USING_VEC_WRAPPER_HXX

#include "t8_vector_wrapper.hxx"

#ifdef __cplusplus
extern "C" {
#endif

void scalar_multiplication(t8_vector_c *vec, const double scalar);

#ifdef __cplusplus
}
#endif

#endif