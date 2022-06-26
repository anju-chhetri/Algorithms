#import LAB1BinaryAddition
#def multi(num1, num2):
    #Inum1 = int(num1)
    #Inum2 = int(num2)
    #storage = []
    #for i in range(len(num2)-1,-1,-1):
        #a = ""
        #for k in range(len(num1)):
            #a += str(int(num2[i]) * int(num1[k]))
        #for j in range(len(num1)-1):
            #a +='0'
        #storage.append(a)
    #for i in storage:
        #print(i)
    #val = '000'
    #for i in range(len(storage)):
        #val = LAB1BinaryAddition.add(str(storage[i]), val)
    #return val

#num1 = input("Enter val1: ")
#num2 = input("Enter val2: ")
#val = multi(num1, num2)
#print(val)
import BinaryAddition
def multi(num1, num2):
    Inum1 = int(num1)
    Inum2 = int(num2)
    storage = []
    for i in range(len(num2)):
        a = Inum1 * int(num2[len(num2)-1-i])
        a = str(a)
        for k in range(i):
            a+='0'
        storage.append(a)
    noZero = []
    for j in storage:
        if(int(j)!=0):
            noZero.append(j)

    if len(noZero)==1:
        return noZero[0]
    val = BinaryAddition.add(str(noZero[1]), str(noZero[0]))

    for i in range(2,len(noZero)):
        val = BinaryAddition.add(str(noZero[i]), val)
    return val

num1 = input("Enter val1: ")
num2 = input("Enter val2: ")
val = multi(num1, num2)
print(val)
