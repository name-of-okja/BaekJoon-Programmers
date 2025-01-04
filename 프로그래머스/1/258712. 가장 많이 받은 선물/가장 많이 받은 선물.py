class GiftData:
    def __init__(self, me, friends):
        self.me = me
        self.friends = {
            friend: GiftData.SendGet() for friend in friends if me != friend
        }
        self.total = GiftData.SendGet()

    @property
    def giftIndex(self):
        return self.total.send - self.total.get

    class SendGet:
        def __init__(self):
            self.send = 0
            self.get = 0


def solution(friends, gifts):
    gift_datas = {friend: GiftData(friend, friends) for friend in friends}

    for gift in gifts:
        send, get = gift.split()
        send_friend = gift_datas[send]
        send_friend.total.send += 1
        send_friend.friends[get].send += 1
        get_friend = gift_datas[get]
        get_friend.total.get += 1
        get_friend.friends[send].get += 1

    max_count = 0
    for gift_data in gift_datas.values():
        gift_count = 0
        for friend, data in gift_data.friends.items():
            if data.send > data.get:
                gift_count += 1
            elif data.send == data.get:
                if gift_data.giftIndex > gift_datas[friend].giftIndex:
                    gift_count += 1
        max_count = max(max_count, gift_count)

    return max_count
