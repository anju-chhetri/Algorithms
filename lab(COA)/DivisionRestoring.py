import BinaryAddition as ad
import BinarySubtraction as sub
def divide(dividend, divisor):
    A = ''
    for i in range(len(divisor)):
        A+='0'
  #  divisorcomp = comple2(divisor, len(dividend))
    count = len(dividend)
    n = len(dividend+A)
    Q = dividend
    I = A + dividend

    while(count!=0):
        I = bitShift(I)
        A = I[:len(divisor)]
        ASUB = sub.subtraction(A,divisor)
        A = ASUB[len(ASUB) - len(A):]
        print("SUB: ",A)
        ICopy = A + I[len(A):-1]
        if(ICopy[0] == '1' ):
            ICopy += '0'
            #print(ICopy)
            divcomp = comple2(dividend)
            addtemp= ad.add(A, divcomp)
            A = addtemp[len(addtemp) - len(A):]
        else:
            ICopy += '1'
        I = ICopy

        count -=1
    return (I[len(divisor):], I[:len(divisor)])

def NOT(val):
    if val == '1':
        return str(0)
    else:
        return str(1)
def comple2(num2):
    strNum2 = ''
    for i in range(len(num2)):
        strNum2 =  strNum2 + NOT(num2[i])
    num2After = ad.add(strNum2,'1')
    return num2After

def bitShift(val):
    valCopy = ''
    for i in range(len(val)-1):
        valCopy += val[i+1]
    return valCopy


if __name__ == "__main__":

    dividend = input("Enter the dividend: ")
    divisor = input("Enter the divisor: ")
    (Q,A) = divide(dividend, divisor)
    print(f"Quotient : {Q}\n Remainder : {A}")
