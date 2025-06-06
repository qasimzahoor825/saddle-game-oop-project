
#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath>
#include<fstream>

using namespace std;

class Food {
  public:
  int xAxis[100];
  int yAxis[100];
  int z1[100];
  int a,b,c,d;
  bool deleted[100];
  
  public:
  Food() {
    a=0;
    b=0;
    c=0;
    d=0;
  }
  
  void displayFood(int x, int y, int z) {
    xAxis[a++]=x;
    yAxis[b++]=y;
    z1[c++]=z;
    deleted[d++]=false;
    display();
  }
  
  void setY(int y) {
    for(int i=0; i<a; i++) {
      yAxis[i]-=y;
    }
  }
  
  void display() {
    for(int i=0; i<a; i++) {
      if(!deleted[i]) {
        if(z1[i]==0) {
          DrawTriangle(xAxis[i],yAxis[i],xAxis[i]+10,yAxis[i],xAxis[i]+5,yAxis[i]+10,colors[GREEN]);
        }
        if(z1[i]==1) {
          DrawSquare(xAxis[i],yAxis[i],10,colors[DEEP_PINK]);
        }
        if(z1[i]==2) {
          DrawSquare(xAxis[i],yAxis[i],10,colors[OLIVE]);
        }
        if(z1[i]==3) {
          DrawCircle(xAxis[i],yAxis[i],5,colors[BLUE]);
        }
        if(z1[i]==4) {
          DrawRectangle(xAxis[i],yAxis[i],10,5,colors[RED]);
        }
      }
    }
  }
  
};

class Brick {
        public:
        int width;
        int height;
        int xAxis;
        int yAxis;
        int count;
        bool deleted;
        int i,j,k;
        int z;
        
        public:
        Brick() {
          width=70;
          height=25;
          deleted=false;
          z=rand()%5;
        }
            
        
        virtual void delete1() {
            xAxis=0;
            yAxis=0;
            width=0;
            height=0;
            deleted=true;
        }
        virtual void display() {
          if(!deleted) {
            DrawRectangle(xAxis,yAxis,width,height,colors[GREEN]);
          }
        }
        
};

class Brick1 : public Brick {
          
        public:
        Brick1 () {
          xAxis=5;
          yAxis=200;
          k=1;
          if(z==0) {
            count=1;
          }
          if(z==1) {
            count=2;
          }
          if(z==2) {
            count=2;
          }
          if(z==3) {
            count=3;
          }
          if(z==4) {
            count=3;
          }
          
        }
        void setX(int a) {
          xAxis+=a;
        }
        void setY(int b) {
          yAxis+=b;
        }
        void setX1(int a) {
          xAxis=a;
        }
        void setY1(int b) {
          yAxis=b;
        }
        void delete1() {
            xAxis=0;
            yAxis=0;
            width=0;
            height=0;
            deleted=true;
            
        }
        void display() {
          if(!deleted) {
            if(z==0) {
              DrawRectangle(xAxis,yAxis,width,height,colors[GREEN]);
            }
            if(z==1) {
              DrawRectangle(xAxis,yAxis,width,height,colors[DEEP_PINK]);
            }
            if(z==2) {
              DrawRectangle(xAxis,yAxis,width,height,colors[OLIVE]);
            }
            if(z==3) {
              DrawRectangle(xAxis,yAxis,width,height,colors[BLUE]);
            }
            if(z==4) {
              DrawRectangle(xAxis,yAxis,width,height,colors[RED]);
            }
          }
        }
};

class Brick2 : public Brick {
        
        public:
        Brick2() {
          xAxis=5;
          yAxis=350;
          k=2;
          if(z==0) {
            count=1;
          }
          if(z==1) {
            count=2;
          }
          if(z==2) {
            count=2;
          }
          if(z==3) {
            count=3;
          }
          if(z==4) {
            count=3;
          }
        }
        void setX(int a) {
          xAxis+=a;
        }
        void setY(int b) {
          yAxis+=b;
        }
        void setX1(int a) {
          xAxis=a;
        }
        void setY1(int b) {
          yAxis=b;
        }
        void delete1() {
            xAxis=0;
            yAxis=0;
            width=0;
            height=0;
            deleted=true;
        }
        void display() {
          if(!deleted) {
            if(z==0) {
              DrawRectangle(xAxis,yAxis,width,height,colors[GREEN]);
            }
            if(z==1) {
              DrawRectangle(xAxis,yAxis,width,height,colors[DEEP_PINK]);
            }
            if(z==2) {
              DrawRectangle(xAxis,yAxis,width,height,colors[OLIVE]);
            }
            if(z==3) {
              DrawRectangle(xAxis,yAxis,width,height,colors[BLUE]);
            }
            if(z==4) {
              DrawRectangle(xAxis,yAxis,width,height,colors[RED]);
            }
          }
        }
};

