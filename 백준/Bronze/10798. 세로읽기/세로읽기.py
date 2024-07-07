words = []

for _ in range(5):
    words.append(input())

for x in range(15):
    for y in range(5):
        if x < len(words[y]):
            print(words[y][x], end="")
