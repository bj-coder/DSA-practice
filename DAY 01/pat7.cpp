// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE


    #include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i =1;
    char ch ='A';
    
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<< ch;
            j++;
        }
        cout << endl;
        i++;
        ch++;
        
    }
    
}




// ch+i-1 formula can be used