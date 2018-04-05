
#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "header1.h"

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





        void  input3D::take3DInputVertices(string* str){

            ifstream invertices (*str);
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

        void input3D::takeInputEdges(string* str){
            ifstream inedges (*str);
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


        void input3D::takeInputFaces(string* str){
            ifstream infaces (*str);
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




        void input2D::take2DInputVertices(string* str){
            //cout<< *str;
            //string j = ""
            ifstream in2dvertices (*str);
            i=0;j=0;
            if (in2dvertices.is_open()){
                while(getline(in2dvertices,line)){
                    //parse into p

                    istringstream iss(line);
                    int n;
                    while (iss >> n) {
                        //cout<<"in func: "<<n<<endl;
                        if(j==0){point.setx(n);}

                        if(j==1){point.sety(n);}
                    j++;
                    }
                    j=0;
                arr2d[i]= point; i++;
            }
            } i=0;


        };

        int input2D::checknuma(string* str){
            ifstream in2dvertices (*str);
            i=0;j=0;
            int numa=0;
            if (in2dvertices.is_open()){
                while(getline(in2dvertices,line)){
                    //parse into p
                                    numa++;
                    istringstream iss(line);
                    int n;
                    // while (iss >> n) {
                    // 	if(j==0){point.setx(n);}

                    // 	if(j==1){point.sety(n);}
                    // j++;
                    // }
                    j=0;
                arr2d[i]= point; i++;
            }
            } i=0;

        return numa;
        };


        void input2D::takeInputEdges(string* str){
            ifstream in2dedges (*str);
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



     screen3Dfigure de3dfrom2d (screen2Dfigure sc1, screen2Dfigure sc2 ,screen2Dfigure sc3) {


         // int num1= sizeof(sc1.p2)/sizeof(sc1.p2[0]);
         // int num2= sizeof(sc2.p2)/sizeof(sc2.p2[0]);
         // int num3= sizeof(sc3.p2)/sizeof(sc3.p2[0]);

         int num1= sc1.numa;
         int num2= sc2.numa;
         int num3= sc3.numa;

     //	cout<<"num  "<<num1 <<" "<<num2<<" "<<num3<<endl;
         screen3Dfigure answer ;

     //sc1-- xy
     //sc2- yz ****getx--y gety--z
     //sc3 xz  ****getx--x gety--z
     //
     // for(int i=0;i<num1;i++){
     // 	cout<< sc1.p2[i].getx()<<" "<<sc1.p2[i].gety() <<endl;
     // }

     //
     // for(int i=0;i<num2;i++){
     // 	cout<< sc2.p2[i].getx()<<" "<<sc2.p2[i].gety() <<endl;
     // }
     int con=0;

     for(int i=0;i<num1;i++){
         for(int j=0;j<num2;j++){
             for(int k=0;k<num3;k++){

                 if(sc1.p2[i].getx() == sc3.p2[k].getx()) {
                     if(sc1.p2[i].gety() == sc2.p2[j].getx()){
                         if(sc2.p2[j].gety() == sc3.p2[k].gety()){

             answer.p3[con].setx( sc1.p2[i].getx() );
             answer.p3[con].sety( sc2.p2[j].getx() );
             answer.p3[con].setz( sc3.p2[k].gety() );

                    con++ ;

                         }
                     }
                 }



             }
         }
     }

        std::cout<< con<<std::endl;

     //cout<<"con is "<<con <<endl;
         int numans= sizeof(answer.p3)/sizeof(answer.p3[0]);
     //cout<<"answer "<<numans <<endl;
     bool topboo=false;
     bool frontboo=false ;
     bool sideboo=false ;
     int kli,klj ,mni,mnj,noi,noj ;


     //sc1-- xy
     //sc2- yz ****getx--y gety--z
     //sc3 xz  ****getx--x gety--z

     for(int i=0;i<con;i++){
         for(int j=0;j<con;j++){
             if(i!=j){

     //cout<<"ii "<<i <<" jj "<<j <<endl;
                         for(int kl=0;kl<num1;kl++){

                             if(sc1.p2[kl].getx()==answer.p3[i].getx() && sc1.p2[kl].gety()==answer.p3[i].gety() ) kli=kl ;

                             if(sc1.p2[kl].getx()==answer.p3[j].getx() && sc1.p2[kl].gety()==answer.p3[j].gety() ) klj=kl ;

                         }
     //cout<<"ki "<<kli <<" kj "<<klj <<endl;

     for(int zz=0;zz<num1;zz++){
         for(int yy=0;yy<num1;yy++){
     //cout<<sc1.adjacency_matrix2d[zz][yy]<<" " ;

         }
         cout<<endl;
     }
                         if(sc1.adjacency_matrix2d[kli][klj]==1) {topboo=true;}
                         else {topboo=false;}


     for(int kl=0;kl<num2;kl++){

                             if(sc2.p2[kl].getx()==answer.p3[i].gety() && sc2.p2[kl].gety()==answer.p3[i].getz() ) mni=kl ;

                             if(sc2.p2[kl].getx()==answer.p3[j].gety() && sc2.p2[kl].gety()==answer.p3[j].getz() ) mnj=kl ;

                         }

                         if(sc2.adjacency_matrix2d[mni][mnj]==1) {frontboo=true;}
                         else {frontboo=false;}


     for(int kl=0;kl<num3;kl++){

                             if(sc3.p2[kl].getx()==answer.p3[i].getx() && sc3.p2[kl].gety()==answer.p3[i].getz() ) noi=kl ;

                             if(sc3.p2[kl].getx()==answer.p3[j].getx() && sc3.p2[kl].gety()==answer.p3[j].getz() ) noj=kl ;

                         }

                         if(sc3.adjacency_matrix2d[noi][noj]==1) {sideboo=true;}
                         else{sideboo=false ;}

     //cout<<"topboo "<<topboo<<" "<<frontboo<<" "<<sideboo<<endl;
                 if(topboo==true && frontboo==true && sideboo==true){answer.adjacency_matrix[i][j]=1 ;}
                 else {answer.adjacency_matrix[i][j]=0 ;}


             }
             else {
                 answer.adjacency_matrix[i][j]=1 ;
             }
         }
     }





         //cout<<"jus chek- " ;
     //cout<<sc1.p2[0].getx()<<" "<<sc1.p2[0].gety()<<endl ;


     return answer ;

     }

//screen3Dfigure de3dfrom2d (screen2Dfigure sc1, screen2Dfigure sc2) {


//    int num= sizeof(sc1.p2)/sizeof(sc1.p2[0]);
//    screen3Dfigure answer ;

//    for (int i=0;i<num;i++){
//        for(int j=0;j<num;j++){

//            if(sc1.adjacency_matrix2d[i][j]==1 || sc2.adjacency_matrix2d[i][j]==1  ){
//                answer.adjacency_matrix[i][j]=1;
//            }
//            else{
//                answer.adjacency_matrix[i][j]=0;
//            }

//        }
//    }

//    cout<<"jus chek- " ;
//cout<<sc1.p2[0].getx()<<" "<<sc1.p2[0].gety()<<endl ;


/////sc1=x,y \\\ sc2=x,z
//    for (int i=0;i<num;i++){
//        answer.p3[i].setx( sc1.p2[i].getx() );
//        answer.p3[i].sety( sc1.p2[i].gety() );
//        answer.p3[i].setz( sc2.p2[i].gety() );
//    }

//return answer ;

//}




