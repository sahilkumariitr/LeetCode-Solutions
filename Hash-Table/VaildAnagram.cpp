bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> y(26, 0);
        for(int i=0;i<s.length();i++) y[int(s[i])-97]+= 1;
        for(int i=0;i<s.length();i++) y[int(t[i])-97]-= 1;
        for(int i=0;i<26;i++)
        {if (y[i]!=0) return false;}
        return true;
    }
