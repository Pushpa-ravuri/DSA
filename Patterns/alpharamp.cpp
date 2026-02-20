#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter n value";
   cin>>n;
   char j='A';
   for(int i=0;i<n;i++){
       j='A' + i;
      for(int x=0;x<=i;x++) cout<<j<<" ";
       cout<<"\n";
   }
    return 0;
}