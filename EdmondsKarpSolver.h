/*
 * FordFulkersonSolver.h
 *
 *  Created on: Nov 14, 2018
 *      Author: daniel
 */

#ifndef EDMONDSKARPSOLVER_H_
#define EDMONDSKARPSOLVER_H_


#pragma once
#include "MaxFlowSolver.h"

class EdmondsKarpSolver : public MaxFlowSolver
{
public:
	EdmondsKarpSolver();
	virtual ~EdmondsKarpSolver();
	void solveMaxFlow(const Graph& graph, const int s, const int t);
	bool BFS(const Graph& resGraph,
			const int s,
			const int t,
			std::vector<int>& path);

};


#endif /* EDMONDSKARPSOLVER_H_ */
