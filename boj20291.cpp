#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int N;cin>>N;
    vector<string>type;//file type
    string str;
    string key;
    unordered_map<string,int>hashmap1;

    for(int i=0;i<N;i++){
        cin>>str;
        size_t dotPos=str.find_last_of(".");
        key=str.substr(dotPos+1);
        if(hashmap1.find(key)!=hashmap1.end()){
            hashmap1[key]++;
        }
        else{
            hashmap1[key]=1;
            type.push_back(key);
        }
    }

    sort(type.begin(),type.end());

    for(string ele:type){
        cout<<ele<<' '<<hashmap1[ele]<<endl;
    }
    
}