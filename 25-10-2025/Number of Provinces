class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<bool>visited(V,0);
        int count=0;
        queue<int>q;
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                visited[i]=1;
                count++;
                q.push(i);
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(int j=0;j<isConnected[node].size();j++){
                        if(isConnected[node][j]==1){
                            if(!visited[j]){
                                visited[j]=1;
                                q.push(j);
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
