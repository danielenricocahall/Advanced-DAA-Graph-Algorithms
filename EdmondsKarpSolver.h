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
	virtual void solveMaxFlow(const Graph& G, const int s, const int t);
	bool BFS(const Graph& G_f,
			const int s,
			const int t,
			std::vector<int>& path);

};


#endif /* EDMONDSKARPSOLVER_H_ */
