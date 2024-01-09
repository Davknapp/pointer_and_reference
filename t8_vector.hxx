#ifndef T8_VECTOR_HXX
#define T8_VECTOR_HXX

#include<vector>
#include<algorithm>
#include<stdio.h>

class t8_vector
{
    public:
        t8_vector(double *array, const int array_size):vector(array, array + array_size){

        };

        t8_vector(t8_vector&& other){
            /*Just to do something with other.vector*/
            std::move_backward(other.vector.begin(), other.vector.end(), vector.end());
            counter = other.counter; 
        };

        void set_elem(const int index, const double element){
            vector[index] = element;
            counter++;
        };

        void print(){
            std::for_each(vector.begin(), vector.end(), [](double elem){printf("%f\n", elem);});
        };

        std::vector<double>      vector;
        int                 counter = 0;
};

#endif /* T8_VECTOR_HXX */