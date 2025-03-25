#include <iostream>
using namespace std;

int main(){
    int H,W; cin>>H>>W;
    int **arr = new int*[H];
    for(int i=0;i<H;i++){
        arr[i] = new int[W];
        fill(arr[i],arr[i]+W,0);
    }

    for(int i=0;i<W;i++){
        int block;
        cin>>block;
        for(int row=H-1;row>H-block-1;row--){
            arr[row][i]=1;//block
        }
    }

    int cnt=0;//ans
    for(int row=0;row<H;row++){
        for(int col=0;col<W;col++){
            //ifSurrounded();
            bool leftBlocked=false,rightBlocked=false;
            if(arr[row][col]==1){continue;}
            for(int c=col-1;c>=0;c--){
                if(arr[row][c]==1){
                    leftBlocked=true;
                    break;
                }
            }
            for(int c=col+1;c<=W;c++){
                if(arr[row][c]==1){
                    rightBlocked=true;
                    break;
                }
            }
            if(leftBlocked&&rightBlocked){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}