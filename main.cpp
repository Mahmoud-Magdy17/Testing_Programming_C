#include <iostream>
#include "stack"
using namespace std;
#define ll long long
#define endl cout<<'\n';
void testCase(){
    int N;cin>>N;
    stack<int>st;
    for(int i=0;i<N;i++){
        int x;cin>>x;
        st.push(x);
    }
    int cur=st.top();st.pop();
    int cnt=1;
    while(!st.empty()){
        if(st.top()>cur){
            cout<<cur;endl
            cnt++;
        }
        cur=st.top();
        st.pop();
    }
    cout<<cnt;
}
void testCase(int T){
    while(T--){
        testCase();endl
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testCase();
    return 0;
}
