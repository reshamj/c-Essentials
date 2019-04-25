#include <cstdio>
using namespace std;

typedef unsigned char points_t; //typedef varaibles are always concluded with _t to indicate being typedef 
typedef unsigned char rank_t; //standard practise

//declare thtypedef outside of other datatype 
struct score {
    points_t p;  //could have declared typedef here; however code is not independent then
    rank_t r;
};

int main()
{
    struct score s = { 5, 1 };
    printf("score s had %d points and a rank of %d\n", s.p, s.r);
    
    return 0;
}
