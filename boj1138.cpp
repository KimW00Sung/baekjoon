#include <iostream>
using namespace std;

int main(){
    int N; cin>>N;

    int arr[N];
    int ans[N];

    for(int i=1;i<=N;i++){
        cin>>arr[i];
        ans[i]=99;
    }

    int tmp,j;
    for(int i=1;i<=N;i++){
        tmp=0;
        for(j=1; tmp<arr[i];j++){
            if(ans[j]>=i)  { tmp++;}
        }
        while(ans[j]!=99){
            j++;
        }
        ans[j]=i;

    }

    for(int i=1;i<=N;i++){
        cout << ans[i] <<' ';
    }
    return 0;
}