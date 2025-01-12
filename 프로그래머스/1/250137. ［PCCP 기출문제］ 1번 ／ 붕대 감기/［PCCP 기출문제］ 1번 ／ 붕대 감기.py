def solution(bandage, health, attacks):
    hp = health

    tick = 1
    for attack in attacks:
        attack_time, attack_damage = attack
        bandage_wrapping_time, healing_per_second, bonus_healing = bandage
        # 공격 받기 전 기본 붕대 체력 회복
        hp += (attack_time - tick) * healing_per_second
        # 공격 받기 전 붕대 다 감으면 보너스 회복
        hp += ((attack_time - tick) // bandage_wrapping_time) * bonus_healing

        tick = attack_time + 1
        # 최대체력 보정
        if hp >= health:
            hp = health

        # 공격 받기
        hp -= attack_damage
        # 사망
        if hp <= 0:
            return -1

    return hp
