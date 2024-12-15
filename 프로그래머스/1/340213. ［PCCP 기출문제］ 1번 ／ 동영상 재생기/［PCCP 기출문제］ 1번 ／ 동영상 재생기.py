def parseToSecond(time):
    [m, s] = time.split(":")
    s = int(s)
    s += int(m) * 60
    return s


def parseToTime(second):
    m = second // 60
    s = second % 60
    return f"{m:02}:{s:02}"


def solution(video_len, pos, op_start, op_end, commands):
    video_len_second = parseToSecond(video_len)
    pos_second = parseToSecond(pos)
    op_start_second = parseToSecond(op_start)
    op_end_second = parseToSecond(op_end)

    if op_start_second <= pos_second <= op_end_second:
        pos_second = op_end_second

    for command in commands:
        if command == "next":
            pos_second += 10
            if pos_second > video_len_second:
                pos_second = video_len_second
        else:
            pos_second = max(pos_second - 10, 0)

        if op_start_second <= pos_second <= op_end_second:
            pos_second = op_end_second

    return parseToTime(pos_second)