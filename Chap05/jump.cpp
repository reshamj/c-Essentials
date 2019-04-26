// jump.cpp by Bill Weinman <http://bw.org/>
// a simple jump table
// updated for C++ EssT 2018-08-08

#include <cstdio>
using namespace std;

const char * prompt();    //func returns a constant pointer to char 
int jump( const char * ); //func declaration input parameter= constant pointer ref 

void fa() { puts("this is fa()"); }
void fb() { puts("this is fb()"); }
void fc() { puts("this is fc()"); }
void fd() { puts("this is fd()"); }
void fe() { puts("this is fe()"); }

void (*funcs[])() = { fa, fb, fc, fd, fe };

int main() {
    while(jump(prompt())) ;  //jump input is constant pointer to ref and propmpt returns a constant pointer of ref 
    puts("\nDone.");
    return 0;
}

const char * prompt() {
    puts("Choose an option:");
    puts("1. Function fa()");
    puts("2. Function fb()");
    puts("3. Function fc()");
    puts("4. Function fd()");
    puts("5. Function fe()");
    puts("Q. Quit.");
    printf(">> ");
    fflush(stdout);                 // flush after prompt
    
    const int buffsz = 16;          // constant for buffer size
    static char response[buffsz];   // static storage for response buffer
    fgets(response, buffsz, stdin); // get response from console
    
    return response;  //by default retunrs the ref/ addr of response via pointer
}

int jump( const char * rs ) {
    char code = rs[0];
    if(code == 'q' || code == 'Q') return 0;
    
    // get the length of the funcs array
    int func_length = sizeof(funcs) / sizeof(funcs[0]); //calculate index of the array of func pointer
    
    int i = (int) code - '0';   // convert ASCII numeral to int; because buffer input is ASCII and not actual values
    if( i < 1 || i > func_length ) {
        puts("invalid choice");
        return 1;
    } else {
        funcs[i - 1]();         // array is zero-based - calling the specific function by its function pointer
        return 1;
    }
    
}
