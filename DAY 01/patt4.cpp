#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int rows = 1;
    int count= 1;
    
    while (rows<=n)
    {
        int column=1;

        while (column<=rows)
        {
            
            cout<< count << " ";

            column++;
            count++;
        }
        cout << endl;
        rows++;

}
}

// output
// 1
// 2 2
// 3 3 3
// 4 4 4 4