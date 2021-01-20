# multiplication table
x,y = map(int,input("Enter two num: ").split())
for i in range(1,x+1):
    for j in range(1,y+1):
        print(i,"*", j,i*j)
