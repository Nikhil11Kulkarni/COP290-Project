#ifndef HEADER1_H
#define HEADER1_H

#include <string>


extern int arredge[50][50];
extern int opmode;

extern int topnum,frontnum,sidenum;



class point2d{
    float x;  	/*!< for X*/
    float y;  	/*!< for Y*/
public :
float getx();
float gety();

float setx(float xnew);
float sety(float ynew);

};



class point3d{
    float x;  	/*!< for X*/
    float y;  	/*!< for Y*/
    float z;  	/*!< for Z*/

public:
float getx();
float gety();
float getz();
float setx(float xnew);
float sety(float ynew);
float setz(float znew);


};

class face{
public:
int verarray[50];
bool isEdgePresent(int e1,int e2);

};


class faces {
public:
face loop[50];
int index ;

face getnextface(int index);

};

class input3D{

        std::string line;
        int i;
        int j;
        public:
        point3d arr3d[50];
        point3d point;



        void take3DInputVertices(std::string* str);

        void takeInputEdges(std::string* str);

        faces obj;
        face f;
        void takeInputFaces(std::string* str);

};

class input2D{
public:
    std::string line;
    int i;
    int j;
    point2d arr2d[50];
    point2d point;
    int arr2dedge[50][50];

        void take2DInputVertices(std::string* str);

        void takeInputEdges(std::string* str) ;

        int checknuma(std::string* str) ; //
        // input2D();
        // ~input2D();


};





class screen2Dfigure{

    public:
            int numa;//
    point2d p2[50];
    int adjacency_matrix2d[50][50];

    bool isThereEdge(int a, int b);

    void addEdge(int a , int b);

    void removeEdge(int a , int b);

    void scaling (float x1,float x2,float x3,float sn);
};




class topfrontview{
    public:
    screen2Dfigure top ;    	/*!< for top view*/
    screen2Dfigure front ;    	/*!< for front  view*/
};



class screen3Dfigure{


    public:
    int adjacency_matrix[50][50];
    point3d p3[50];


    bool isThereEdge(int a, int b);

    void addEdge(int a , int b);

    void removeEdge(int a , int b);
    void translation(int xc1,int xc2,int xc3);


    void scaling (float sn);


     topfrontview convert3DtoTopView();


};




screen3Dfigure de3dfrom2d (screen2Dfigure sc1, screen2Dfigure sc2,screen2Dfigure sc3) ;


class getOutput{

public:
    screen2Dfigure getTwoDModel();
    screen3Dfigure getThreeDModel();
    void show2DOutput();
    void show3DOutput();
};

extern input3D inp33;
extern   screen3Dfigure output3D;
extern input2D leinput1,leinput2,leinput3;



#endif // HEADER1_H
