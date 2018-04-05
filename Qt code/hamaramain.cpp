

///////////////////////////////////////optimized///////////////////////////////////////////////////

     /** @defgroup group1 The First Group
 *  This is the first group
 *  @{
 */


/*! */


#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "header.h"
using namespace std ;

int main( int argc, char** argv)  {
    int opmode;
    cin>>opmode ;
cout<<"argc is "<<argc <<endl ;
cout<<"please give files in order= vettex3d--edged3d-- for 2D from 3D" <<endl;
cout<<"please give files in order= topvertx-topedge-frontvertx-frontedge for 3D from 2D" <<endl ;


int argnum=1 ;

    if (opmode==1) {
        //3dfrom2d

        screen2Dfigure topinp , frontinp ;
        input2D leinput1,leinput2 ;
        screen3Dfigure output3D;

//TOPVERTX
        leinput1.take2DInputVertices(argv,argnum);
        argnum++;
//TOPEDGE
        leinput1.takeInputEdges(argv,argnum);
        argnum++ ;
     memcpy(topinp.p2, leinput1.arr2d , sizeof(leinput1.arr2d));
     memcpy(topinp.adjacency_matrix2d,leinput1.arr2dedge , sizeof(leinput1.arr2dedge));

//FRONTVERTX
        leinput2.take2DInputVertices(argv,argnum);
        argnum++;
//FRONTEDGE
        leinput2.takeInputEdges(argv,argnum);
        argnum++ ;
     memcpy(frontinp.p2, leinput2.arr2d , sizeof(leinput2.arr2d));
     memcpy(frontinp.adjacency_matrix2d,leinput2.arr2dedge , sizeof(leinput2.arr2dedge));

output3D= de3dfrom2d(topinp,frontinp);


        ofstream myver3dfile;
        myver3dfile.open ("out3dedge.txt");

int num=sizeof(output3D.p3);
  for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(myver3dfile.is_open()){myver3dfile<<output3D.adjacency_matrix[i][j] <<" ";}
        }
    myver3dfile << endl;
    }
  myver3dfile.close();


ofstream my3dver;
  my3dver.open ("out3dvertex.txt");

  for(int i=0;i<8;i++){
            if(my3dver.is_open()){my3dver<< output3D.p3[i].getx() <<" "<<output3D.p3[i].gety()<<" "<<output3D.p3[i].getz()<<" ";}
    my3dver << endl;
    }

  my3dver.close();




    }

    else if(opmode==2) {//2d from 3d


        screen2Dfigure sc1,sc2 ;
        screen3Dfigure sc3d ;
        input3D inp33 ;
        //cout<<"now argnum is " <<argnum<<endl;;
        inp33.take3DInputVertices(argv , argnum) ; //"vertices.txt"
        argnum++ ;
        //cout<<"now argnum is " <<argnum<<endl;;
        inp33.takeInputEdges(argv , argnum);  //"edges.txt"
        argnum++;
        // sc3d.adjacency_matrix = arredge ;
        // sc3d.p3 = inp33.arr3d ;

    memcpy(sc3d.p3, inp33.arr3d , sizeof(inp33.arr3d));
    memcpy(sc3d.adjacency_matrix, arredge , sizeof(arredge));

        topfrontview finans ;
        finans= sc3d.convert3DtoTopView();
        sc1=finans.top;
        sc2=finans.front ;

ofstream myoutfile;
  myoutfile.open ("out2dpedges.txt");

int num=sizeof(sc3d.p3); //sizeof(sc3d.p3)/sizeof(sc3d.p3[0]);

  for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            //cout<< arredge[i][j] <<" t";
            if(myoutfile.is_open()){myoutfile<< arredge[i][j] <<" ";}
        }
    myoutfile << endl;
    }

  myoutfile.close();


ofstream mytopver;
  mytopver.open ("topver.txt");

//int num=sizeof(sc3d.p3); //sizeof(sc3d.p3)/sizeof(sc3d.p3[0]);
//cout<<sc1.p2[0].getx()<<" hu " ;

  for(int i=0;i<8;i++){
            if(mytopver.is_open()){mytopver<< sc1.p2[i].getx() <<" "<<sc1.p2[i].gety()<<" ";}
        //if(mytopver.is_open()){mytopver<< inp33.arr3d[i].getx() <<" "<<inp33.arr3d[i].gety()<<" ";}
    mytopver << endl;
    }

  mytopver.close();


ofstream myfrontver;
  myfrontver.open ("frontver.txt");

  for(int i=0;i<8;i++){
            if(myfrontver.is_open()){myfrontver<< sc2.p2[i].getx() <<" "<<sc2.p2[i].gety()<<" ";}
        //if(mytopver.is_open()){mytopver<< inp33.arr3d[i].getx() <<" "<<inp33.arr3d[i].gety()<<" ";}
    myfrontver << endl;
    }

  myfrontver.close();





    }
    else {
        cout<<"sahi opmde dijiye";
    }


}



/** @} */ // end of group1


