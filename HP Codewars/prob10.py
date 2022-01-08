a={}
a = input()
a=str(a)

if(len(a) < 1000 and len(a) > 0):
    
        
    for i in range(len(a)-1,0, -1):
        if(a[i] == "b"):
            for j in range(0,i):
                if(a[j]=="w"):
                    a[j] = "b"
                else:
                    a[j] = "w"
print (a)
