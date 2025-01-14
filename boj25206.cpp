#include <iostream>
#include <iomanip>
using namespace std;

double trans(string rate){
    if(rate=="A+"){
        return 4.5;
    } else if(rate == "A0"){
        return 4.0;
    } else if(rate == "B+"){
        return 3.5;
    } else if(rate == "B0"){
        return 3.0;
    } else if(rate == "C+"){
        return 2.5;
    } else if(rate == "C0"){
        return 2.0;
    } else if(rate == "D+"){
        return 1.5;
    } else if(rate == "D0"){
        return 1.0;
    } else{
        return 0.0;
    }
}
int main(){
    string subject,rating;
    double avg;
    double final_score=0;
    double total =0;
    for(int i=0;i<20;i++){
        cin>>subject>>avg>>rating;
        if(rating=="P"){continue;}
        total+=avg;
        final_score+=(avg*trans(rating));
    }
    final_score /= total;
    cout<<fixed<<setprecision(6)<<final_score<<endl;
    return 0;

}