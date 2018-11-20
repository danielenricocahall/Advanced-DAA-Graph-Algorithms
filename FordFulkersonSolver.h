/*
 * FordFulkersonSolver.h
 *
 *  Created on: Nov 14, 2018
 *      Author: daniel
 */

#ifndef FORDFULKERSONSOLVER_H_
#define FORDFULKERSONSOLVER_H_

#pragma once
#include "MaxFlowSolver.h"
#include "Vertex.h"
#include "Graph.h"
class FordFulkersonSolver : public MaxFlowSolver
{
public:
	FordFulkersonSolver();
	virtual ~FordFulkersonSolver();
	void solveMaxFlow(const Graph& G, const int s, const int t);
	bool DFS(Graph& G_f, const int s, const int t, std::vector<int>& path);
};


#endif /* FORDFULKERSONSOLVER_H_ */
