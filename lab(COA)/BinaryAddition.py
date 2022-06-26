
def add(num1,num2):
    forEnd = ""
    if(len(num1)>len(num2)):
        for i in range(len(num1)-len(num2)):
            num2='0' + num2
        forEnd = num1
    else:
        for i in range(len(num2)-len(num1)):
            num1 = '0' + num1
        forEnd = num2
    carry =0
    num1 = int(num1)
    num2 = int(num2)
    output = ""
    forEnd = int(forEnd)
    while(True):
        a = num1%10
        b = num2%10
        s = (a+b+carry)%2
        carry = int((a+b+carry)/2)
        #print(f'a:{a} b:{b} carry:{carry}')
        output +=str(s)
        if(int(forEnd/10) == 0):
            break
        num1 = int(num1/10)
        num2 = int(num2/10)
        forEnd = int(forEnd/10)
    if carry==1:
        output +=str(carry)
    final = ""
    for i in range(len(output)-1,-1,-1):
        final+=output[i]
    return final

if __name__ =="__main__":
    num1 = input("Enter num1: ")
    num2 = input("Enter num2: ")
    result = add(num1, num2)
    print(result)


#print(add("1100", "11"))
