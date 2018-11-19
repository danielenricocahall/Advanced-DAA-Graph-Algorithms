/*
 * Driver.cpp
 *
 *  Created on: Nov 15, 2018
 *      Author: daniel
 */


#include "MaxFlowSolver.h"

#include "FordFulkersonSolver.h"
#include <iostream>

#include "EdmondsKarpSolver.h"
#include "Graph.h"

int main()
{
	MaxFlowSolver * FFSolver = new FordFulkersonSolver();
	MaxFlowSolver * EKSolver = new EdmondsKarpSolver();

	const Graph graph = {
			{0, 16, 13, 0, 0, 0},
            {0, 0, 0, 12, 0, 0},
            {0, 4, 0, 0, 14, 0},
            {0, 0, 9, 0, 0, 20},
            {0, 0, 0, 7, 0, 4},
            {0, 0, 0, 0, 0, 0}
          };




	std::cout << "Paths using Ford Fulkerson (DFS): " << std::endl;
	FFSolver->solveMaxFlow(graph, 0, 5);
	std::cout << "The maximum flow is " << FFSolver->getMaxFlow() << std::endl;
	std::cout << std::endl;

	std::cout << "Paths using Edmonds Karp (BFS): " << std::endl;
	EKSolver->solveMaxFlow(graph, 0, 5);
	std::cout << "The maximum flow is " << FFSolver->getMaxFlow() << std::endl;



	delete FFSolver;
	delete EKSolver;





}
