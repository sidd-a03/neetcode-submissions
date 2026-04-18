class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;

        for(string str: emails) {
            string temp = "";
            int flag = 0;
            for(char ch: str) {
                if(ch == '+')
                    flag++;
                else if(ch == '@')
                    flag = -1;
                
                if(flag == 0 && ch != '.')
                    temp += ch;
                else if(flag == -1)
                    temp += ch;
            }
            uniqueEmails.insert(temp);
        }
        return uniqueEmails.size();
    }
};