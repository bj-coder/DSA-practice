// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1





#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int rows = 1;
    // int count= 1;
    
    while (rows<=n)
    {
        int column=1;
        // int count = rows;

        while (column<=rows)
        {
            
            cout<<rows-column+1<< " ";

            column++;
            // count = count+1;
            
            

        }
        cout << endl;
        rows++;

}
}