class Brick3 : public Brick {
        
        public:
        Brick3() {
          xAxis=425;
          yAxis=475;
          k=3;
          if(z==0) {
            count=1;
          }
          if(z==1) {
            count=2;
          }
          if(z==2) {
            count=2;
          }
          if(z==3) {
            count=3;
          }
          if(z==4) {
            count=3;
          }
        }
        void setX(int a) {
          xAxis+=a;
        }
        void setY(int b) {
          yAxis+=b;
        }
        void setX1(int a) {
          xAxis=a;
        }
        void setY1(int b) {
          yAxis=b;
        }
        void delete1() {
            xAxis=0;
            yAxis=0;
            width=0;
            height=0;
            deleted=true;
        }
        void display() {
          if(!deleted) {
            if(z==0) {
              DrawRectangle(xAxis,yAxis,width,height,colors[GREEN]);
            }
            if(z==1) {
              DrawRectangle(xAxis,yAxis,width,height,colors[DEEP_PINK]);
            }
            if(z==2) {
              DrawRectangle(xAxis,yAxis,width,height,colors[OLIVE]);
            }
            if(z==3) {
              DrawRectangle(xAxis,yAxis,width,height,colors[BLUE]);
            }
            if(z==4) {
              DrawRectangle(xAxis,yAxis,width,height,colors[RED]);
            }
          }
        }
};

class Brick4 : public Brick {
        
        public:
        Brick4() {
          xAxis=425;
          yAxis=200;
          k=4;
          if(z==0) {
            count=1;
          }
          if(z==1) {
            count=2;
          }
          if(z==2) {
            count=2;
          }
          if(z==3) {
            count=3;
          }
          if(z==4) {
            count=3;
          }
        }
        void setX(int a) {
          xAxis+=a;
        }
        void setY(int b) {
          yAxis+=b;
        }
        void setX1(int a) {
          xAxis=a;
        }
        void setY1(int b) {
          yAxis=b;
        }
        void delete1() {
            xAxis=0;
            yAxis=0;
            width=0;
            height=0;
            deleted=true;
        }
        void display() {
          if(!deleted) {
            if(z==0) {
              DrawRectangle(xAxis,yAxis,width,height,colors[GREEN]);
            }
            if(z==1) {
              DrawRectangle(xAxis,yAxis,width,height,colors[DEEP_PINK]);
            }
            if(z==2) {
              DrawRectangle(xAxis,yAxis,width,height,colors[OLIVE]);
            }
            if(z==3) {
              DrawRectangle(xAxis,yAxis,width,height,colors[BLUE]);
            }
            if(z==4) {
              DrawRectangle(xAxis,yAxis,width,height,colors[RED]);
            }
          }
        }
};

class Brick5 : public Brick {
        
        public:
        Brick5() {
          xAxis=5;
          yAxis=600;
          k=5;
          if(z==0) {
            count=1;
          }
          if(z==1) {
            count=2;
          }
          if(z==2) {
            count=2;
          }
          if(z==3) {
            count=3;
          }
          if(z==4) {
            count=3;
          }
        }
        void setX(int a) {
          xAxis+=a;
        }
        void setY(int b) {
          yAxis+=b;
        }
        void setX1(int a) {
          xAxis=a;
        }
        void setY1(int b) {
          yAxis=b;
        }
        void delete1() {
            xAxis=0;
            yAxis=0;
            width=0;
            height=0;
            deleted=true;
        }
        void display() {
          if(!deleted) {
            if(z==0) {
              DrawRectangle(xAxis,yAxis,width,height,colors[GREEN]);
            }
            if(z==1) {
              DrawRectangle(xAxis,yAxis,width,height,colors[DEEP_PINK]);
            }
            if(z==2) {
              DrawRectangle(xAxis,yAxis,width,height,colors[OLIVE]);
            }
            if(z==3) {
              DrawRectangle(xAxis,yAxis,width,height,colors[BLUE]);
            }
            if(z==4) {
              DrawRectangle(xAxis,yAxis,width,height,colors[RED]);
            }
          }
        }
};




