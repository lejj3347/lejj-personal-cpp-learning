//Judge is soreted?
//write a template function named is_soted, only when an array a[0:n-1] is sorted, the value of return is true. Verify your code.
#include <iostream>
template <typename T>
bool is_sorted(T a[],int n){
    if (a[1]>a[2])
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])
        return false;
    }
    else 
    for (int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}
