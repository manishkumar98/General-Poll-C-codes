#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int s,len,n,m,v,u;
int value[2000] = {0},adj[1000][1000],vis[1000] = {0};
 void dfs(int i){

    vis[i] = 1;
    for(int j = 0;j<n;j++){
        if((adj[i][j]==1||adj[j][i]==1)&& !vis[j]){
            len++;
            dfs(j);
        }

    }

}
int main(){
    scanf("%d %d",&n,&m);
    for(int i = 0;i<m;i++)
    {
        scanf("%d %d",&v,&u);
        adj[v][u] = 1;
        adj[u][v] = 1;
    }
    scanf("%d",&s);
    for(int i= 0;i<n;i++)
    {
        if(i==s)
            continue;

        if(i!=s){
            for(int j = 0;j<n;j++)
            {

                if(adj[i][j]==1){
                    adj[i][j] = 0;
                    adj[j][i] = 0;

                }

                dfs(s);
                value[i] = len;
                len = 0;
                memset(vis,0,1000*sizeof(vis[0]));
            }
        }
    }
    int index = 0,min = 9999;
    for(int i = 0;i<n;i++){
        if(min>value[i]&&i!=s){
            min = value[i];
            index = i;}

    }
    printf("%d",index);
    return 0;
}