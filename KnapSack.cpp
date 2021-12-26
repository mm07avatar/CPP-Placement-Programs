#include<iostream>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

const int N=1e3+2, MOD=1e9+7;
int val[N], wt[N];

//Memoization
int dp[N][N];

int Knapsack(int n, int w){
    if(w<=0)
        return 0;
    if(n<=0)
        return 0;
    if(dp[n][w] != -1){
        return dp[n][w];
    }
    if(wt[n-1]>w)
        dp[n][w] = Knapsack(n-1, w);
    dp[n][w] =max(Knapsack(n-1,w), Knapsack(n-1,w-wt[n-1]) + val[n-1]);
    return dp[n][w];
}

signed main(){

    rep(i,0,N){
        rep(j,0,N)
            dp[i][j] = -1;
    }
    int n;
    cin >> n;
    rep(i,0,n){
        cin >> wt[i];
    }

    rep(i,0,n)
        cin >> val[i];
    
    int w;
    cin >> w;

    cout << Knapsack(n,w) << endl; 
    return 0;
}
