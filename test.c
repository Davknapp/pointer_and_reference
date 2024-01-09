#include "t8_vector_wrapper.hxx"
#include "t8_algo_using_vec_wrapper.hxx"
#include <stdio.h>

int main(){
    double vals[3] = {1.1, 2.2, 3.3};
    t8_vector_double *vec = t8_vector_double_create(vals, 3);

    t8_vector_double_set_elem(vec, 1, 4.4);

    scalar_multiplication(vec, 2.0);

    t8_vector_double_print(vec);

    t8_vector_double_destroy(vec);
}