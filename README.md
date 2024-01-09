# pointer_and_reference
Example Repository to experiment with C++ references and C-Wrappers


Compile with
```
g++ -shared -o libt8_vector.so t8_vector_wrapper.cpp -lc -fPIC
g++ -shared -o libt8_vector_algo.so t8_algo_using_vec_wrapper.cpp t8_algo_using_vec.cpp -lc
```
to create the wrapper libraries. 
Then compile the test program using
```
gcc -o test test.c -lt8_vector -lt8_vector_algo -L.
```
