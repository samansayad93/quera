def calculate_floor(string):
    count=0
    for i in string:
        if i == 'U':
            count += 1
        if i == 'D':
            count -= 1
    return count