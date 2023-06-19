 #include <iostream>

using namespace std;

int main(){

    int a=4;
    int b = 6;

    cout << "~a" << (~a) << endl;
    cout << "a|b" << (a|b) << endl;
    cout << "A&b" << (a&b) << endl;
    cout << "a^B" << (a^b) << endl;
}

// output

// ~a -5
// a|b 6
// A&b 4
// a^B 2