

stackFull = False
listPages = [4,3,25,8,19,6,25,8,16,35,45,22,8,3,16,25,7]
BufferSize = 8#input("Buffer Size: ")
counter = 0
allData = {}

def increase(allData):
    for key in allData:
        allData[key]+=1
    return allData
for i in listPages:
    found = False
    maxCount = 0
    maxKey = -5
    for key in allData:
        if allData[key]>maxCount:
            maxCount = allData[key]
            maxKey = key
        if key == i:            #hit
            found = True
        if found:
            for keyUpdate in allData:
                if allData[keyUpdate] < allData[i]:
                    allData[keyUpdate] +=1
            allData[i] = 0
            break

    if(not found):
        if(not stackFull):
            allData[i] = -1
            counter +=1
            if(counter == BufferSize):
                stackFull = True

        else:   #Miss
            allData.pop(maxKey, None)
            allData[i] = -1

        allData = increase(allData)


block = 0
for i in allData:
    print(f"{i} : {allData[i]}")
    block+=1
