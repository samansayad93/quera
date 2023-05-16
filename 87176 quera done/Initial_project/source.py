def game(number):
    a = int(number%10)
    b = int(number//10)
    if(a > b):
        return a-b
    else:
        return b-a
