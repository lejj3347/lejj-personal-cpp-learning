#ifndef ACCUMULATE_H
#define ACCUMULATE_H
#include <iostream>
#include <numeric>
template<typename T>
T sum(T a[],int n){
    T theSum=0;
    return std::accumulate(a,a+n,theSum);
}
#endif