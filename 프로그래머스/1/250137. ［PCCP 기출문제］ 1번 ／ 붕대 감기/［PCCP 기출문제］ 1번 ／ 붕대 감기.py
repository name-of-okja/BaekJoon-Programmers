
def solution(bandage, health, attacks):
    answer = health
    bandage_time, hp, hp2 = bandage
    tick = 0
    for attack in attacks:
        attack_time, damage = attack
        bandage_hp_count = 0

        while tick < attack_time:
            answer += hp
            bandage_hp_count += 1
            tick += 1

            if bandage_hp_count == bandage_time:
                answer += hp2
                bandage_hp_count = 0

            if answer > health:
                answer = health

        answer -= damage
        tick += 1
        if answer <= 0:
            return -1

    return answer
