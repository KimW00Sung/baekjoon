#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str1,str2;
    cin >> str1 >> str2;

    int m,n;
    m=str1.length();
    n=str2.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));

    int max=0;
    for(int i=0;i<=m;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=n;i++){
        dp[0][i]=0;
    }



    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=dp[i-1][j] > dp[i][j-1] ? dp[i-1][j] : dp[i][j-1];
            }
            max= max >= dp[i][j] ? max : dp[i][j];
        }
    }
    cout << max;
    return 0;

}

