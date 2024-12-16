#include "hanol.h"
void hanol(int n, char f, char a, char t){
    if (n>1){
        hanol(n-1,f,t,a);
        hanol(1,f,a,t);
        hanol(n-1,a,f,t);
    }
    else cout<<"From  "<<f<<"  to  "<<t<<endl;
}
int main(){
    char a='A',f='F',t='T';
    hanol(4,f,a,t);
    return 0;

}
