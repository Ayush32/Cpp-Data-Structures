def removechar(s,c):
    count  = s.count(c)
    s = list(s)
    while count:
        s.remove(c)
        count -= 1
        
    s = ''.join(s)
    return s

s = input()
c = input()
print(removechar(s,c))