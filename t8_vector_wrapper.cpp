#include "t8_vector_wrapper.hxx"
#include "t8_vector.hxx"
#include <stdlib.h>

t8_vector_double *t8_vector_double_create(double *array, const int size){
    t8_vector_double *wrapped_vector= (t8_vector_double *) malloc(sizeof(t8_vector_double *));
    t8_vector<double> *vec = new t8_vector<double>(array, size);
    wrapped_vector->t8_vector = vec;

    return wrapped_vector;
}

void t8_vector_double_destroy(t8_vector_double *vector){
    if (vector == NULL){
        return;
    }
    delete static_cast<t8_vector<double> *>(vector->t8_vector);
    free(vector);
    return;
}
void t8_vector_double_set_elem(t8_vector_double *vector, const int index, const double element){
    if(vector == NULL){
        return;
    }
    
    t8_vector<double> *vec = static_cast<t8_vector<double> *> (vector->t8_vector);
    vec->set_elem(index, element);
    return;
}

void t8_vector_double_print(t8_vector_double *vector){
    if(vector == NULL){
        return;
    }
    
    t8_vector<double> *vec = static_cast<t8_vector<double> *> (vector->t8_vector);
    vec->print();
    return;  
}
