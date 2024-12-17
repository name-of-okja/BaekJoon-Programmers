
def solution(wallet, bill):
    answer = 0
    wallet_w, wallet_h = wallet
    bill_w, bill_h = bill

    def check(bw, bh):
        if wallet_w >= bw and wallet_h >= bh:
            return True
        if wallet_w >= bh and wallet_h >= bw:
            return True

        return False

    while True:
        if check(bill_w, bill_h):
            break

        if bill_w > bill_h:
            bill_w //= 2
        else:
            bill_h //= 2
        answer += 1

    return answer
