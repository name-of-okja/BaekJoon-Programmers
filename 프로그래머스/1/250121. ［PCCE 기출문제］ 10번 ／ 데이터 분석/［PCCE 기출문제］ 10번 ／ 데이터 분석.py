def solution(data, ext, val_ext, sort_by):
    # code, date, maximum, remain
    data_dic = [
        {"code": code, "date": date, "maximum": maximum, "remain": remain}
        for code, date, maximum, remain in data
    ]

    filter_data = [d for d in data_dic if d[ext] < val_ext]

    sorted_data = sorted(filter_data, key=lambda x: x[sort_by])

    return [[d["code"], d["date"], d["maximum"], d["remain"]] for d in sorted_data]
