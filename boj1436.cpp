#include <iostream>
using namespace std;

int main(){
    int N; cin>>N;
    int ans=0;
    int tmp=0;
    for(int i=666;;i++){
        int tmp=i;
        while(tmp>=666){
            if(tmp%1000==666){
                ans+=1;
                break;
            }
            tmp/=10;
        }
        if(ans==N){
            cout << i;
            break;
        }
    }
    
    return 0;
}

//Brute Force: 완전 탐색, 반복문 or 조건문 많이 사용, 알고리즘 설계 및 구현은 쉽지만 메모리면에서 비효율적
// 선형 구조 : 순차 탐색 / 비선형구조 : 백트래킹, DFS, BFS