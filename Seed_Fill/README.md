# Seed Fill/ Flood Fill algorithm
  [Seed fill](https://en.wikipedia.org/wiki/Flood_fill) also known as flood fill algorithm is an algorithm which change/modify the neighbour of the selected node if the neighbour node has the same attribute as that of the selected node.
  This algorithm is used in the "bucket" fill tool of the paint program.
  
  Parameters used: Start point, taget character, replacement character
  ## Algorithm
  1.  Select a start postion, target character and a replace character.
  2.  If the current position(which is the start position initially) match the target character, replace it with replace character and perform step 3. If it does not match then stop the algorithm for that node.
  3.  As per the requirement of the program (go in 4 directions or 8 directions), set the neighbour node as current node and perform step 2. This should be done for all the neighbour nodes one at a time.
  4.  The program will be terminated if all the connected nodes with target character are visited and replaced.
