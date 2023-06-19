// pattern

// *
// **
// ***
// ****
// *****


#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int rows = 1;
    
    while (rows<=n)
    {
        int column=1;

        while (column<=rows)
        {
            cout<< "*" << " ";
            column++;
        }
        cout << endl;
        rows++;

}
}