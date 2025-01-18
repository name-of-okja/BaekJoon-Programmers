def solution(board, h, w):
    answer = 0
    max_idx = len(board)
    target_color = board[h][w]

    # 동서남북
    if w + 1 < max_idx and board[h][w + 1] == target_color:
        answer += 1

    if w - 1 >= 0 and board[h][w - 1] == target_color:
        answer += 1

    if h + 1 < max_idx and board[h + 1][w] == target_color:
        answer += 1

    if h - 1 >= 0 and board[h - 1][w] == target_color:
        answer += 1

    return answer
