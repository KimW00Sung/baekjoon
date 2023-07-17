#include <iostream>
using namespace std;
bool is_self[10001];
void construct(int n){
    int child=n;
    while(n){
        child+=n%10;
        n/=10;
    }
    if(child>10000){return;}
    is_self[child]=false;
}
int main(){
    //생성자가 없는 숫자를 셀프 넘버

    fill_n(is_self,10001,true);
    for(int i=1;i<10000;i++){
        construct(i);
    }

    for(int i=1;i<=10000;i++){
        if(is_self[i]){
            cout<<i<<endl;
        }
    }
}