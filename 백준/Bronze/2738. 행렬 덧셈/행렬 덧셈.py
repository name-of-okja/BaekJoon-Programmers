y, x = map(int, input().split())

a, b = [], []

for i in range(y):
    a.append(list(map(int, input().split())))

for i in range(y):
    b.append(list(map(int, input().split())))

for row in range(y):
    for col in range(x):
        print(a[row][col] + b[row][col], end= ' ')
    print( )