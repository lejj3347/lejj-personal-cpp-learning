/*
1.defination of class
2.default construcor and its intialize by initialization paraments list.
3.write a functin,consider if it need a arguments."How it will be use".
4.the diffrence in "const"and "&"
*/

#include "currency.h"


currency::currency(/* args */signtype thesign, unsigned int thedollars,unsigned int thecents):
                             sign(thesign),dollars(thedollars),cents(thecents){
    if (cents>100)
    throw std::invalid_argument("cents should be <100");
}
currency::currency(double thevalue){
    if (thevalue>0){
        sign=signtype::plus;
    }
    else{
        sign=signtype::minus;
        thevalue=-thevalue;    
    }
    dollars=(unsigned int)thevalue;
    cents=(unsigned int)((thevalue-dollars)*100);
}    
currency::~currency()
{
}
currency currency::operator + (const currency & thevalue) const{
    return add(thevalue);
}
currency& currency::operator +=(const currency& thevalue){
    increments(thevalue);
    return *this;
}
double currency::todouble()const{
    double a1=double(dollars)+double(cents)/100;
    if(sign==signtype::minus)
    a1=-a1;
}
currency  currency::add(const currency& theadd) const{
    double a1=this->todouble();
    double a2=theadd.todouble();
    a1=a1+a2;
    currency result(a1);
    return result;
}
currency& currency::increments(const currency& theincrements){
    *this=this->add(theincrements);
    return *this;
}    
void currency::output(){
    if(sign==signtype::plus)
    cout<<"the value of your currency is "<<dollars<<"."<<((double)cents)<<" dollars"<<endl;
    else
    cout<<"the value of your currency is -"<<dollars<<"."<<((double)cents)<<" dollars"<<endl;
}




