#include <iostream>
#include "operator.h"
using namespace std;

int main()
{
    int a = 20,b = 12;
    cout<<"a+b : "<<add(a,b)<<endl;
    cout<<"a-b : "<<minu(a,b)<<endl;
    cout<<"a*b : "<<multi(a,b)<<endl;
    cout<<"a/b : "<<divide(a,b)<<endl;
    return 0;
}