class Ball {
        public:
        int xAxis;
        int yAxis;
        int radius;
        bool bool1=false;
        bool bool2=false;
        bool bool3=false;
        bool bool4=false;
        bool bool5=false;
        bool bool6=false;
        int a=1;
        int b=1;
        int z;
        
        int score;
        string scores;
        int gameOver=0;
        int live=2;
        string lives;
        
        Ball() {
          xAxis=380;
          yAxis=150;
          radius=8;
          z=0;
        }
        void setX(int c) {
          if(bool1!=false) {
            xAxis+=c;
            if(xAxis>=760) {
              bool1=false;
            }
          }
          else {
            xAxis-=c;
            if(xAxis<=10) {
              bool1=true;
            }
          }
        }
        void setY(int d, int level, int &i) {
          if(bool2!=false) {
            yAxis+=d;
            if(yAxis>=690) {
              if(level!=3) {
                bool2=false;
              }
              else {
                live--;
                if(live==0) {
                 gameOver++; 
                }
                else {
                  if(i==0) {
                    xAxis=380;
                    yAxis=150;
                    bool3=false;
                    bool5=false;
                  }
                }
              }
            }
          }
          else {
            yAxis-=d;
            if(yAxis<=10) {
              live--;
              if(live==0) {
               gameOver++; 
              }
              else {
                if(i==0) {
                  xAxis=380;
                  yAxis=150;
                  bool3=false;
                  bool5=false;
                }
              }
            }
          }   
        }
        void display() {
          if(z==0) {
            DrawCircle(xAxis,yAxis,radius,colors[GREEN]);
          }
          if(z==1) {
            DrawCircle(xAxis,yAxis,radius,colors[DEEP_PINK]);
          }
          if(z==2) {
            DrawCircle(xAxis,yAxis,radius,colors[OLIVE]);
          }
          if(z==3) {
            DrawCircle(xAxis,yAxis,radius,colors[BLUE]);
          }
          if(z==4) {
            DrawCircle(xAxis,yAxis,radius,colors[RED]);
          }
        }
        
        void checkCollision(Brick* &bricks, Food &food) {
          if((xAxis>=bricks->xAxis && xAxis<=((bricks->xAxis)+(bricks->width))) && yAxis>=bricks->yAxis && yAxis<=(bricks->yAxis+5) ) {
            bool2=false;
            bool6=true;
            z=bricks->z;
          }
          if((xAxis>=bricks->xAxis && xAxis<=((bricks->xAxis)+(bricks->width))) && yAxis>=(bricks->yAxis+(bricks->height-5)) && yAxis<=(bricks->yAxis+bricks->height) ) {
            bool2=true;
            bool6=true;
            z=bricks->z;
          }
          if((yAxis>=bricks->yAxis && yAxis<=((bricks->yAxis)+(bricks->height))) && xAxis>=bricks->xAxis && xAxis<=(bricks->xAxis+5) ) {
            bool1=false;
            bool6=true;
            z=bricks->z;
          }
          if((yAxis>=bricks->yAxis && yAxis<=((bricks->yAxis)+(bricks->height))) && xAxis>=(bricks->xAxis+(bricks->width-5)) && xAxis<=(bricks->xAxis+bricks->width) ) {
            bool1=true;
            bool6=true;
            z=bricks->z;
          }
          
          if(bool6==true) {
            bricks->count--;
            bool6=false;
          }
          
          if(bricks->count==0) {
            bricks->count--;
            food.displayFood(xAxis,yAxis,bricks->z);
            bricks->delete1();
            score++;
          }
        }
};

class Paddle {
  public:
        int width;
        int height;
        int xAxis;
        int yAxis;
        int radius;
        int z=0;
        bool bool1;
        
