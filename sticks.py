num_sticks = input('Enter') ##IEEE EXTREME 
x =list()
if 1<= int(num_sticks)<= 10**50 :

    for num in range(int(num_sticks)) : 
        Ai = int(input('Enter Height:'))
        if 0<=Ai<= 10 **9: 
            x.append(Ai)
    y = min(x)
    for nos in x:
        if nos > y:
            nos  = nos -y
        elif nos == y:
            nos =0
        else :
            continue
       
   
    


