#include <iostream>
using namespace std;

int main(){
    int N; cin>>N;
    const int MOD = 15746;

    long long *dp = new long long[N+1];
    for(int i=0;i<N+1;i++){
        dp[i]=0;
    }
    dp[1]=1,dp[2]=2;
    for(int i=3;i<=N;i++){
        dp[i]=(dp[i-2]+dp[i-1])%MOD;
    }

    cout<<dp[N]<<endl;
    return 0;
}