        Paddle() {
          xAxis=350;
          yAxis=50;
          width=70;
          height=20;
          radius=10;
          bool1=false;
        }
        void setX(int a) {
            xAxis=a;
            if(xAxis+width>770) {
              xAxis=700;
            }
        }
        void setX1(int a) {
              if(a==1) {
                xAxis+=20;
              }
              else if(a==2){
                xAxis-=20;
              }
        }
        void setY(int b) {
            yAxis=b;
        }
        void display() {
          if(z==0) {
            DrawRoundRect(xAxis,yAxis,width,height,colors[GREEN],radius);
          }
          if(z==1) {
            DrawRoundRect(xAxis,yAxis,width,height,colors[DEEP_PINK],radius);
          }
          if(z==2) {
            DrawRoundRect(xAxis,yAxis,width,height,colors[OLIVE],radius);
          }
          if(z==3) {
            DrawRoundRect(xAxis,yAxis,width,height,colors[BLUE],radius);
          }
          if(z==4) {
            DrawRoundRect(xAxis,yAxis,width,height,colors[RED],radius);
          }
        }
        
        void checkCollision(Food &food, Ball &ball, int &a, int &e) {
          for (int i=0; i<food.a; i++) {
            if(food.xAxis[i]>=xAxis && food.xAxis[i]<=((xAxis)+(width)) && food.yAxis[i]>=yAxis && food.yAxis[i]<=(yAxis+height)) {
              if(food.z1[i]==0) {
                if(width==35) {
                  width=70;
                }
                else {
                  width=140;
                }
                e=1;
              }
              if(food.z1[i]==1) {
                if(width==140) {
                  width=70;
                }
                else {
                  width=35;
                }
                e=2;
              }
              if(food.z1[i]==2) {
                bool1=true;
                a=3;
              }
              if(food.z1[i]==3) {
                ball.bool4=true;
                ball.a=2;
              }
              if(food.z1[i]==4) {
                ball.bool4=true;
                ball.a=3;
              }
              
              food.deleted[i]=true;
            }   
          }
        }
        
        void checkCollision(Ball &ball, int &a) {
          if(ball.xAxis>=xAxis && ball.xAxis<=((xAxis)+(width)) && ball.yAxis>=(yAxis+height-5) && ball.yAxis<=(yAxis+height)) {
            ball.bool2=true;
            ball.bool5=true;
            z=ball.z;
          }
          if(ball.xAxis>=xAxis && ball.xAxis<=((xAxis)+(width)) && ball.yAxis>=yAxis && ball.yAxis<=(yAxis+5) ) {
            ball.bool2=false;
            z=ball.z;
          }
          if(ball.yAxis>=yAxis && ball.yAxis<=(yAxis+height) && ball.xAxis>=xAxis && ball.xAxis<=xAxis+5) {
            ball.bool1=false;
            z=ball.z;
          }
          if(ball.yAxis>=yAxis && ball.yAxis<=(yAxis+height) && ball.xAxis>=(xAxis+width-5) && ball.xAxis<=(xAxis+width)) {
            ball.bool1=true;
            z=ball.z;
          }
        }
};

class Game {
        public:
        Brick* bricks[100];
        Ball ball[3];
        Paddle paddle;
        Paddle paddle2;
        Food food;
        int a,b,e;
        int level;
        
        
        int highest1=0;
        string highest;
  
        Brick1 bricks1[21];
        Brick2 bricks2[21];
        Brick3 bricks3[20];
        Brick4 bricks4[20];
        Brick5 bricks5[20];
        
  
    void pattern11(int i,int j, int n) {
      if(i==n) {
        return;
      }
      else {
        bricks1[j].setX(i*70);
        bricks1[j].setY((6-n)*25);
        pattern11(++i,++j, n);
      }
    }
    
    void pattern1(int i, int j, int n) {
      if(n==0) {
        return;
      }
      else {
        pattern11(i,j,n);
        j+=n;
        pattern1(i,j,--n);
      }
    }
    
    void pattern22(int i,int j, int n) {
      if(i==n) {
        return;
      }
      else {
        bricks2[j].setX(i*70);
        bricks2[j].setY((n-1)*25);
        pattern22(++i,++j, n);
      }
    }
    
    void pattern2(int i,int j, int n) {
      if(n>6) {
        return;
      }
      else {
        pattern22(i,j, n);
        j+=n;
        pattern2(i,j,++n);
      }
    }
    
