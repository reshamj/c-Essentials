#include <cstdio>
#include <iostream>
using namespace std;

unsigned long int factorial( unsigned long int n ) {
    if( n < 2 ) return 1;
    return factorial( n - 1 ) * n;
}

int main() {
    unsigned long int n;
    puts("Number:");
    cin >>n; 
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}
