#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;cin>>N;
    int cnt[10] = {0,};
    
    string str = to_string(N);
    for(int i=0;i<str.length();i++){
        cnt[str[i]-'0']+=1;
    }
    cnt[6]+=cnt[9];
    cnt[6] = (cnt[6]+1)/2;
    int max=-1;
    for(int i=0;i<9;i++){
        if(cnt[i]>max){
            max=cnt[i];
        }
    }
    cout<<max;
    return 0;
}