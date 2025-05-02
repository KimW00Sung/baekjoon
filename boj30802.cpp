#include <iostream>

using namespace std;

int main(){
    int N; cin>>N;
    int sizes[6];
    for(int i=0;i<6;i++){
        cin>>sizes[i];
    }
    int P,T;cin>>T>>P;

    int totalpeople = 0;
    for(int i=0;i<6;i++){totalpeople+=sizes[i];}
    int pbundle = totalpeople/P;
    int pextra = totalpeople%P;

    int tbundle=0;
    for(int i=0;i<6;i++){
        tbundle+=sizes[i]/T;
        if((sizes[i]%T)){
            tbundle+=1;
        }
    }
    cout<<tbundle<<endl;
    cout<<pbundle<<' '<<pextra<<endl;
    return 0;
}