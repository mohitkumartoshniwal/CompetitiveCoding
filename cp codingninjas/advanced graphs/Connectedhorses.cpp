//       //SIMILAR PROBLEM AS LARGEST PIECE IN GRAPH 2 SECTION 
//     #include<bits/stdc++.h>
//     using namespace std;
//     #define mod  1000000007
//     #define ll long long
     
//     ll incx[]={-2,-1,1,2,2,1,-1,-2};
//     ll incy[]={1,2,2,1,-1,-2,-2,-1};//store the 8 directions 
     
//     ll board[1005][1005];
//     ll visited[1006][1006];
     
//     ll factorial(ll n)//CALCULATE FACTORIAL
//     {
//         ll s=1; 
//         for(ll i=2;i<=n;i++)
//         {
//         	s=(s*i)%mod;
//         }
//         return s;
//     }
     
//     ll outside(ll i,ll j,ll n,ll m)//CHECK THE BOUNDARIES
//     {
//         if(i>=1 && j>=1 && i<=n && j<=m)
//             return 1;
//         else 
//             return 0;
//     }
     
//     ll dfs(ll i,ll j,ll n,ll m)
//     {
//         ll s=1;
//         visited[i][j]=1;
//         for(int k=0;k<8;k++)
//         {
//             int x=i+incx[k];
//             int y=j+incy[k];
//             if(board[x][y]==1 && !visited[x][y])
//             {
                
//                 //cout<<x<<" " <<y<<endl;
//                 s+=dfs(x,y,n,m);
//             }
//         }
//         //cout<<"s: "<<s<<endl;
//         return s;
//     }
//     int main()
//     {
//         ll n,m,q,t;
//         cin>>t;
//         while(t--)
//         {
//             cin>>n>>m>>q;
//             memset(board,0,sizeof(board));
//             memset(visited,0,sizeof(visited));
//             while(q--)
//             {
//                 ll a,b;
//                 cin>>a>>b;
//                 board[a][b]=1;//MARKING THE POSITION OF HORSES
//             }
//             ll sum=1;
//             ll x;
//             for(ll i=1;i<=n;i++)
//             {
//                 for(ll j=1;j<=m;j++)
//                 {
//                     if(board[i][j]==1 && !visited[i][j])
//                     {
//                         x=dfs(i,j,n,m);//RUNS ON EVERY POSITION WHERE HORSE IS PRESENT AND NOT VISITED WHICH MAINTAINS COMPONENTS
//                         sum=(sum*factorial(x))%mod;
//                     }
//                 }
//             }
//             cout<<sum<<endl;
//         }
//     }
     
     

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int ad[1003][1003];
int factorial[1000003];
int n,m;
int visit[1003][1003];
int dir [8][2] = { {2 , 1}, {2 , -1}, {-2 , 1}, {-2, -1}, {1 , 2}, {1 , -2}, {-1, 2}, {-1, -2} };
long long sol(int a, int b){
    visit[a][b] = 1;
    long long count =1;
    queue <pair<int ,int > > q;
    q.push(make_pair(a,b));
    while(!q.empty()){
        a = q.front().first;
        b = q.front().second;
        q.pop(); 
        for(int i = 0; i < 8; i++){
            int x = a + dir[i][0];
            int y = b + dir[i][1];
            if(x <= 0 || x > n || y <= 0 || y > m) continue; 
            if(ad[x][y]==3 and !visit[x][y]){
                count++;    
                q.push(make_pair(x,y));
                visit[x][y]=1;
            }
            
            
        }
        
    }
    return count;
}
void initialize(){
    for(int i=0;i<1003;i++){
        for(int j=0;j<1003;j++){
            ad[i][j]=1;
            visit[i][j]=0;
        }
    }
}
int main()
{
    int t,q;
    cin>>t;
    factorial[0] = 1;
    for(long long i = 1; i <= 1e6; i++){
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    while(t--){
        initialize();
        cin>>n>>m>>q;
        int x,y;
        while(q--){
            cin>>x>>y;
            ad[x][y] = 3;
        }
        long long c ;
        long long ans = 1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(ad[i][j]==3 and !visit[i][j]){
                    c=sol(i,j);
                    ans = (ans*factorial[c])%MOD;
                }
            }
        }
        cout<<ans%MOD<<"\n";
    }
    return 0;
}