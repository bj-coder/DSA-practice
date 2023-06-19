// since i already know basics of c++ i entered right into main topics 
// so learn basic C++ before using this code

//problem : print a pattern like this

            //   1   2   3   4
            //   1   2   3   4
            //   1   2   3   4
            //   1   2   3   4


#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i =1;
    
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<< j;
            j++;
        }
        cout << endl;
        i++;
        
    }
    
}

// THis will print the above pattern and your challenge is to print the below pattern


    // 4   3   2   1
    // 4   3   2   1
    // 4   3   2   1
    // 4   3   2   1


    // hint: use n-j+1