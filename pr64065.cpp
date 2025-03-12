#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<pair<int,int>> vec;
    int ary[100001]={0};
    string temp="";
    for(char ch: s){
        if(ch-'0' >=0 && ch-'0'<=9){
            temp+=ch;
        }
        else{
            if(temp.length()){
                ary[stoi(temp)]++;
                temp.clear();
            }
        }
    }
        
        for(int i=0;i<100001;i++){
            if(ary[i]){
                vec.push_back(make_pair(ary[i],i));
            }
        }
        
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        answer.push_back(vec[i].second);
    }
    return answer;
}