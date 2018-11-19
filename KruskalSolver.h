/*
 * KruskalSolver.h
 *
 *  Created on: Nov 18, 2018
 *      Author: daniel
 */

#ifndef KRUSKALSOLVER_H_
#define KRUSKALSOLVER_H_

#include "MinimumSpanningTreeSolver.h"
class KruskalSolver : public MinimumSpanningTreeSolver
{
public:
	KruskalSolver();
	virtual ~KruskalSolver();
	virtual void solveMinimumSpanningTree(const Graph& graph);

};


#endif /* KRUSKALSOLVER_H_ */
