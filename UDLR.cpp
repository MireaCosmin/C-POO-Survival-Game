#include <iostream>
#include <stdlib.h>
#include <time.h>


#include "UDLR.h"
#include "harta.h"

using namespace std;

void UDLR::deplasare(int &nr_agenti, char** h, int dim)
{
    int i,j;
    bool flag=0;
    char tip='a';
    int coord_x=-1,coord_y=-1;
    int directie;

    coord_x=getx(h,dim,tip);
    coord_y=gety(h,dim,tip);

    //srand(time(0));



    if(coord_x==-1&&coord_y==-1)
            cout<<"Eroul nu s-a gasit"<<endl;

    else if(coord_x==0)
    {
        h[coord_x][coord_y]='.';
        coord_x=coord_x+1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
    }
    else if(coord_y==0)
    {
        h[coord_x][coord_y]='.';
        coord_y=coord_y+1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
    }
    else if(coord_x==dim-1)
    {
        h[coord_x][coord_y]='.';
        coord_x=coord_x-1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
    }
    else if(coord_y==dim-1)
    {
        h[coord_x][coord_y]='.';
        coord_y=coord_y-1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
    }
    else {

    h[coord_x][coord_y]='.';
    srand(time(0));
    directie=rand()%4;
    cout<<"Diretia: "<<directie<<endl;

    switch (directie){
    case 0:
        coord_x=coord_x-1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
        break;
    case 1:
        coord_y=coord_y+1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
        break;
    case 2:
        coord_x=coord_x+1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
        break;
    case 3:
        coord_y=coord_y-1;
        if(h[coord_x][coord_y]!='.'&&h[coord_x][coord_y]!='@')
        {
            cout<<"Conflict!";
            coord_x=-1;
            coord_y=-1;
            nr_agenti=nr_agenti-1;
        }
        else
            h[coord_x][coord_y]=tip;
        break;
    default:
        break;
    }
    }
/*
    if((h[coord_x+1][coord_y+1]=='@')||(h[coord_x-1][coord_y-1]=='@')||(h[coord_x+1][coord_y-1]=='@')||(h[coord_x-1][coord_y+1]=='@'))
    {
        cout<<"Agentul de tip : "<<tip<<" a gasit un item."<<endl;
        if(h[coord_x+1][coord_y+1]=='@')
        {
            h[coord_x+1][coord_y+1]=tip;
            h[coord_x][coord_y]='.';
        }
        else if(h[coord_x-1][coord_y-1]=='@')
        {
            h[coord_x-1][coord_y-1]=tip;
            h[coord_x][coord_y]='.';
        }
        else if(h[coord_x+1][coord_y-1]=='@')
        {
            h[coord_x+1][coord_y-1]=tip;
            h[coord_x][coord_y]='.';
        }
        else if(h[coord_x-1][coord_y+1]=='@')
        {
            h[coord_x-1][coord_y+1]=tip;
            h[coord_x][coord_y]='.';
        }
    }

    else
    {


        cout<<"Selectati o directie de mers:";
        cin>>directie;
        if(directie=='U')
        {
            h[coord_x-1][coord_y]=tip;
            h[coord_x][coord_y]='.';
        }
        else if(directie=='D')
        {
            h[coord_x+1][coord_y]=tip;
            h[coord_x][coord_y]='.';
        }
        else if(directie=='L')
        {
            h[coord_x][coord_y-1]=tip;
            h[coord_x][coord_y]='.';
        }
        else if(directie=='R')
        {
            h[coord_x][coord_y+1]=tip;
            h[coord_x][coord_y]='.';
        }
    }*/
}

