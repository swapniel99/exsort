/*
 * header.h
 *
 *  Created on: 16-Aug-2013
 *      Author: swapniel
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

#define K 31				// K way merge can b tweaked from here.

using namespace std;

typedef struct _node
{
	void* record;
	int blkno;
}node;

#endif /* HEADER_H_ */
