class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;

        vector<int> mapStoT(256, 0);
        vector<int> mapTtoS(256, 0);

        int i = 0;

        while(i < s.size()) {
            char charS = s[i];
            char charT = t[i];;

            if(mapStoT[charS] == 0 && mapTtoS[charT] == 0) {
                mapStoT[charS] = t[i];
                mapTtoS[charT] = s[i];
            }
            else {
                if (mapStoT[charS] != charT || mapTtoS[charT] != charS)
                    return false;
            }
            i++;
        }
        return true;
    }
};