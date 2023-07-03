#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int DIV=1000;
typedef vector<vector<int>> vec2;
vec2 matrix,matrix2;
vec2 result,temp;
void print_matrix(vec2 matrix,int N);
void naive_matpower(int n,vec2 &matrix,vec2 &matrix2);
void matpower(int n,long long b);
int main(){
    int N;cin>>N;
    long long B;cin>>B;
    matrix.resize(N+1,vector<int>(N+1,0));
    matrix2.resize(N+1,vector<int>(N+1,0));
    result.resize(N+1,vector<int>(N+1,0));
    temp.resize(N+1,vector<int>(N+1,0));
    for(int i=0;i<N;i++) for(int k=0;k<N;k++)
    {
            cin>>matrix[i][k];
            result[i][k]=matrix[i][k]%DIV;
    }
    
    matpower(N,B-1);
    print_matrix(result,N);
}
void naive_matpower(int n,vec2 &matrix,vec2 &matrix2){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int t=0;t<n;t++){
                temp[i][j]+=(matrix[i][t]*matrix2[t][j])%DIV;
                temp[i][j]%=DIV;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix2[i][j]=temp[i][j];
            temp[i][j]=0;
        }
    }
}
void matpower(int n,long long b){
    while(b>0){
        if(b%2==1){
            naive_matpower(n,matrix,result);
        }
        naive_matpower(n,matrix,matrix);
        b/=2;
    }
}

void print_matrix(vec2 res,int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            cout<<res[i][k]<<' ';
        }
        cout<<endl;
    }
}