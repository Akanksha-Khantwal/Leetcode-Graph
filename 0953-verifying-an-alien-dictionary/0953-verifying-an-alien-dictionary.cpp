class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        vector<int> pos(26);
        for (int i = 0; i < order.size(); i++) {
            pos[order[i] - 'a'] = i;
        }

        
        for (int i = 0; i < words.size() - 1; i++) {
            string w1 = words[i];
            string w2 = words[i + 1];

            int len = min(w1.size(), w2.size());
            bool different = false;

            for (int j = 0; j < len; j++) {
                if (w1[j] != w2[j]) {
                    if (pos[w1[j] - 'a'] > pos[w2[j] - 'a'])
                        return false;
                    different = true;
                    break;
                }
            }

            
            if (!different && w1.size() > w2.size())
                return false;
        }

        return true;
    }
};
