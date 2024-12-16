#include "../include/6.h"
int main(){
    double *y=new double[20];
    for(int i=0;i<20;i++){
        y[i]=i*i;
    }
    if(is_sorted(y,15))
    std::cout<<"Sorted i*i"<<std::endl;
    for(int i=0;i<20;i++){
        y[i]=(i-3)*(i-3);
    }
    if(is_sorted(y,15))
    std::cout<<"Sorted (i-3)*(i-3)"<<std::endl;
    return 0;
}