    void pattern33(int i,int j, int n) {
      if(i==n) {
        return;
      }
      else {
        bricks3[j].setX((i+5-n)*70);
        if(j<5) {
          bricks3[j].setY((n-5)*25);
        }
        else {
          bricks3[j].setY((n-6)*25);
        }
        pattern33(++i,++j, n);
      }
    }
    
    void pattern3(int i,int j, int n) {
      if(n==0) {
        return;
      }
      else {
        pattern33(i,j, n);
        j+=n;
        if(j>5) {
          --n;
        }
        pattern3(i,j,n);
      }
    }
    
    void pattern44(int i,int j, int n) {
      if(i==n) {
        return;
      }
      else {
        if(j==0) {
          
        }
        bricks4[j].setX((i+5-n)*70);
        if(j<5) {
          bricks4[j].setY((5-n)*25);
        }
        else {
          bricks4[j].setY((6-n)*25);
        }
        pattern44(++i,++j, n);
      }
    }
    
    void pattern4(int i,int j, int n) {
      if(n==0) {
        return;
      }
      else {
        pattern44(i,j, n);
        j+=n;
        if(j>5) {
          --n;
        }
        pattern4(i,j,n);
      }
    }
    
  Game() {
        level=3;
        
        if(level==1) {
          b=70;
          for(int i=0; i<20; i++) {
            bricks1[i].setY1(500);
            bricks2[i].setY1(525);
            bricks3[i].setY1(550);
            bricks4[i].setY1(575);
            bricks5[i].setY1(600);
            
            bricks1[i].setX1(2);
            bricks2[i].setX1(2);
            bricks3[i].setX1(2);
            bricks4[i].setX1(2);
            bricks5[i].setX1(2);
          }
          
          for(int i=0; i<14; i++) {
            bricks1[i].setX(i*55);
          }
          for(int i=0; i<14; i++) {
              bricks2[i].setX(i*55);
          }
          for(int i=0; i<14; i++) {
              bricks3[i].setX(i*55);
          }
          for(int i=0; i<14; i++) {
              bricks4[i].setX(i*55);
          }
          for(int i=0; i<14; i++) {
              bricks5[i].setX(i*55);
          }
        }
        
        else if(level==2) {
          b=100;
          for(int i=0; i<20; i++) {
            bricks1[i].setY1(150);
            bricks2[i].setY1(250);
            bricks3[i].setY1(350);
            bricks4[i].setY1(450);
            bricks5[i].setY1(550);
            
            bricks1[i].setX1(10);
            bricks2[i].setX1(260);
            bricks3[i].setX1(510);
            bricks4[i].setX1(260);
            bricks5[i].setX1(10);
          }
         
          
          for(int i=0; i<20; i++) {
            if(i<5) {
              bricks1[i].setX(i*50);
            }
            else if(i<10) {
              bricks1[i].setX((i-5)*50);
              bricks1[i].setY((i/5)*25);
            }
            else if(i<15) {
              bricks1[i].setX((i-10)*50);
              bricks1[i].setY((i/5)*25);
            }
            else if(i<20) {
              bricks1[i].setX((i-15)*50);
              bricks1[i].setY((i/5)*25);
            }
          }
          
          for(int i=0; i<20; i++) {
            if(i<5) {
              bricks2[i].setX(i*50);
            }
            else if(i<10) {
              bricks2[i].setX((i-5)*50);
              bricks2[i].setY((i/5)*25);
            }
            else if(i<15) {
              bricks2[i].setX((i-10)*50);
              bricks2[i].setY((i/5)*25);
            }
            else if(i<20) {
              bricks2[i].setX((i-15)*50);
              bricks2[i].setY((i/5)*25);
            }
          }
          
          for(int i=0; i<20; i++) {
            if(i<5) {
              bricks3[i].setX(i*50);
            }
            else if(i<10) {
              bricks3[i].setX((i-5)*50);
              bricks3[i].setY((i/5)*25);
            }
            else if(i<15) {
              bricks3[i].setX((i-10)*50);
              bricks3[i].setY((i/5)*25);
            }
            else if(i<20) {
              bricks3[i].setX((i-15)*50);
              bricks3[i].setY((i/5)*25);
            }
          }
          
          for(int i=0; i<20; i++) {
            if(i<5) {
              bricks4[i].setX(i*50);
            }
            else if(i<10) {
              bricks4[i].setX((i-5)*50);
              bricks4[i].setY((i/5)*25);
            }
            else if(i<15) {
              bricks4[i].setX((i-10)*50);
              bricks4[i].setY((i/5)*25);
            }
            else if(i<20) {
              bricks4[i].setX((i-15)*50);
              bricks4[i].setY((i/5)*25);
            }
          }
          
          for(int i=0; i<20; i++) {
            if(i<5) {
              bricks5[i].setX(i*50);
            }
            else if(i<10) {
              bricks5[i].setX((i-5)*50);
              bricks5[i].setY((i/5)*25);
            }
            else if(i<15) {
              bricks5[i].setX((i-10)*50);
              bricks5[i].setY((i/5)*25);
            }
            else if(i<20) {
              bricks5[i].setX((i-15)*50);
              bricks5[i].setY((i/5)*25);
            }
          }
        }
        
        else if(level==3) {
          b=82;
           pattern1(0,0,6);
           pattern2(0,0,1);
           pattern3(0,0,5);
           pattern4(0,0,5);
        }
        
        paddle2.setY(650);
        a=1;
        e=0;
  }
  
