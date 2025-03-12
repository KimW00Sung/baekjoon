#include <string>
#include <vector>

using namespace std;
void dfs(vector<bool> &visited, vector<vector<int>> &computers, int n,int k){
    visited[k]=true;
    for(int i=0;i<n;i++){
        if(computers[k][i]==1 && !visited[i]){
            dfs(visited,computers,n,i);
        }
    }
    return;
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vector<bool> visited(n,false);
    
    for(int i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=true;
            for(int k=0;k<n;k++){
                if(computers[i][k]==1 && !visited[k]){
                    dfs(visited,computers,n,k);
                }
            }
            answer++;
        }
    }
    return answer;
}