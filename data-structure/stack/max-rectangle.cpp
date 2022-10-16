
class Solution{
 public:
   void ngl(vector<int> &v,vector<int>&l ,int n){
       stack<pair<int,int>> st;
       l.push_back(-1);
       st.push(make_pair(v[0],0));
       int i = 1;
       while(!st.empty() && i<n){
           int curr = v[i];
           if(st.top().first < curr){
               l.push_back(st.top().second);
               st.push(make_pair(curr,i));
               i++;
           }
           else{
               st.pop();
               if(st.empty()){
                   l.push_back(-1);
                   st.push(make_pair(curr,i));
                   i++;
               }
           }
       }
   }
   void ngr(vector<int> &v,vector<int>&l ,int n){
       stack<pair<int,int>> st;
       l.push_back(n);
       st.push(make_pair(v[n-1],n-1));
       int i = n-2;
       while(!st.empty() && i>=0){
           int curr = v[i];
           if(st.top().first < curr){
               l.push_back(st.top().second);
               //l[i] = st.top().second;
               st.push(make_pair(curr,i));
               i--;
           }
           else{
               st.pop();
               if(st.empty()){
                   l.push_back(n);
                  // l[i] = n;
                   st.push(make_pair(curr,i));
                   i--;
               }
           }
       }
       reverse(l.begin(),l.end());
   }
   int MAH(vector<int> &v , int n){
       vector<int> l;
       vector<int> r;
       ngl(v,l,n);
       ngr(v,r,n);
       int ans = 0;
       for(int i=0;i<n;i++){
           //cout<<r[i]<<"--"<<l[i]<<" ";
           ans = max(ans,(r[i]-l[i]-1)*v[i]);
       }
       return ans;
   }
   int maxArea(int M[MAX][MAX], int n, int m) {
       int ans = 0;
       vector<int> sum(m,0);
       for(int i=0;i<n;i++){
           vector<int> v;
           for(int j=0;j<m;j++){
               if(M[i][j] == 0){
                   sum[j] = 0;
               }
               else{
                   sum[j] = sum[j] + M[i][j];
               }
               v.push_back(sum[j]);
           }
           int a = MAH(v,m);
           //cout<<a<<"\n";
           //ans.push_back(a);
           ans = max(ans,a);
       }
       return ans;
       
   }
};
