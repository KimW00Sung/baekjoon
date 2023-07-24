#include <iostream>
#include <stack>
using namespace std;

int main(){
	string pipes;cin>>pipes;
	int n=pipes.length();
	stack<char> stack;
	int ans=0;
	for(int i=0;i<n;i++){
		if(pipes[i]=='('&&pipes[i+1]!=')'){
			stack.push('(');
			ans+=1;
		}
		else if(pipes[i]==')'){//razor or end of pipe
			if(pipes[i-1]=='(' && pipes[i]==')'){//razor
				ans+=stack.size();
			}
			else{
				stack.pop();
			}
		}
	}
	cout<<ans<<endl;
}
