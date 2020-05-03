#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "harta.h"

using namespace std;

harta::harta(int dim)
{
    nr_agenti=3;
    this->dim=dim;
    delete []h;
    h=new char*[dim];
    for(int i=0;i<dim;i++)
        h[i]=new char[dim];
    for(int i=0;i<dim;i++)
        for(int j=0;j<dim;j++)
            h[i][j]='.';
    h[0][0]='a';
    h[2][3]='b';
    h[2][2]='c';
    /*h[0][0]='a';
    h[1][1]='a';
    h[2][2]='a';
    h[3][3]='a';
    h[4][4]='a';
    h[5][5]='a';
    h[6][6]='a';
    h[7][7]='b';
    h[8][8]='b';
    h[9][9]='b';
    h[10][10]='b';
    h[11][11]='b';
    h[12][12]='b';
    h[13][13]='b';
    h[14][14]='c';
    h[0][4]='c';
    h[14][0]='c';
    h[1][2]='c';
    h[10][7]='c';
    h[3][4]='c';
    h[8][9]='c';
*/

    cout<<"Am construit harta"<<endl;
}

void harta::afisare_harta()
{
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
            cout<<h[i][j]<<' ';
            cout<<endl;
    }

}

void harta::generare_itemi()
{
    int x,y;
    srand(time(0));
    for(int i=0;i<3;i++)
    {
    x=rand()%dim;
    y=rand()%dim;
    h[x][y]='@';
    cout<<"S-a generat item pe pozitia: "<<x<<','<<y<<endl;

    }

}

int harta::sfarsit_joc()
{
    if(nr_agenti<=1)
        return 0;
    return 1;
}

void harta::start_joc()
{
    cout<<"Jocul a inceput!"<<endl;
    //generare_itemi();
    cout<<"Harta initiala:"<<endl;
    afisare_harta();

    ALLDIR *agent1;
    UDLR *agent2;
    DIAG *agent3;
    /*ALLDIR *agent1;
    ALLDIR *agent2;
    ALLDIR *agent3;
    ALLDIR *agent4;
    ALLDIR *agent5;
    ALLDIR *agent6;
    ALLDIR *agent7;
    UDLR   *agent8;
    UDLR   *agent9;
    UDLR   *agent10;
    UDLR   *agent11;
    UDLR   *agent12;
    UDLR   *agent13;
    UDLR   *agent14;
    DIAG   *agent15;
    DIAG   *agent16;
    DIAG   *agent17;
    DIAG   *agent18;
    DIAG   *agent19;
    DIAG   *agent20;
    DIAG   *agent21;*/

    while(sfarsit_joc()==1)
    {
        agent1->deplasare(nr_agenti,h,dim);
        agent2->deplasare(nr_agenti,h,dim);
        agent3->deplasare(nr_agenti,h,dim);
        /*agent1->deplasare(nr_agenti,h,dim);
        agent2->deplasare(nr_agenti,h,dim);
        agent3->deplasare(nr_agenti,h,dim);
        agent4->deplasare(nr_agenti,h,dim);
        agent5->deplasare(nr_agenti,h,dim);
        agent6->deplasare(nr_agenti,h,dim);
        agent7->deplasare(nr_agenti,h,dim);
        agent8->deplasare(nr_agenti,h,dim);
        agent9->deplasare(nr_agenti,h,dim);
        agent10->deplasare(nr_agenti,h,dim);
        agent11->deplasare(nr_agenti,h,dim);
        agent12->deplasare(nr_agenti,h,dim);
        agent13->deplasare(nr_agenti,h,dim);
        agent14->deplasare(nr_agenti,h,dim);
        agent15->deplasare(nr_agenti,h,dim);
        agent16->deplasare(nr_agenti,h,dim);
        agent17->deplasare(nr_agenti,h,dim);
        agent18->deplasare(nr_agenti,h,dim);
        agent19->deplasare(nr_agenti,h,dim);
        agent20->deplasare(nr_agenti,h,dim);
        agent21->deplasare(nr_agenti,h,dim);*/
        cout<<"Numar de agenti ramasi: "<<nr_agenti<<endl;
        afisare_harta();
    }
    cout<<"Joc terminat!"<<endl;
    afisare_harta();
}

void harta::joc_runde(int runde)
{
    cout<<"Jocul a inceput!"<<endl;
    //generare_itemi();
    cout<<"Harta initiala:"<<endl;
    afisare_harta();

    ALLDIR *agent1;
    UDLR *agent2;
    DIAG *agent3;
    /*ALLDIR *agent1;
    ALLDIR *agent2;
    ALLDIR *agent3;
    ALLDIR *agent4;
    ALLDIR *agent5;
    ALLDIR *agent6;
    ALLDIR *agent7;
    UDLR   *agent8;
    UDLR   *agent9;
    UDLR   *agent10;
    UDLR   *agent11;
    UDLR   *agent12;
    UDLR   *agent13;
    UDLR   *agent14;
    DIAG   *agent15;
    DIAG   *agent16;
    DIAG   *agent17;
    DIAG   *agent18;
    DIAG   *agent19;
    DIAG   *agent20;
    DIAG   *agent21;
    */

    while(runde>0)
    {
        //cout<<"Runda "<<runde<<endl;
        agent1->deplasare(nr_agenti,h,dim);
        agent2->deplasare(nr_agenti,h,dim);
        agent3->deplasare(nr_agenti,h,dim);
        /*agent1->deplasare(nr_agenti,h,dim);
        agent2->deplasare(nr_agenti,h,dim);
        agent3->deplasare(nr_agenti,h,dim);
        agent4->deplasare(nr_agenti,h,dim);
        agent5->deplasare(nr_agenti,h,dim);
        agent6->deplasare(nr_agenti,h,dim);
        agent7->deplasare(nr_agenti,h,dim);
        agent8->deplasare(nr_agenti,h,dim);
        agent9->deplasare(nr_agenti,h,dim);
        agent10->deplasare(nr_agenti,h,dim);
        agent11->deplasare(nr_agenti,h,dim);
        agent12->deplasare(nr_agenti,h,dim);
        agent13->deplasare(nr_agenti,h,dim);
        agent14->deplasare(nr_agenti,h,dim);
        agent15->deplasare(nr_agenti,h,dim);
        agent16->deplasare(nr_agenti,h,dim);
        agent17->deplasare(nr_agenti,h,dim);
        agent18->deplasare(nr_agenti,h,dim);
        agent19->deplasare(nr_agenti,h,dim);
        agent20->deplasare(nr_agenti,h,dim);
        agent21->deplasare(nr_agenti,h,dim);*/
        cout<<"Numar de agenti ramasi: "<<nr_agenti<<endl;
        afisare_harta();
        runde--;
    }
    cout<<"S-a terminat numarul de runde.";
}
