def solution(players, callings):
    answer = players[:]
    board = {name: idx for idx, name in enumerate(players)}

    for c in callings:
        rank = board[c]
        prev = answer[rank - 1]

        answer[rank], answer[rank - 1] = answer[rank - 1], answer[rank]
        board[c] -= 1
        board[prev] += 1

    return answer
