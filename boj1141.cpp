#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPrefix(const string& str1, const string& str2){
    return str2.compare(0,str1.size(), str1) == 0;
}

int main(){
    int N;cin>>N;
    vector<string> strings;

    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        strings.push_back(str);
    }

    sort(strings.begin(),strings.end(), [](const string&a, const string &b){
        return a.length() < b.length();
    });

    int ans=N;
    for(int i=0;i<N-1;i++){
        for(int k=i+1;k<N;k++){
            if(isPrefix(strings[i],strings[k])){
                ans--;
                break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}