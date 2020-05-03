#ifndef _AGENT_H_
#define _AGENT_H_

class agent
{

public:

    virtual void deplasare(int &nr_agenti, char h, int dim)=0;
    int getx(char** h,int dim, char tip)const;
    int gety(char** h,int dim, char tip)const;

};

#endif // _AGENT_H_
