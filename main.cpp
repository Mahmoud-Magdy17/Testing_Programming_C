#include <iostream>
#include <map>
#include "algorithm"
using namespace std;
#define endl printf("\n");
#define ll long long
void testCase(){
    int N,K;cin>>N>>K;
    ll Arr[N];
    for(int i=0;i<N;i++){
        ll x;cin>>x;
        Arr[i]=x;
    }
    sort(Arr,Arr+N);

    for(int i=0;i<K;i++){
        ll x;cin>>x;
        auto ptr=lower_bound(Arr,Arr+N,x);
        if(ptr==Arr+N){
            printf("-1");endl
        }
        else {
            int inx=(int)(ptr-Arr);
            printf("%lld",Arr[inx]);endl
            Arr[inx]=-1;
        }
    }
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
