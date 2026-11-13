t = int(input())
 
for _ in range(t):
    s = input()
 
    increase = False
    decrease = False
 
    for i in range(1, len(s) - 1):
 
        if s[i - 1] == s[i] == s[i + 1]:
            increase = True
 
        if s[i - 1] == s[i + 1] and s[i] != s[i - 1]:
            decrease = True
 
    print(1 + increase + decrease)