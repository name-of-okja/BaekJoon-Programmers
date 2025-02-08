
def solution(name, yearning, photo):
    board = {name[i]: yearning[i] for i in range(0, len(name))}
    answer = [sum(board.get(n, 0) for n in p) for p in photo]
    return answer
