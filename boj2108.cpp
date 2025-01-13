#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int N;cin>>N;
    vector<int> vec(N+1);
    int cnt[8001] = {0,};

    for(int i=0;i<N;i++){
        cin>>vec[i];
        cnt[vec[i]+4000]++;
    }
    sort(vec.begin(),vec.end()-1);
    //avg
    double avg=0;
    for(int i=0;i<N;i++){
        avg+=vec[i];
    }
    avg = round(avg/N);
    if(avg ==0){
        avg=0;
    }
    cout<<avg<<endl;

    //mid
    int mid = vec[N/2];
    cout<<mid<<endl;

    //mode
    int maxcnt=-9999,mode=0;
    bool not_first=false;

    for(int i=0;i<8001;i++){
        if(cnt[i]==0){continue;}
        if(cnt[i]==maxcnt && not_first){
            mode=i-4000;
            not_first=false;
        }
        else if(cnt[i]>maxcnt){
            mode=i-4000;
            maxcnt=cnt[i];
            not_first=true;
        }
    }
    cout<<mode<<endl;
    
    //범위
    int scope;
    auto max_it = vec[N-1];
    auto min_it = vec[0];

    if(N!=1){
        cout<<max_it-min_it<<endl;
    }
    else{
        cout<<0<<endl;;
    }

    return 0;
    
}