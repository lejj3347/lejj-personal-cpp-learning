###

```cpp
template<typename T>
T sum(T a[],int n){
    T theSum=0;
    return std::accumulate(a,a+n,theSum);
}
```
1. For both the declaration and defination of template function, this should be down in include.
2. When passing an array to a function, you should use a'[]' instead of specifying the number, because the size information will be lost when pass on .
3. The 'T' here in the function represents various standard date types ,such as double, int ,float,etc.

```cpp
int *y=new int[111];
```
4. when dynamically allocating space for an array, the size of allocated size must be specified. 

```cpp
return std::accumulate(a,a+n,theSum);
```
5. when using functions, objects,types in the stl, the "std::" prefix is needed. Basic data types(int, double). control structure(when, if),  expressions do not need the "std::" prefix.  
6. check the memeory leak, command: valgrind --leak-check=full ./accumulate  detect memleak.leak 
7. For recursive problems ,firstly, considering  how many parameters are used and list them all. 
Secondly, thin about base case , i.e., what will  happen when n==1; 
Thirdly , look for paterns and rules when n=2 and more.