#include <iostream>
#include "tinhToan.h"
using namespace std;

tinhToan :: tinhToan(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
    }

int tinhToan :: delta(){
    return ((b*b)-(4*a*c));
}
