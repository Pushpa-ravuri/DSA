<<<<<<< HEAD
class Solution {
public:
    int countBinarySubstrings(string s) {
        int p=0,c=1,cnt=0;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) c++;
            else{
                cnt +=min(p,c);
                p=c;
                c=1;
            }
        }
        cnt +=min(p,c);
        return cnt;
    }
=======
class Solution {
public:
    int countBinarySubstrings(string s) {
        int p=0,c=1,cnt=0;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) c++;
            else{
                cnt +=min(p,c);
                p=c;
                c=1;
            }
        }
        cnt +=min(p,c);
        return cnt;
    }
>>>>>>> 3b404d1a99860cf60c25ec9d402feaba5a2bcc36
};