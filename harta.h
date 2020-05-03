#ifndef _HARTA_H_
#define _HARTA_H_

#include "agent.h"
#include "ALLDIR.h"
#include "UDLR.h"
#include "DIAG.h"

class harta
{
    char **h;
    int dim,nr_agenti;
public:
    harta(int dim);
    void afisare_harta();
    void generare_itemi();
    int sfarsit_joc();
    void start_joc();
    void joc_runde(int runde);
};

#endif // _HARTA_H_
