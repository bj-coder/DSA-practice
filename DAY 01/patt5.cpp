


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
        int count = rows;

        while (column<=rows)
        {
            
            cout<<count<< " ";

            column++;
            count = count+1;
            
            

        }
        cout << endl;
        rows++;

}
}


// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 
