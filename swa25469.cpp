#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int T; cin>>T;
    for(int i=0;i<T;i++){
        int cnt=0;
        int H,W;//row col
        cin>>H>>W;
        vector<vector<int>> vec(H,vector<int>(W,0));
        vector<vector<int>> ans(H,vector<int>(W,0));

        for(int r=0;r<H;r++){
            string str;cin>>str;
            for(int j=0;j<W;j++){
                if(str[j]=='#'){
                    vec[r][j]=1;
                }
                else{
                    vec[r][j]=0;
                }
            }
        }

        //row, col 중 작은 값 부터 탐색 5,3 이먄 col부터
        if(H>=W){
            for(int col=0;col<W;col++){
                int flag=0;
                for(int row=0;row<H;row++){
                    if(vec[row][col]==1) {flag =1; continue;}
                    else{
                        flag=0; break;
                    }
                }
                if(flag==1)
                {
                    for(int tmp=0;tmp<H;tmp++)
                    {
                        ans[tmp][col]=1;
                    }
                    cnt+=1; 
                }
            }
            if(ans==vec){cout<<cnt<<endl;continue;}
            
            for(int row=0;row<H;row++){
                int flag=0;
                for(int col=0;col<W;col++){
                    if(vec[row][col]==1) {flag =1; continue;}
                    else{
                        flag=0; break;
                    }
                }
                if(flag==1)
                {
                    for(int tmp=0;tmp<W;tmp++)
                    {
                        ans[row][tmp]=1;
                    }
                    cnt+=1;
                }
            }
        }
        else if(H<W)
        {
            for(int row=0;row<H;row++){
                int flag=0;
                for(int col=0;col<W;col++){
                    if(vec[row][col]==1) {flag =1; continue;}
                    else{
                        flag=0; break;
                    }
                }
                if(flag==1)
                {for(int tmp=0;tmp<W;tmp++)
                    {
                        ans[row][tmp]=1;
                    }
                    cnt+=1;
                }
            }
            if(ans==vec){cout<<cnt<<endl;continue;}
            

            for(int col=0;col<W;col++){
                int flag=0;
                for(int row=0;row<H;row++){
                    if(vec[row][col]==1) {flag =1; continue;}
                    else{
                        flag=0; break;
                    }
                }
                if(flag==1)
                {
                    for(int tmp=0;tmp<H;tmp++)
                    {
                        ans[tmp][col]=1;
                    }
                    cnt+=1;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}