#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=10,b=20;
    cout<<"a="<<a<<" b="<<b<<"\n";
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a="<<a<<" b="<<b<<"\n";
    return 0;
}