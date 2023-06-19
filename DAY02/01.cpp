// This is to understand post increment and pre increment


#include <iostream>

using namespace std;

int main(){

    int i = 1, a = 2;

    int j = a+(i++);
    int k = a+ (i++);

    cout << "j="<<j  <<"k="<< k ;
}

