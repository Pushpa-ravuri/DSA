#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter n value";
   cin>>n;
   int iniS=(2*n-2),strs=0;
   for(int i=1;i<=(2*n-1);i++){
      if(i<=n) strs=i;
      else strs=(2*n-i);
      for(int j=1;j<=strs;j++) cout<<"*";
      for(int j=1;j<iniS;j++) cout<<" ";
      for(int j=1;j<=strs;j++) cout<<"*";
      if (i<n) iniS -=2;
      else iniS +=2;
       cout<<"\n";
   }
    return 0;
}