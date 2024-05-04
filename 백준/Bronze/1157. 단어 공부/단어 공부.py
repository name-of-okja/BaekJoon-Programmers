s = input().upper()

s_list = list(set(s))

li = []
for c in s_list:
    li.append(s.count(c))

if li.count(max(li)) > 1:
    print("?")
else:
    print(s_list[li.index(max(li))])