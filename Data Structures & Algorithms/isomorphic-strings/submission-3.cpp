class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;

        vector<int> mapS(256, 0);
        vector<int> mapT(256, 0);

        int i = 0;

        while(i < s.size()) {
            char charS = s[i];
            char charT = t[i];;

            if(mapS[charS] == 0 && mapT[charT] == 0) {
                mapS[charS] = t[i];
                mapT[charT] = s[i];
            }
            else {
                if (mapS[charS] != charT || mapT[charT] != charS)
                    return false;
            }
            i++;
        }
        return true;
    }
};