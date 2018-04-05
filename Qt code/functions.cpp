
#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "header.h"
using namespace std ;

int arredge[50][50];

float point2d::getx(){
    return x ;
}
float point2d::gety(){
    return y ;
}

float point2d::setx(float xnew){
    x=xnew; ;
}

float point2d::sety(float ynew){
         y=ynew ;
}




float point3d::getx(){
    return x ;
}

float point3d::gety(){
    return y ;
}
float point3d::getz(){
    return z ;
}

float point3d::setx(float xnew){
    x=xnew ;
}

float point3d::sety(float ynew){
    y=ynew ;
}

float point3d::setz(float znew){
     z=znew ;
}

bool face::isEdgePresent(int e1,int e2){
    if (arredge[e1][e2] == 1 ) return true; else return false;
}





face faces:: getnextface(int index){
    return loop[index+1];
}





        void  input3D::take3DInputVertices(char** argv ,int argnum){

            ifstream invertices (argv[argnum]);
            //argnum++;

            i=0;j=0;
            if (invertices.is_open()){
                while(getline(invertices,line)){

                    istringstream iss(line);
                    int n;
                    while (iss >> n) {
                        if(j==0){point.setx(n);}
                        if(j==1){point.sety(n);}
                        if(j==2){point.setz(n);}
                    j++;
                    }
                    j=0;
                    //cout<<point.getx()<<" " ;
                    //cout<<point.gety() <<" " ;
                    //cout<<point.getz() <<endl ;
                arr3d[i]= point; i++;
            }
        } i=0;
    }  ;

        void input3D::takeInputEdges(char** argv ,int argnum){
            ifstream inedges (argv[argnum]);
            //argnum++ ;
            if (inedges.is_open()){
                while(getline(inedges,line)){
                    //parse into p

                    istringstream iss(line);
                    int n;
                    while (iss >> n) {
                    arredge[i][j]=n;j++;
                }j=0;
                 i++;
            }i=0;
        }
        };


        void input3D::takeInputFaces(char** argv ,int argnum){
            ifstream infaces (argv[argnum]);
            if (infaces.is_open()){
                while(getline(infaces,line)){
                    //parse into p

                    istringstream iss(line);
                    int n;
                    while (iss >> n) {
                        f.verarray[j]=n;j++;
                    }j=0;
                     obj.loop[i] = f;
                     i++;
            }i=0;
        }
        };




        void input2D::take2DInputVertices(char** argv ,int argnum){
            ifstream in2dvertices (argv[argnum]);
            i=0;j=0;
            if (in2dvertices.is_open()){
                while(getline(in2dvertices,line)){
                    //parse into p

                    istringstream iss(line);
                    int n;
                    while (iss >> n) {
                        if(j==0){point.setx(n);}

                        if(j==1){point.sety(n);}
                    j++;
                    }
                    j=0;
                arr2d[i]= point; i++;
            }
            } i=0;
        };


        void input2D::takeInputEdges(char** argv ,int argnum){
            ifstream in2dedges (argv[argnum]);
            if (in2dedges.is_open()){
                while(getline(in2dedges,line)){
                    //parse into p

                    istringstream iss(line);
                    int n;
                    while (iss >> n) {
                    arr2dedge[i][j]=n;j++;
                }j=0;
                 i++;
            }i=0;
        }
        };


        // input2D();
        // ~input2D();






    bool screen2Dfigure:: isThereEdge(int a, int b){
                if (adjacency_matrix2d[a][b]==1) return true ;
        else return false ;
    }

    void screen2Dfigure::addEdge(int a , int b){
                adjacency_matrix2d[a][b]=1 ;
    }


    void screen2Dfigure::removeEdge(int a , int b){
                adjacency_matrix2d[a][b]=0 ;
    }


    void screen2Dfigure::scaling (float x1,float x2,float x3,float sn){
        int number= sizeof(p2)/sizeof(p2[0]);

        for(int i=0;i<number;i++){
            p2[i].setx(sn*p2[i].getx());
            p2[i].sety(sn*p2[i].gety());

        }
    }





    bool screen3Dfigure::isThereEdge(int a, int b){
        if (adjacency_matrix[a][b]==1) true ;
        else false ;
    }

    void screen3Dfigure::addEdge(int a , int b){
        adjacency_matrix[a][b]=1 ;
        }

    void screen3Dfigure::removeEdge(int a , int b){
        adjacency_matrix[a][b]=0 ;
    }



    void screen3Dfigure::translation(int xc1,int xc2,int xc3){
        int number = sizeof(p3)/sizeof(p3[0]);

        for(int i=0;i<number;i++){
            p3[i].setx(xc1+p3[i].getx());
            p3[i].sety(xc2+p3[i].gety());
            p3[i].setz(xc3+p3[i].getz());


        }

    }


    void screen3Dfigure::scaling (float sn){
        int number= sizeof(p3)/sizeof(p3[0]);

        for(int i=0;i<number;i++){
            p3[i].setx(sn*p3[i].getx());
            p3[i].sety(sn*p3[i].gety());
            p3[i].setz(sn*p3[i].getz());

        }
    }


     topfrontview screen3Dfigure:: convert3DtoTopView(){
//cout<<"im workin"<<endl ;;

         screen2Dfigure top2d ;//=new screen2Dfigure();
         screen2Dfigure front2d ;//=new screen2Dfigure();
                  // top2d[50];

        int number= sizeof(p3)/sizeof(p3[0]);

        for(int i=0;i<number;i++){

    top2d.p2[i].setx(p3[i].getx());//x,y
    top2d.p2[i].sety(p3[i].gety());

    front2d.p2[i].setx(p3[i].getx());//x,z
    front2d.p2[i].sety(p3[i].getz());


    }

    memcpy(top2d.adjacency_matrix2d, adjacency_matrix, sizeof(top2d.adjacency_matrix2d));
    memcpy(front2d.adjacency_matrix2d, adjacency_matrix, sizeof(front2d.adjacency_matrix2d));
   // top2d.adjacency_matrix2d = adjacency_matrix ;
    //front2d.adjacency_matrix2d = adjacency_matrix ;


topfrontview answerin3d;
answerin3d.top=top2d ;
answerin3d.front=front2d ;
return answerin3d ;

     }



screen3Dfigure de3dfrom2d (screen2Dfigure sc1, screen2Dfigure sc2) {


    int num= sizeof(sc1.p2)/sizeof(sc1.p2[0]);
    screen3Dfigure answer ;

    for (int i=0;i<num;i++){
        for(int j=0;j<num;j++){

            if(sc1.adjacency_matrix2d[i][j]==1 || sc2.adjacency_matrix2d[i][j]==1  ){
                answer.adjacency_matrix[i][j]=1;
            }
            else{
                answer.adjacency_matrix[i][j]=0;
            }

        }
    }

    cout<<"jus chek- " ;
cout<<sc1.p2[0].getx()<<" "<<sc1.p2[0].gety()<<endl ;


///sc1=x,y \\\ sc2=x,z
    for (int i=0;i<num;i++){
        answer.p3[i].setx( sc1.p2[i].getx() );
        answer.p3[i].sety( sc1.p2[i].gety() );
        answer.p3[i].setz( sc2.p2[i].gety() );
    }

return answer ;

}




