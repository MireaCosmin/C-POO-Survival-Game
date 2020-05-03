#ifndef _ALLDIR_H_
#define _ALLDIR_H_

#include <iostream>

#include "agent.h"

using namespace std;

class ALLDIR : public agent
{
public:
    void deplasare(int &nr_agenti, char** h, int dim);
};

#endif // _ALLDIR_H_
