#include<iostream>
#include<string>
using namespace std;
int main() {
    string S;
    cin>>S;
    int n=S.length();
    for(int i=0;i<n;i++)
    {
        if(S[i]>=97&&S[i]<=122)
        {
            S[i] =S[i] - 32;
        }
        else if(S[i]>=65&&S[i]<=90)
        {
            S[i] = S[i] + 32;
        }
    }
    cout<<S;
	
	return 0;
}
