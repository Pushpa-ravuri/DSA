#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter n value";
   cin>>n;
      for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++) cout<<" ";
        char ch='A';
        int b=(2*i+1)/2;
        for(int j=1;j<=(2*i+1);j++){
            if(j<=b){
                cout<<ch;
                ch+=1;
            }
            else {
                cout<<ch;
                ch -=1;
            }
        }
        for(int j=0;j<(n-i-1);j++) cout<<" ";
       cout<<"\n";
   }
    return 0;
}