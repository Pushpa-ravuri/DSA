#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter n value";
   cin>>n;
   for(int i=0;i<n;i++){
      for(char k='A';k<='A'+i;k++){
          cout<<k<<" ";
      }
       cout<<"\n";
   }
    return 0;
}