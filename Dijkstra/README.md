 Dijkstra Algorithm is a shortest path algorithm which was created and published by [Dr. Edsger W.Dijstra](https://en.wikipedia.org/wiki/Edsger_W._Dijkstra).

### Algorithm

1. Choose a node as a source from which the distance of other node's are to be calculated.
2. Create a set of visited nodes and assign a tentative distance to all the nodes: zero for source and infinity for other nodes.
3. Compute the distance from current node(which is the source node for the first iteration) to its unvisited neighbors. Once calculated add the current node to the visited set. A visited node will never be checked again.
4. Select the unvisited node with the minimum distance as the current node and follow the step 3.
5. If there are no unvisited nodes then the algorithm has finished.

A more detailed explanation can be found [here](https://www.freecodecamp.org/news/dijkstras-shortest-path-algorithm-visual-introduction/).
