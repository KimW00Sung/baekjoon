#include <iostream>
using namespace std;

int main(){
    int N,M;cin>>N>>M;

    int **arr2 = new int*[N+1];
    int **dp = new int*[N+1];
    for(int i=0;i<=N;i++){
        arr2[i]= new int[M+1];
        dp[i]= new int[M+1];
    }

    for(int i=0;i<=N;i++){
        for(int j=0;j<=M;j++){
            if(i==0 || j==0) {arr2[i][j]=0; continue;}
            cin>>arr2[i][j];
        }
    }

    int k;cin>>k;
    for(int row=1;row<=N;row++){
            for(int col=1;col<=M;col++){
                dp[row][col]=arr2[row][col]+dp[row-1][col]+dp[row][col-1]-dp[row-1][col-1];
            }
    }
    for(int t=0;t<k;t++){
        int i,j,x,y;
        cin>>i>>j>>x>>y;

        int ans = dp[x][y]-dp[i-1][y]-dp[x][j-1]+dp[i-1][j-1];
        cout<<ans<<endl;;
    }
    
    return 0;
}