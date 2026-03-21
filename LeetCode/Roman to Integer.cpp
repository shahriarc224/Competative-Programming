class Solution {
public:
    int romanToInt(string s) {
        int n =s.size();

       int  result =0;
        for (int i=0 ; i<n ; i++){
          if(s[i]=='I') result+=1; 
          if(s[i]=='V') result+=5; 
          if(s[i]=='X') result+=10; 
          if(s[i]=='L') result+=50; 
          if(s[i]=='C') result+=100; 
          if(s[i]=='D') result+=500; 
          if(s[i]=='M') result+=1000; 
        }

        return result;
    }
};
