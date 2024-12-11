#ifndef CURRENCY_H
#define CURRENCY_h

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
    currency(/* args */signtype,unsigned int ,unsigned int );
    currency(/* args */double);
    currency()=default;
    ~currency();
    currency operator + (const currency& thevalue) const;
    currency& operator += (const currency& thevalue);
    unsigned int getsigntype()const{return sign;}
    unsigned int getdollars()const{return dollars;}
    unsigned int getcents()const{return cents;}
    double todouble()const;
    currency add(const currency& theadd)const;//not change exit arguments ,but create a new object and assignment;
    currency& increments(const currency& theincrements);//not create a new object,but change arguments and privatesrguments
    void output();
};


#endif