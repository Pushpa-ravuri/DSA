#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value for n";
    cin>>n;
     for(int i=1;i<=(2*n-1);i++){
        int s=i;
        if(i>n) s=2*n-i;
        for(int j=1;j<=s;j++)cout<<"* ";
        cout<<"\n";
    }
    return 0;
}