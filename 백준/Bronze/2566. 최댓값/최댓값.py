arr = [list(map(int, input().split())) for _ in range(9)]

max_value = 0
y, x = 0, 0
for i in range(9):
    for j in range(9):
        if max_value <= arr[i][j]:
            y = i + 1
            x = j + 1
            max_value = arr[i][j]

print(max_value)
print(y, x)