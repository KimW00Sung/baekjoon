#include <iostream>
#include <cmath>
using namespace std;

int arr[10] = {0,9,90,900,9000,90000,900000,9000000,90000000,1};

int callen(int n){
    int cnt=0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}

int main(){
    int n,len,ans=0;
    cin>>n;
    len = callen(n);


    for(int i=1;i<=len;i++){
        if(i<len){
            ans+=(arr[i]*i);
        }
        else{
            ans+=((n-pow(10,i-1)+1)*i);
        }
    }
    cout<<ans;
    return 0;
}