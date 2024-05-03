s = input()

l = 0
r = len(s) - 1
result = 1

while l < r:
    if s[l] != s[r] :
        result = 0
        break
    l += 1
    r -= 1
    
print(result)        