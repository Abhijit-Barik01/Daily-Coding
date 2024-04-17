def isIsomorphic(s,t):
        map=dict()
        map1=dict()
        if len(s) !=len(t):
            return False
        for i in range(0,len(s)):
            map[s[i]]=+1
            map1[t[i]]=+1
        for i in range(0,len(s)):
            print(map[s[i]])
            print(map1[t[i]])
            if(map[s[i]] !=map1[t[i]]):
                return False
        return True
print(isIsomorphic("foo","bar"))