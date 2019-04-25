
#include <cstdio>
#include <string>
#include <typeinfo>
using namespace std;

string func() {
    return string("this is a string");
}

int main() {
	//the compiler will note the return type of the func() and automatically set the value of x to string 
	//because of the use of keyword 'auto'
    auto x = func();
    printf("x is %s\n", x.c_str());
    if(typeid(x) == typeid(string)) puts("x is string");
	//incase you were to use stl library which has complex datatypes using 'auto' keyword will be helpful
	//however must be used where the reutrn or datatype can be predicted. 
    return 0;
}
