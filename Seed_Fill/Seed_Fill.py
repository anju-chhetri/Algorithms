 
def initializer():  #function for initializing the array parameters
    mat =[
        [ 'Y', 'Y', 'Y', 'G', 'G', 'G', 'G', 'G', 'G', 'G' ],
        [ 'Y', 'Y', 'Y', 'Y', 'Y', 'Y', 'G', 'X', 'X', 'X' ],
        [ 'G', 'G', 'G', 'G', 'G', 'G', 'G', 'X', 'X', 'X' ],
        [ 'W', 'W', 'W', 'W', 'W', 'G', 'G', 'G', 'G', 'X' ],
        [ 'W', 'R', 'R', 'R', 'R', 'R', 'G', 'X', 'X', 'X' ],
        [ 'W', 'W', 'W', 'R', 'R', 'G', 'G', 'X', 'X', 'X' ],
        [ 'W', 'B', 'W', 'R', 'R', 'R', 'R', 'R', 'R', 'X' ],
        [ 'W', 'B', 'B', 'B', 'B', 'R', 'R', 'X', 'X', 'X' ],
        [ 'W', 'B', 'B', 'X', 'B', 'B', 'B', 'B', 'X', 'X' ],
        [ 'W', 'B', 'B', 'X', 'X', 'X', 'X', 'X', 'X', 'X' ]]
    #mat =[
        #['A','A','B'],
        #['A','B','B'],
        #['A','A','B']]
    height = len(mat)
    width =  len(mat[0])
    x = 0 #initial position
    y = 0                       #this algorithm takes three arguments target, replacement, initial position
    target_char = 'Y'
    replacement_char = 'O'
    print("Before: ")           #initial array
    call(mat, width, height)
    seed_fill(x, y, height, width, mat, target_char, replacement_char)  #implement algorithm
    print("After: ")        #After array
    call(mat, width, height)


def seed_fill(x, y, height, width, mat, target_char, replacement_char):
    if(x>=width or y>=height or x<0 or y<0):  #If the loop exceeds the four corner exit
        return
    if(mat[x][y] == target_char):       #If the position has target character replace it
        mat[x][y] = replacement_char
    else:
        return

    seed_fill(x-1, y, height, width, mat, target_char, replacement_char)        #check for neighbours
    seed_fill(x+1 ,y ,height, width, mat, target_char, replacement_char)
    seed_fill(x, y-1, height, width, mat, target_char, replacement_char)
    seed_fill(x, y+1, height, width, mat, target_char, replacement_char)

def call(mat, width, height):       #Print the array character
    for i in range(width):
        for j in range(width):
            print("{} ".format(mat[i][j]), end = '')
        print(end='\n')

if __name__ == "__main__":
    initializer()
