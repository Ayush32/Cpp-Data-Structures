s = "this is crazy fun"

l = ["is", "fun"]
a = s.title()

for i in range(0,len(a)):
    if(a[i] in l[0] or a[i] in l[1]):
       a.casefold()
        
print(a)