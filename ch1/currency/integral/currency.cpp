
# include<iostream>
using namespace std;

enum signtype{plus,minus};

//defination of class
class currency
{
private:
    signtype sign;
    unsigned int cents;
    unsigned int dollars;
    /* data */
public:
    currency(/* args */signtype,unsigned,unsigned);
    currency(/* args */double);
    ~currency();
    unsigned int getsigntype()const{return sign;}
    unsigned int getdollars()const{return dollars;}
    unsigned int getcents()const{return cents;}
    currency add(const currency& theadd)const;//not change exit arguments ,but create a new object and assignment;
    currency& increments(const currency& theincrements);//not create a new object,but change arguments and privatesrguments
    void output();
};
currency::currency(/* args */signtype thesign=signtype::plus, unsigned int thedollars=0,unsigned int thecents=0):
                             sign(thesign),dollars(thedollars),cents(thecents){
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
currency  currency::add(const currency& theadd) const{
    currency result;
    result.dollars=this->dollars+theadd.dollars;
    result.cents=this->cents+theadd.cents;
    if(result.cents>100)
    {
        result.cents=result.cents%100;
        result.dollars++;
    }
    else;
    double a1=double(result.dollars+result.cents/100);
    if(a1>0)
    result.sign=signtype::plus;
    else
    result.sign=signtype::minus;
    return result;
}
currency& currency::increments(const currency& theincrements){
    *this=this->add(theincrements);
    return *this;
}    
void currency::output(){
    cout<<"the value of your currency is "<<dollars<<"."<<((double)cents)<<" dollars"<<endl;
}
int main(){
    currency mymoney(10.87),yourmoney(signtype::plus,6,65),allmoney;
    allmoney=mymoney.add(yourmoney);
    mymoney.increments(allmoney);
    mymoney.output();
    return 0;
}