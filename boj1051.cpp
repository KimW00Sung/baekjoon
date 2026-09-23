#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;

    vector<vector<int>> arr(N,vector<int>(M));
    for(int row=0;row<N;row++)
    {
        for(int col=0;col<M;col++)
        {
            cin>>arr[row][col];
        }
    }

    
}