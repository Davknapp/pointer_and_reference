#include "t8_vector_wrapper.hxx"
#include "t8_vector.hxx"
#include <stdlib.h>

t8_vector_c *t8_vector_c_create(double *array, const int size){
    t8_vector_c *wrapped_vector= (t8_vector_c *) malloc(sizeof(t8_vector_c *));
    t8_vector *vec = new t8_vector(array, size);
    wrapped_vector->t8_vector = vec;

    return wrapped_vector;
}

void t8_vector_c_destroy(t8_vector_c *vector){
    if (vector == NULL){
        return;
    }
    delete static_cast<t8_vector *>(vector->t8_vector);
    free(vector);
    return;
}
void t8_vector_c_set_elem(t8_vector_c *vector, const int index, const double element){
    if(vector == NULL){
        return;
    }
    
    t8_vector *vec = static_cast<t8_vector *> (vector->t8_vector);
    vec->set_elem(index, element);
    return;
}

void t8_vector_c_print(t8_vector_c *vector){
    if(vector == NULL){
        return;
    }
    
    t8_vector *vec = static_cast<t8_vector *> (vector->t8_vector);
    vec->print();
    return;  
}
