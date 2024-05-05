s = input()

li = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for c in li:
    s = s.replace(c, '*')

print(len(s))