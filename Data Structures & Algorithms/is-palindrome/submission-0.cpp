class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char c:s){
            if(isalnum(c)) str+=tolower(c);
        }
        string temp=str;
        reverse(temp.begin(),temp.end());
        return str==temp;
    }
};
