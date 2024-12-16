#include "accumlate.h"
using namespace std;
int main(){
    double k[10]={5,8,2};
    double Sk=sum(k,4);
    int *y=new int[30];
    for(int i=1;i<=10;i++){
        y[i-1]=i;
    }
    int Sy=sum(y,5);
    cout<<"the value of k is "<<Sk<<endl;
    cout<<"the value of y is "<<Sy<<endl;
    //delete[] y;
    return 0;
}