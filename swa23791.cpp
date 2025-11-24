#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int T;cin>>T;
    for(int test=0;test<T;test++)
    {
        int N;cin>>N;
        vector<int> res(N+1,0);
        queue<int> A;
        queue<int> B;
        int num;
        for(int i=0;i<N;i++)
        {
            cin>>num;
            A.push(num);
        }
        for(int i=0;i<N;i++)
        {
            cin>>num;
            B.push(num);
        }


        for(int i=0;i<(N+1)/2;i++)
        {

            for(;!A.empty();)
            {
                if(res[A.front()] == 0){//아직 선발되지 않은 선수
                    res[A.front()] = 1;
                    A.pop();
                    break;
                } 
                else
                {
                    A.pop();
                }
            }

            for(;!B.empty();)
            {
                if(res[B.front()] == 0){//아직 선발되지 않은 선수
                    res[B.front()] = 2;
                    B.pop();
                    break;
                } 
                else
                {
                    B.pop();
                }
            }
        }
        for(int i=1;i<=N;i++)
        {
            if(res[i]==1){
                cout<<'A';
            }
            else
            {
                cout<<'B';
            }
        }

    cout<<endl;
    }

    return 0;
}