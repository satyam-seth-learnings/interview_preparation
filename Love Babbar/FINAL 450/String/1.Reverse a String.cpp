// https://leetcode.com/problems/reverse-string/
// Logic-1
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++)
            swap(s[i],s[s.size()-i-1]);
    }
};
// Logic-2 Two Pointer Approach
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,h=s.size()-1;
        while(l<h)
        {
            swap(s[l],s[h]);
            l++;
            h--;
        }
    }
};