  void gameOverScreen(int width, int height, const float color[3]){
    glColor3fv(color);
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(width,0);
    glVertex2i(width,height);
    glVertex2i(0,height);
    glEnd();
  }
  
};


/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1);
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


Game game;
void GameDisplay(){
        if(game.ball[0].gameOver==0) {
          if(game.level==1) {
            for(int i=0; i<70; i++) {
                if(i<14) {
                  game.bricks[i]=&game.bricks1[i];
                }
                else if(i<28) {
                  game.bricks[i]=&game.bricks2[i-14];
                }
                else if(i<42) {
                  game.bricks[i]=&game.bricks3[i-28];
                }
                else if(i<56) {
                  game.bricks[i]=&game.bricks4[i-42];
                }
                else if(i<70) {
                  game.bricks[i]=&game.bricks5[i-56];
                }
            }
            for(int i=0; i<70; i++) {
              game.bricks[i]->width=55;
            }
          }
          
          else if(game.level==2) {
            for(int i=0; i<100; i++) {
                if(i<20) {
                  game.bricks[i]=&game.bricks1[i];
                }
                else if(i<40) {
                  game.bricks[i]=&game.bricks2[i-20];
                }
                else if(i<60) {
                  game.bricks[i]=&game.bricks3[i-40];
                }
                else if(i<80) {
                  game.bricks[i]=&game.bricks4[i-60];
                }
                else if(i<100) {
                  game.bricks[i]=&game.bricks5[i-80];
                }
            }   
            for(int i=0; i<100; i++) {
              game.bricks[i]->width=50;
            }
          }
          
          else if(game.level==3) {
            for(int i=0; i<82; i++) {
                if(i<21) {
                  game.bricks[i]=&game.bricks1[i];
                }
                else if(i<42) {
                  game.bricks[i]=&game.bricks2[i-21];
                }
                else if(i<62) {
                  game.bricks[i]=&game.bricks3[i-42];
                }
                else if(i<82) {
                  game.bricks[i]=&game.bricks4[i-62];
                }
            }
          }
          

	  glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			  0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Color
	  glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	  //Fire Gun
	  
	  DrawLine( 0, 0, 0, 700, 10, colors[MISTY_ROSE] );
	  DrawLine( 0, 700, 775, 700, 05, colors[MISTY_ROSE] );
	  DrawLine( 775, 700, 775, 0, 10, colors[MISTY_ROSE] );
	  
	  
	  
	  
	  DrawString( 50, 750, "Ehtisham Abid", colors[MISTY_ROSE]); // this will print given string at x=50 , y=620
	  DrawString( 150, 750, "23i-0091", colors[MISTY_ROSE]);
	  DrawString( 300, 750,"SCORE: ", colors[MISTY_ROSE]); // this will print given string at x=450 , y=620
	  game.ball[0].scores = to_string(game.ball[0].score) ;
	  DrawString( 340, 750, game.ball[0].scores , colors[MISTY_ROSE]);
	  
	  DrawString( 400, 750,"LIVES: ", colors[MISTY_ROSE]); // this will print given string at x=450 , y=620
	  game.ball[0].lives = to_string(game.ball[0].live) ;
	  DrawString( 440, 750, game.ball[0].lives , colors[MISTY_ROSE]);
	  
	  ifstream in;
	  in.open("highestScore.txt");
	  in >> game.highest1;
	  in.close();
	  game.highest = to_string(game.highest1);

	  if (game.ball[0].score > game.highest1) {
	  	ofstream out;
        	out.open("highestScore.txt");
	    	out << game.ball[0].score;
	    	out.close();
	  }
	  
	  ofstream out;
          out.open("currentScore.txt");
	  out << game.ball[0].score;
	  out.close();
    	    
    	  DrawString( 620, 750,"Highest  SCORE: ", colors[MISTY_ROSE]); // this will print given string at x=450 , y=620
	  DrawString( 700, 750, game.highest , colors[MISTY_ROSE]);
	    
	  
	  for(int i=0; i<game.b; i++) {
	    game.bricks[i]->display(); 
	  }
	  
	  game.paddle.display();
	  if(game.level==3) {
	    game.paddle2.display();
	  }
	  for(int i=0; i<game.a; i++) {
	    game.ball[i].display();
	  }
	  for(int i=0; i<game.a; i++) {
	    game.paddle.checkCollision(game.ball[i], game.a);
	    if(game.level==3) { 
	      game.paddle2.checkCollision(game.ball[i], game.a);
	    }
	  }
	  game.food.display();
	  
	  
	  for(int i=0; i<game.b; i++) {
	    for(int j=0; j<game.a; j++) {
	      game.ball[j].checkCollision(game.bricks[i], game.food);
	    }
          }
          
          for(int i=0; i<game.a; i++) {
            game.paddle.checkCollision(game.food, game.ball[i], game.a, game.e);
            if(game.e==1) {
              if(game.paddle2.width==35) {
                game.paddle2.width=70;
              }
              else {
                game.paddle2.width=140;
              }
              game.e=0;
            }
            else if(game.e==2) {
              if(game.paddle2.width==140) {
                game.paddle2.width=70;
              }
              else {
                game.paddle2.width=35;
              }
              game.e=0;
            }
          }
	  
	  glutSwapBuffers(); // do not modify this line..
	}
	
	if(game.ball[0].gameOver>=1){
		game.gameOverScreen(800 , 800 , colors[BLACK]);
		DrawString(350 , 450 , "Game Over" , colors[MISTY_ROSE]);
		
		DrawString( 340, 400,"Your Score is ", colors[DARK_CYAN]); // this will print given string at x=450 , y=620
	    	game.ball[0].scores = to_string(game.ball[0].score) ;
	   	DrawString( 400, 400, game.ball[0].scores , colors[DARK_CYAN]);
	   	DrawString(325 , 350 , "(Press ESC key to exit)" , colors[MISTY_ROSE]);
		
		glutSwapBuffers();
	}

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arrow)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		game.paddle2.setX1(2);

	} else if (key 
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
	        game.paddle2.setX1(1);

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
            for(int i=0; i<game.a; i++) {
	      game.ball[i].bool3=true;
	    }
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {
        
        int x,y,z=0;
        int y1=3;
        if(game.ball[0].a==1) {
          x=3;
          y=3;
        }
        else if(game.ball[0].a==2) {
          x=1;
          y=1;
        }
        else if(game.ball[0].a==3) {
          x=5;
          y=5;
        }
          
        for(int i=0; i<game.a; i++) {
          if(game.ball[i].bool3) {
            if(game.ball[i].bool4) {
              if(game.ball[i].b>=100) {
                game.ball[i].a=1;
                game.ball[i].b=1;
                game.ball[i].bool4=false;
              }
              else {
                game.ball[i].b++;
              }
            }
            if(game.ball[i].bool5) {
              game.ball[i].setX(x);
            }
            game.ball[i].setY(y, game.level, i);
          }
        }
        
        game.food.setY(y1);
        
        if(game.paddle.bool1==true) {
          if(z>=100) {
            game.a=1;
            game.paddle.bool1=false;
          }
          else {
            z++;
          }
        }

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100/FPS, Timer, 0);
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse moves within inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
        
	game.paddle.setX(x);
	
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked within inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 775, height = 800; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Brick Breaker"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif
