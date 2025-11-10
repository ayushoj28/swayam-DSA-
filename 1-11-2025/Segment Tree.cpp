# include <iostream>
# include <vector>
using namespace std;

class SegmentTree
{
    vector<int>tree;  // segment tree
    vector<int>arr;   // array
    int n;            // size 0f array

    public:

    SegmentTree(vector<int>input){
        n=input.size();
        arr=input;
        tree.resize(4*n);
        build(0,0,n-1); //Segment tree  // root node index , start , end

    };

    void build(int node , int start , int end){
        // Base condition
        if(start==end)
        {
             tree[node]=arr[start];
             return ;
        }

        int mid = start+(end-start)/2;
        //left child
        build(2*node+1,start,mid);
        // right child
        build(2*node+2,mid+1,end);
        // sum of my left and right child 
        tree[node]=max(tree[2*node+1],tree[2*node+2]);
    }

    int range (int node , int start , int end , int left , int right)
    {
        // Fully out of range
        if(end<left || start>right)
        {
            return INT_MIN;
        }
        // Fully in the range
        if(start>= left && end<=right)
        {
            return tree[node];
        }
        // overlapping or partially in the range   
        int mid = start+(end-start)/2;
        //max of left child and right child;
        
        return  max(range (2*node+1,start,mid,left,right),range (2*node+2,mid+1,end,left,right));

    }

    int query(int left , int right) 
    {
        return range(0,0,n-1,left,right); //  Root node index(seg) , start , end , left ,right
    }
    void printt (vector<int>tree){
        for(int i=0;i<tree.size();i++){
            cout<<tree[i]<<" ";
        }
    }
    void print(vector<int>arr){
        printt(tree);
    }

    void updating(int node , int start , int end , int index , int val)
    {
        // Base condition
        if(index > end || index < start)
        {
            return ;
        }
        if(start==end)
        {
            tree[node]=val;
          //  arr[index] = val;
            return;
        }

        
        
        int mid =start+(end-start)/2;
        // left child
        updating(2*node+1,start,mid,index,val);
        // right child
        updating(2*node+2,mid+1,end,index,val);
        tree[node] =max(tree[2 * node + 1] , tree[2 * node + 2]);
    }

    void update(int index , int val){
        return updating(0,0,n-1,index , val);
        arr[index]=val;
    }
};

int main(){
   vector<int>arr;
   arr.push_back(3);
   arr.push_back(6);
   arr.push_back(4);
   arr.push_back(25);
   arr.push_back(5);
   arr.push_back(13);
   arr.push_back(18);

   SegmentTree *Tree = new SegmentTree(arr);
   Tree->print(arr);
   Tree->update(2,10);
   cout<<Tree->query(2,5)<<endl;
   return 0;
}
