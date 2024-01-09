#include "t8_algo_using_vec.hxx"
#include <algorithm>
#include <functional>

void scalar_multiplication_cpp(t8_vector &vector, const double scalar){
    std::transform(vector.vector.begin(), vector.vector.end(), vector.vector.begin(),
        [&scalar](double vec){return scalar*vec;});
};