
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
            char h=ch+j-1;
            cout<<h ;
            j++;
            
        }
        cout << endl;
        i++;
        
       ch++;
        
    }
    
}