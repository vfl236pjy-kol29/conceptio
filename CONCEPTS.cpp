#include<string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template<typename T> concept ComplexConcept= std::is_integral<T>::value && std::is_signed<T>::value;
template<ComplexConcept T> void funcOnlyForSignedInts(T val) { val + val;   val* (-1); }

template<typename T> concept ComplexConcept = requires(const& T v)
{
    {v.hash()}->std::convertible_to<std::long>;
    {v.toString()}->std::convertible_to<std::string>;
    std::has_virtual_destructor v;
};

struct Number
{
    int _num{ 0 };
    std::string toString() const { return std::to_string(_num); };
};

void PrintType(Number & t)
{
    std::cout << t.toString() << '\n';
}


int main()
{

    funcOnlyForSignedInts(5);
    funcOnlyForSignedInts(5.0);
    funcOnlyForSignedInts("go");
    Number x{ 42 }; PrintType(x);


    return 0;
}
















