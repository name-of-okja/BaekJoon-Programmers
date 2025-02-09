def solution(diffs, times, limit):
    def used_time(idx, level):
        nonlocal diffs
        nonlocal times

        diff_levle = diffs[idx] - level

        return (
            (times[idx] + times[idx - 1]) * diff_levle + times[idx]
            if diff_levle > 0
            else times[idx]
        )

    left = 1
    right = max(diffs)

    while left <= right:
        mid = (left + right) // 2
        total = sum([used_time(i, mid) for i in range(0, len(diffs))])

        if total == limit:
            return mid
        elif total > limit:
            left = mid + 1
        else:
            right = mid - 1

    return left