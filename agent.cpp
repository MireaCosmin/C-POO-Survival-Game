#include <iostream>

#include "agent.h"

using namespace std;


int agent::getx(char **h, int dim, char tip)const
{
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
        {if(h[i][j]==tip)
            {return i;
            break;}
        /*else
            return -1;*/}
}

int agent::gety(char **h, int dim, char tip)const
{
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
        {if(h[i][j]==tip)
            {return j;
            break;}
       /* else
            return -1;*/}
}

