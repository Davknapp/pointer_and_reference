#include "t8_algo_using_vec.hxx"
#include <algorithm>
#include <functional>

template<typename T>
void scalar_multiplication(t8_vector<T> &vector, const double scalar){
    std::transform(vector.vector.begin(), vector.vector.end(), vector.vector.begin(),
        [&scalar](double vec){return scalar*vec;});
};

template void scalar_multiplication(t8_vector<double> &vector, const double scalar);

