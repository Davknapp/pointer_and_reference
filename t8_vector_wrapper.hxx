#ifndef T8_VECTOR_WRAPPER_HXX
#define T8_VECTOR_WRAPPER_HXX

#ifdef __cplusplus
extern "C" {
#endif

typedef struct t8_vector_wrapper{
    void *t8_vector;
}t8_vector_double;

t8_vector_double *t8_vector_double_create(double *array, const int size);

void t8_vector_double_destroy(t8_vector_double *vector);

void t8_vector_double_set_elem(t8_vector_double *vector, const int index, const double element);

void t8_vector_double_print(t8_vector_double *vector);

#ifdef __cplusplus
}
#endif


#endif /* T8_VECTOR_WRAPPER_HXX*/