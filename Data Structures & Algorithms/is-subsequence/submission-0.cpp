class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int i = 0, j = 0;

        if(n1 == 0)
            return true;
        
        while(j < n2) {
            if(s[i] == t[j]) {
                i++;
                j++;
            } else
                j++;
        }

        return i == n1;
    }
};

/*
s = "node" t = "neetcdoe"
n -> 1
o -> 1
d -> 1
e -> 1



*/