#include <string>
#include <vector>
#include <iostream>
using namespace std;

int visit[8];
vector<vector<int>>dungeons;
int answer=0;
int N;

void dfs(int h,int health){
    answer = answer > h ? answer : h;
    
    for(int i=0;i<N;i++){
        if(visit[i] || dungeons[i][0] > health){
            continue;
        }
        
        visit[i]=1;
        dfs(h+1,health - dungeons[i][1]);
        visit[i]=0;
    }
    return;
}
int solution(int k, vector<vector<int>> dungeons_) {
    dungeons = dungeons_;
    N=dungeons.size();
    dfs(0,k);
    return answer;
}