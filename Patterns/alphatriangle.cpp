#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter n value";
   cin>>n;
      for(int i=0;i<n;i++){
       char ch=('A'+n-1)-i;
       for(char c=ch;c<=('A'+n-1);c++)
       cout<<c;
       cout<<"\n";
   }
    return 0;
}