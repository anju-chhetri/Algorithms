
def dijkstra():
    number_of_node = 7
    path =  [[0,2,6,-1,-1,-1,-1],#A    weights of path
            [2,0,-1,5,-1,-1,-1], #B
            [6,-1,0,8,-1,-1,-1], #C
            [-1,5,8,0,10,15,-1], #D
            [-1,-1,-1,10,0,6,2], #E
            [-1,-1,-1,15,6,0,6], #G
            [-1,-1,-1,-1,2,6,0]]  #H

    visited_index = []
    comp_arr = [0,9223372036854775807,9223372036854775807,9223372036854775807,9223372036854775807,9223372036854775807,9223372036854775807] #assigning infinite value to nodes
    computed_node= {}
    for i in range(comp_arr.__len__()): #creating key, value pair of node cost
        computed_node[i] = comp_arr[i]
    index=0
    while(True):    #starting main loop
        for i in range(number_of_node):
            visit_mark = 't'
            for visited_list in visited_index:
                if i == visited_list:       #if the node is visited don't compute for it
                    visit_mark = 'f'
            if(i!=index and path[i][index] !=-1 and visit_mark =='t') : #NODE cannot be itself nither it can be unreachable nor  it can be the visited one
                temp = path[i][index] + computed_node[index]
                if(temp<computed_node[i]):                          # if the current node cost is less than the prev. one change
                    computed_node[i] = temp
        visited_index.append(index)                 #create a list of visited node
        if(visited_index.__len__() == number_of_node):          # if all node are visited exit
            break
        sorted_nodes_distances = sorted(computed_node.items(), key = lambda x:x[1],reverse = False)  #sort the node by distances
        j=0;
        for_Smallest_Search = True
        while(for_Smallest_Search):         #find the unvisited node with smallest cost
            for_Smallest_Search = False
            index = (sorted_nodes_distances[j])[0] #assume the current smallest to be the index, it will be checked in for loop.
            for i in visited_index: #check if the current smallest node is visited
                if index == i:
                    j+=1
                    for_Smallest_Search =True
                    break
    for key,value in computed_node.items():
        print("{} : {}".format(key+1, value))

if __name__ == "__main__":
    dijkstra()
