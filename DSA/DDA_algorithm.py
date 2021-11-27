#Line drawing using DDA algorithm
import numpy as np
grid = np.zeros((10,10))
print("X represents the vertical segment and Y represents the horizontal segment ")
x1 = int(input('x1: ')) -1              # taking input from user
y1 = int(input("y1: ")) -1
x2 = int(input('x2: ')) -1
y2 = int(input("y2: ")) -1
if(y1>=y2 and x1>=x2):      # if the user gives both higher points as first input then replace the coordinates
    temp1 , temp2 = x1, y1
    x1, y1, x2, y2= x2,  y2, temp1, temp2
delx = x2 - x1      #calculating the difference
dely = y2 - y1
if(dely == 0):      #if slope is zero i.e dely=0
    m=0
elif(delx == 0):        #if the slope is infinity i.e delx = 0 directly plot the values as calculation with inifity as a value is not possible
    for i in range(y1,y2+1):
        grid[x1][i] = 1
    print(grid)
    exit(0)

else:   #if slope is a non zero or non inifinte value
    m = abs(dely/delx)

if(m>=1):   #   testing for two conidtion abs(slope)> 1 or for less than 1. to take the axis with greater difference value
    if(dely<0):     #if the points start from top to bottom
        while(y1>=y2):
            grid[round(x1)][y1] = 1
            y1-=1
            x1 = x1+(1/m)
    if(delx<0): #if the points start from right to left
        while(y1<=y2):
            grid[round(x1)][y1] = 1
            y1+=1
            x1 = x1-(1/m)
    else:   #if both the points are start from left to right and bottom to top
        while(y1<=y2):
            grid[round(x1)][y1] = 1
            y1+=1
            x1 = x1+(1/m)

else:
    if(dely<0):             #if the points start from top to bottom
        while(x1<=x2):
            grid[x1][round(y1)] = 1
            y1 = y1- m
            x1 +=1
    if(delx<0):                     #if the points start from right to left
        while(x1>=x2):
            grid[x1][round(y1)] = 1
            y1=y1+m
            x1 -=1
    else:                           #if both the points are start from left to right and bottom to top
        while(x1<=x2):
            grid[x1][round(y1)] = 1
            y1=y1+m
            x1 += 1
print("After the algorithm: ")
print(grid)
