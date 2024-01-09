#ifndef T8_VECTOR_WRAPPER_HXX
#define T8_VECTOR_WRAPPER_HXX

#ifdef __cplusplus
extern "C" {
#endif

typedef struct t8_vector_wrapper{
    void *t8_vector;
}t8_vector_c;

t8_vector_c *t8_vector_c_create(double *array, const int size);

void t8_vector_c_destroy(t8_vector_c *vector);

void t8_vector_c_set_elem(t8_vector_c *vector, const int index, const double element);

void t8_vector_c_print(t8_vector_c *vector);

#ifdef __cplusplus
}
#endif


#endif /* T8_VECTOR_WRAPPER_HXX*/