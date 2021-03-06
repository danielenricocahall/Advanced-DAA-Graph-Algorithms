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

#include "Graph.h"
class FordFulkersonSolver : public MaxFlowSolver
{
public:
	FordFulkersonSolver();
	virtual ~FordFulkersonSolver();
	virtual void solveMaxFlow(const Graph& G, const int s, const int t);
	bool DFS(const Graph& G_f, const int s, const int t, std::vector<int>& path);
};


#endif /* FORDFULKERSONSOLVER_H_ */
