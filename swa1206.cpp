#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T=10;
    int ans;
    for(int test=0;test<T;test++)
    {
        ans=0;
        int N;cin>>N;
        vector<int> heights(N+1,0);
        for(int i=0;i<N;i++)
        {
            cin>>heights[i];
        }

        for(int j=2;j<N-2;j++)
        {
            if(heights[j]>heights[j-2] && heights[j]>heights[j-1] && heights[j]>heights[j+1] && heights[j]>heights[j+2])
            {
                int sur_max = max(max(max(heights[j-2],heights[j-1]),heights[j+1]),heights[j+2]);
                ans+=(heights[j]-sur_max);
            }
        }

        cout<<'#'<<test+1<<' '<<ans<<endl;
    }
    return 0;
}