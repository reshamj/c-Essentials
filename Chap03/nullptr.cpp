
//if this code was return in c; c does not support function overload
#include <cstdio>
using namespace std;
//The NULL keyword define is ambigous and depends on hardware of the machine thus a replacment 
//and a stable choice of null is nullptr 
//avoid using NULL at all
#ifndef NULL
#define NULL (0LL) /* common C++ definition */
#endif

//line 11 and 15 there is func overload 
void f( int i ) {
    printf("the int is %d\n", i);
}

void f( const char * s ) {
    printf("the pointer is %p\n", s);
}

int main() {
//    f(NULL);  //f(null) is a valid syntax in c and not c++
    //replace line 22 by follwoing 
    f(nullptr); //the ambiguity is cleared and code works 
    return 0;
}
