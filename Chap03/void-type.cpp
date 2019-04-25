// void-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;
//This line 5 indicates that func() will take absolutely no input arguments
void func ( void ) {
    puts("this is void func ( void )");
}
// in c defining void func(){} does not mean the func() will not take an input argument thus there is nee
//of keyword void; however for c++ void func() this means func() will not take any input arguments

void func2(){
	puts("lets see");
}

int main() {
    puts("calling func()");
    func();
    func2("hello");
    return 0;
}

