#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cmath>
using namespace std;
int main(){
    int k,n,w;
    long long s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        s=s + (i*k);
    }
    if(s>n){
       cout<<s-n<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
    return 0;

}