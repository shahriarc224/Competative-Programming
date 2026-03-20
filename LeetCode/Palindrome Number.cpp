class Solution {
public:
    bool isPalindrome(int x) {
        string a =to_string(x);
        string dup=a;
          reverse(dup.begin(),dup.end());
           if (dup==a) return true;
            else return false;
        
    }
};
