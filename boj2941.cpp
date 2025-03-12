#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // string str; cin>> str;

    // set<string> crotic = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    // int cnt=0;
    // for(int i=0;i<str.length();){
    //     if((str[i] =='c' && str[i+1]=='=') || (str[i]=='c'&& str[i+1]=='-')){
    //         cnt+=1;
    //         i+=2;
    //     }
    //     else if(str[i] =='d' && str[i+1]=='z' && str[i+2]=='='){
    //         cnt+=1;
    //         i+=3;
    //     }
    //     else if(str[i]=='d'&& str[i+1]=='-'){
    //         cnt+=1;
    //         i+=2;
    //     }
    //     else if(str[i]=='l'&& str[i+1]=='j'){
    //         cnt+=1;
    //         i+=2;
    //     }
    //     else if(str[i]=='n'&& str[i+1]=='j'){
    //         cnt+=1;
    //         i+=2;
    //     }
    //     else if(str[i]=='s'&& str[i+1]=='='){
    //         cnt+=1;
    //         i+=2;
    //     }
    //     else if(str[i]=='z'&& str[i+1]=='='){
    //         cnt+=1;
    //         i+=2;
    //     }
    //     else{
    //         cnt+=1;
    //         i+=1;
    //     }
    // }

    // cout<<cnt;

    string str; cin>>str;
    vector<string> crotic = {"c=","c-","dz=","d-","d-","lj","nj","s=","z="};
    int cnt=0;
    for(int i=0;i<crotic.size();i++){
        while(1){
            int idx=str.find(crotic[i]);
            if(idx==string::npos){
                break;
            }

            str.replace(idx,crotic[i].length(),"#");
        }
    }
    cout<<str.length();
    
    return 0;
}