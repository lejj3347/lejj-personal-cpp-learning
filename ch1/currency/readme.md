### 这段代码构造了一个货币类，撰写了该类的构造函数，相加以及自增等函数。
1. 返回引用和常函数
```cpp
currency add(const currency& theadd)const{
currency result;
return result;}
currency& increments(const currency& theincrements){
return *this;}
```
对于末尾带const的常函数，其成员函数中的成员变量不改变,返回一个无名临时变量；  
对于返回值是&的返回引用，必须返回一个非成员函数里面的局部变量，一般为形参或者*this. 

2. double到int转化时候的精度问题
  ```cpp
  cents=(unsigned int)((thevalue-dollars+0.001)*100);
  ```
这里，由于计算机在表示诸如2.53之类的两位小数时，实际上是2.529999这种，所以在转化成int类型会去掉后面的，导致精度对不上，所以我们需要对该数值加0.001防止数值错误。
3. 重载*+*
```cpp
currency currency::operator + (const currency & thevalue) const{
    return add(thevalue);
}
```
如题，只需要确定*+*后面那个变量，返回该类型的操作后变量就行。  
4. 使用构造函数和初始化列表进行初始化
```cpp
currency::currency(signtype thesign, unsigned int thedollars,unsigned int thecents):
                             sign(thesign),dollars(thedollars),cents(thecents){
    if (cents>100)
    throw std::invalid_argument("cents should be <100");
}
```
这里使用了初始化列表把传进来的实参用于初始化成员变量；  
同时如果变量不合格，就会抛出异常。
