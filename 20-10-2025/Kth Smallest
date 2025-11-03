// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int>m;
        for(int i=0;i<k;i++){
            m.push(arr[i]);
        }
        for(int i=k;i<n;i++){
            if(m.top()>arr[i]){
                m.pop();
                m.push(arr[i]);
            }
        }
        return m.top();
    }
};
