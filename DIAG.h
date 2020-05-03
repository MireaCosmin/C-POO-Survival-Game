#ifndef _DIAG_H_
#define _DIAG_H_

#include <iostream>

#include "agent.h"

using namespace std;

class DIAG :public agent
{
public:
    void deplasare(int &nr_agenti, char** h, int dim);
};

#endif // _DIAG_H_
