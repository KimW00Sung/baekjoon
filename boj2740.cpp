#include <iostream>
#include <vector>
using namespace std;
int N,M,K;

int getValue(int row,int col,vector<vector<int>>& A,vector<vector<int>>& B){
    int sum=0;
    for(int i=0;i<M;i++){
        sum+= A[row][i] * B[i][col];
    }
    return sum;
}
int main(){
    cin>>N>>M;
    vector<vector<int>> A(N,vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }

    cin>>M>>K;
    vector<vector<int>> B(M,vector<int>(K));
    for(int i=0;i<M;i++){
        for(int j=0;j<K;j++){
            cin>>B[i][j];
        }
    }


    vector<vector<int>> res(N,vector<int>(K));
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            res[i][j] = getValue(i,j,A,B);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            cout<<res[i][j]<<' ';
        } cout<<endl;
    }
    return 0;

}