import BinaryAddition as ad

def subtraction(num1, num2):
    num2After = comple2(num2)
    result = ad.add(num1, num2After)
    #if(len(num2) > len(result) ):
        #for i in range(len(num2)-len(result)):
            #result = '0' + result
        #return result
    if len(result)>len(num1):
        return result[1:]
    else:
        return result

def NOT(val):
    if val == '1':
        return str(0)
    else:
        return str(1)
def comple2(num2):
    strNum2 = ''
    for i in range(len(num2)):
        strNum2 =  strNum2 + NOT(num2[i])
    #while(True):
        #val = NOT(intNum2 % 10)
        #strNum2+=val
        #intNum2 = int(intNum2/10)
        #if(intNum2==0):
            #break
    #strNum2 = strNum2[::-1]
    num2After = ad.add(strNum2,'1')
    return num2After

if __name__ =="__main__":
    num1 = input("Enter num1: ")
    num2 = input("Enter num2: ")
    result = subtraction(num1, num2)
    print(result)
