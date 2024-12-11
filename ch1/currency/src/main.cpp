/*
1.defination of class
2.default construcor and its intialize by initialization paraments list.
3.write a functin,consider if it need a arguments."How it will be use".
4.the diffrence in "const"and "&"
*/
#include "currency.h"

int main(){
    currency mymoney(10.87),yourmoney(signtype::plus,6,65),allmoney;
    allmoney=mymoney.add(yourmoney);//twice copyconstructure function
    mymoney.increments(allmoney);
    mymoney.output();
    mymoney=mymoney+allmoney;
    mymoney.output();
    mymoney+=allmoney;
    mymoney.output();
    mymoney.increments(mymoney).increments(mymoney);
    mymoney.output();
    try
    {
        /* code */
        currency ilmoney(signtype::minus,55,101);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    currency testmoney(10.3),testmoney2(-10.1);
    currency testmoney3=testmoney2.add(testmoney);
    testmoney3.output();
    
    return 0;
}