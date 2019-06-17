# Ford-Fulkerson-and-Edmonds-Karp-Implementation

The Ford-Fulkerson method is a solution to the maximum flow problem, which requires optimizing (maximizing) the flow from a source node s to a sink node t, with a few assumptions:
* s produces material at a constant rate, and t consumes material at the same rate
* The flow between any two nodes in the network (u, v) is the rate at which material moves 


The problem is fairly generic, as the term "material" can represent a variety of things:

* Packets through a communication network
* Vehicles through a transportation route
* Fluid through pipes

## Ford-Fulkerson Overview ##

* As long as a path exists from s to t where each edge has a nonzero capacity (also called an augmenting path), send flow through the path
* The amount of flow which can be sent through the path will be limited by the edge with the lowest capacity
* Update the capacity of all edges on the path to reflect that flow
* Repeat until no more available paths exist
* The accumulation of all flows sent is the maximum flow

## Approach ## 

Ford-Fulkerson is considered a method rather than an algorithm, because it encompasses several different implementations.
In that sense, it’s more of a framework, where the method of finding each path can be defined differently. 
In this implementation, I used a breadth first search (BFS) for finding each augmenting path, which is the Edmunds-Karp approach.

* This ensures that the shortest available path is used on each iteration
* Note: you could apply something like Kruskal’s 
* Paper: https://web.eecs.umich.edu/~pettie/matching/Edmonds-Karp-network-flow.pdf

