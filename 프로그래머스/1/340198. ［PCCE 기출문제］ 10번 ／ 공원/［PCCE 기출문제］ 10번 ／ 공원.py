def solution(mats, park):

    def check(mat, pos):
        [x, y] = pos
        if x + mat > len(park[0]):
            return False
        if y + mat > len(park):
            return False
        for i in range(x, x + mat):
            for j in range(y, y + mat):
                if park[j][i] != "-1":
                    return False
        return True

    for mat in sorted(mats, reverse=True):
        for i in range(len(park[0])):
            for j in range(len(park)):
                if check(mat, [i, j]):
                    return mat
    return -1
