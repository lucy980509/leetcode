class Solution {
public:
    void reverseString(vector<char>& s) {

        int i = s.size() / 2;
        int j = 0;


        while(j < i){

            swap(s[j],s[s.size()-1-j]);
            
            j++;

        }
    }
};
