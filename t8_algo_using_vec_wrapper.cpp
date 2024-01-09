#include "t8_algo_using_vec_wrapper.hxx"
#include "t8_algo_using_vec.hxx"
#include "t8_vector_wrapper.hxx"

void scalar_multiplication(t8_vector_c *vector, const double scalar){
    if(vector == NULL){
        return;
    }

    t8_vector *vec = static_cast<t8_vector *> (vector->t8_vector);
    
    scalar_multiplication(*vec, scalar);
    return;
}


