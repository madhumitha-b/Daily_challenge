class Solution {
public:
    int maxDepth(string s) {
        
        stack<char> stk;

        int n=s.length();
        int i=0;
        int cnt=0;
        int max=INT_MIN;

        while(i<n){

            if(s[i]=='('){
                stk.push(s[i]);
                cnt=stk.size();
                if(cnt>max)
                max=cnt;
            }
            else if(s[i]==')'){
                stk.pop();
            }
            i++;
        }

        if(stk.empty()){
            if(max>0)
        return max;
        else 
        return 0;
        }
        return -1;
    }
};
