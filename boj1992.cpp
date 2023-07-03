#include <iostream>
using namespace std;
const int MAX = 64;
int N;
int arr[MAX][MAX];
void input(){
    cin>>N;
    string S;
    for(int r=1;r<=N;r++){
        cin>>S;
        for(int c=1;c<=N;c++){
            arr[r][c]=S[c-1];
        }
    }
}
void solve(int row,int col,int size){
    bool flag=true;
    int standard=arr[row][col];
    for(int r=row;r<row+size;r++){
        for(int c=col;c<col+size;c++){
            if(arr[r][c]!=standard){
                cout<<'(';
                solve(row,col,size/2);
                solve(row,col,size/2);
                solve(row+size/2,col,size/2);
                solve(row+size/2,col+size/2,size/2);
                cout<<')';
                return;
            }
        }
    }
    cout<<standard;
    return;
}
int main(){
    input();
    solve(1,1,N/2);
}