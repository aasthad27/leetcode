class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stack;
        
        for(int i=0;i<path.length();i++){
            if(path[i]!='/'){
                int a=i;
                while(i<path.length() && path[i]!='/') i++;                        
                string str=path.substr(a,i-a);
                if(str==".." && !stack.empty())
                    stack.pop();
                else if(str!="." && str!=".." && str!=",") 
                    stack.push(path.substr(a,i-a));
            }
        }
        
        if(stack.empty()) return "/";
        
        string res="";
        while(!stack.empty()){
            res="/"+stack.top()+res;
            stack.pop();
        }
        
        return res;
    }
};

