#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

const byte cpt0[] PROGMEM = {8,3,0xF8,0x88,0xF8,};
const byte cpt1[] PROGMEM = {8,3,0x90,0xF8,0x80,};
const byte cpt2[] PROGMEM = {8,3,0xE8,0xA8,0xB8,};
const byte cpt3[] PROGMEM = {8,3,0xA8,0xA8,0xF8,};
const byte cpt4[] PROGMEM = {8,3,0x38,0x20,0xF8,};
const byte cpt5[] PROGMEM = {8,3,0xB8,0xA8,0xE8,};
const byte cpt6[] PROGMEM = {8,3,0xF8,0xA8,0xE8,};
const byte cpt7[] PROGMEM = {8,3,0x8,0x8,0xF8,};
const byte cpt8[] PROGMEM = {8,3,0xF8,0xA8,0xF8,};
const byte cpt9[] PROGMEM = {8,3,0x38,0x28,0xF8,};

byte const * numbers[] = { cpt0,cpt1,cpt2,cpt3,cpt4,cpt5,cpt6,cpt7,cpt8,cpt9};


const byte background[] PROGMEM = {88,48,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x7F,0xFE,0xDA,0x40,0xFF,0xD0,0x0,0x0,0x0,0x70,0x0,0x0,0xFE,0xA,0xA0,0xFF,0xA0,0x0,0x0,0x0,0xF8,0x0,0x0,0xE,0xF9,0x20,0xFF,0x41,0xFF,0xF0,0x1,0x6C,0x0,0x0,0x1,0xF8,0x0,0xFE,0x82,0x0,0x0,0x1,0x4,0x3F,0x80,0x0,0x79,0x0,0xFD,0x4,0x0,0x0,0x1,0x7C,0xF,0xFF,0x0,0x3A,0x80,0xFA,0x8,0x0,0x0,0x0,0xF8,0x0,0x7F,0xF0,0x3A,0x80,0xF4,0x10,0xFF,0xFC,0x0,0x70,0x0,0x0,0xFC,0x18,0x0,0xE8,0x21,0xFF,0xFE,0x0,0x0,0x0,0x0,0xE,0x19,0x0,0xD0,0x1,0xF0,0x0,0x0,0x0,0x0,0x0,0x6,0x1A,0x80,0xA0,0x1,0xC0,0x0,0x0,0x0,0x0,0x0,0x6,0x19,0x0,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x8,0x0,0x80,0x0,0x1,0xF0,0x0,0x0,0x0,0x0,0x3,0xB,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x8,0x80,0x0,0x1,0xF0,0x0,0x0,0x70,0x0,0x1C,0x1,0x8,0x80,0x0,0x0,0x0,0x0,0x0,0xF8,0x0,0x3E,0x1,0x8,0x0,0x0,0x0,0x1,0xF0,0x1,0x14,0x0,0x55,0x0,0xB,0x80,0x0,0x0,0x0,0x0,0x1,0x54,0x0,0x55,0x0,0xA,0x80,0x0,0x1,0xF0,0x0,0x1,0x44,0x0,0x41,0x0,0xA,0x0,0x0,0x0,0x0,0x0,0x0,0xF8,0x0,0x3E,0x0,0x8,0x0,0x0,0x0,0x1,0xF0,0x0,0x70,0x0,0x1C,0x0,0xA,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x1,0xF0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x1,0xF0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x1,0xF0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x70,0x0,0x0,0x0,0x8,0x0,0x80,0x0,0x1,0xF0,0x0,0xF8,0x0,0x0,0x0,0x8,0x0,0x40,0x0,0x0,0x0,0x1,0x6C,0x0,0x0,0x0,0x8,0x0,0xA0,0x1,0xC0,0x0,0x1,0x4,0x0,0x3E,0x18,0x8,0x0,0xD0,0x1,0xF0,0x0,0x1,0x7C,0x1,0xD5,0xC,0x8,0x0,0xE8,0x21,0xFF,0xFE,0x0,0xF8,0xF,0xD5,0xC,0x8,0x0,0xF4,0x10,0xFF,0xFC,0x0,0x70,0x7,0xC1,0xE,0x8,0x0,0xFA,0x8,0x0,0x0,0x0,0x0,0x3,0xFF,0xE,0x8,0x0,0xFD,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0xE,0x18,0x0,0xFE,0x82,0x0,0x0,0x0,0x0,0x20,0x0,0xE,0x18,0x0,0xFF,0x41,0xFF,0xF0,0x0,0x0,0x30,0x0,0x1C,0x18,0x0,0xFF,0xA0,0x0,0x0,0x0,0x0,0x3C,0x0,0xF8,0x18,0x0,0xFF,0xD0,0x0,0x0,0x0,0x0,0x3F,0xFF,0xF0,0x38,0x0,0x0,0x8,0x0,0x0,0x0,0x0,0x3F,0xFF,0x0,0x38,0x0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x0,0x78,0x0,0xFF,0xF8,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0xF8,0x0,0xFF,0xF8,0x0,0x0,0x0,0x0,0x0,0x0,0xF,0xF8,0x0,0xFF,0xF8,0x0,0x0,0x0,0x0,0x0,0x0,0xFF,0xF8,0x0,0xFF,0xF8,0x0,0x0,0x0,0x0,0x0,0x7F,0xFF,0xF8,0x0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x0,};
const byte ball[] PROGMEM = {8,4,0x60,0xF0,0xD0,0x60,};
const byte flipperBas[] PROGMEM = {8,9,0x60,0x60,0xE0,0xE0,0xE0,0xC0,0xC0,0x80,0x80,};
const byte flipperHaut[] PROGMEM = {8,7,0x40,0xF0,0x38,0x38,0x1E,0xE,0x3,};


const byte ressortBAs[] PROGMEM = {8,4,0x8,0x58,0xA8,0x8,};
const byte ressortHaut[] PROGMEM = {16,4,0x0,0x40,0xAA,0xC0,0x55,0x40,0x0,0x40,};

boolean isDebug = false;

int score = 0;
int8_t vieRestante = 2;
boolean isRessortHaut = true;
boolean isLeftFlipperPressed = false;
boolean isRightFlipperPressed = false;
#define GRAVITE -0.1
#define FORCE_RESSORT 6
#define MAX_VITESSE_BALL 5
#define FORCE_FLIPPER 5
#define TIME_FORCE  5
#define FROTTEMENT 0.98;
byte timeForce = 0;

typedef struct{
  float x1,y1,x2,y2;
} Droite;

#define NB_DROITE 22
Droite droites[NB_DROITE] = {
  {0,0,84,0},
  {0,13,11,0},
  {8,11,15,4},
  {16,4,27,4},
  {16,11,19,9},
  {20,9,30,9},
  {50,5,70,9},
  {71,9,71,16},
  {65,-1,77,10},
  {75,8,75,40},
    {56,41,49,36},
    {67,39,67,31},
    {67,39,10,42},
  {10,42,10,48},
  {10,48,66,48},
  {66,48,75,40},
  {0,29,14,45},
  {8,31,16,38},
  {16,38,27,38},
  {15,30,20,33},
  {20,33,30,33},
  {0,46,84,46}
};

#define NB_BUMPER 19 
Droite bumper[NB_BUMPER] = {
  {43,4,44,5},//bumper 1
  {44,5,43,7},
  {43,7,40,5},
  {40,5,43,4},
  {43,16,44,18},//bumper 2
  {44,18,43,20},
  {43,20,40,18},
  {40,18,43,16},
  {43,29,44,31},//bumper 3
  {44,31,43,33},
  {43,33,40,31},
  {40,31,43,29},
  {60,15,63,18},//Bumper 4
  {63,18,60,21},
  {60,21,53,18},
  {53,18,60,15},
  {63,31,63,35},//bumper 5
  {63,35,55,34},
  {53,34,63,31},
};

#define TIME_FLASH 30
typedef struct{
  float x1,y1,x2,y2;
  int8_t time;
} Flasher;
#define NB_FLASHER 9 
Flasher flasher[NB_FLASHER] = {
  {22,12,29,15,30},
  {22,16,29,19,0},
  {22,20,29,23,0},
  {22,24,29,27,0},
  {22,28,29,31,0},
  {14,14,21,17,0},
  {14,18,21,21,0},
  {14,22,21,25,0},
  {14,26,21,29,30},
};

typedef struct{
  float x, y, r, vx, vy;
} Circle;

Circle Ball;

//boolean collideDroite(Droite d2,Droite *d3);

typedef struct {
  float x,y;
} Vecteur;


boolean CollisionSegment(Droite d1,Circle C);
boolean CollisionDroite(Droite d1,Circle C);
Vecteur ProjectionI(Droite d1,Circle C);
Vecteur GetNormale(Droite d1,Circle C);
Vecteur CalculerVecteurV2(Circle v,Vecteur N);
boolean CollisionBallExtremiter(Droite d1, Circle C);
void rebond(Droite obst);
boolean collideDroite(Droite d2);

Droite flippR;
Droite flippL;

void setup()
{
  gb.begin();
  goTitleScreen();
  gb.setFrameRate(40);//60
}

void initGame()
{
  gb.battery.show = false;
  vieRestante = 2;
  Ball.x = 40;
  Ball.y = 43;
  
  flippR.x1 = 8;
  flippR.y1 = 32;
  flippR.x2 = 6;
  flippR.y2 = 23;
    
  flippL.x1 = 8;
  flippL.y1 = 10;
  flippL.x2 = 6;
  flippL.y2 = 19;
}


void loop()
{
 if(gb.update())
 {
   if(gb.buttons.pressed(BTN_C))
   {
     goTitleScreen();
   }
   if(gb.buttons.pressed(BTN_B))
   {
     isDebug = !isDebug;
   }
      
   updateWorld();
   updateBall();
   drawBall();
   drawWorld();
 }
}

void updateWorld()
{    
  if(timeForce>0)
  {
    timeForce--;
    if(isLeftFlipperPressed)
    {
      flippL.x2 = 16 - timeForce;
      flippL.y2 = 20 - ( TIME_FORCE- timeForce);
    }
    
    if(isRightFlipperPressed)
    {      
      flippR.x2 = 16 - timeForce;
      flippR.y2 = 26 - (timeForce/2);
    }
  }
  isRessortHaut = true;
  if(gb.buttons.repeat(BTN_LEFT,1))
  {
    isRessortHaut = false;
     
    timeForce = TIME_FORCE;
    
  }
  
  if(gb.buttons.pressed(BTN_UP))
  {
    isLeftFlipperPressed = true;
    timeForce = TIME_FORCE;
    
    //flippL.x2 = 16;
    //flippL.y2 = 16;
  }
  else if(gb.buttons.released(BTN_UP))
  {
    flippL.x2 = 6;
    flippL.y2 = 19;
    isLeftFlipperPressed = false;
  }
  if(gb.buttons.pressed(BTN_DOWN))
  {
    isRightFlipperPressed = true;
    timeForce = TIME_FORCE;
    
    //flippR.x2 = 16;
    //flippR.y2 = 26;
  }
  else if(gb.buttons.released(BTN_DOWN))
  {
    flippR.x2 = 6;
    flippR.y2 = 23;
    isRightFlipperPressed = false;
  }
}

void updateBall()
{
  
   if(gb.buttons.pressed(BTN_A))
   {
     //Shake the pinball
     Ball.vx += ((random(0,20)- 10.)/10.);
     Ball.vy += ((random(0,20)- 10.)/10.);
     //Serial.println(((random(0,20)- 10.)/10.));
   }
   else
   {
    Ball.vx += GRAVITE; 
   }
  if(abs(Ball.vx)>MAX_VITESSE_BALL) Ball.vx = (Ball.vx>0)? MAX_VITESSE_BALL: -MAX_VITESSE_BALL ;
  if(abs(Ball.vy)>MAX_VITESSE_BALL) Ball.vy = (Ball.vy>0)? MAX_VITESSE_BALL: -MAX_VITESSE_BALL ;
  if(gb.collideRectRect(13,43,((isRessortHaut)? 10 : 5),4,Ball.x,Ball.y,2,2))
  {
    if(isRessortHaut)
    {
      if(timeForce>0)
      {
        float percent = 1 - ((Ball.x - 18)/5);
        float force = FORCE_RESSORT * percent;    
        Ball.vx += force;
        //Ball.vy -= 0.001;
        Ball.x = 23;
      }
    }
    else 
    {
        Ball.x = 18;
    }
    
    if(Ball.vx<0)
    {
      Ball.vx = -Ball.vx*0.5;
    }
  }
  Ball.vx *= 0.98;//friction
  
  Ball.x += Ball.vx;
  Ball.y += Ball.vy;
  
  if(CollisionSegment(flippR,Ball))
  {
    rebond(flippR);
    if(isRightFlipperPressed && timeForce>0)
    {
      if(Ball.vx<1)
      {
        Ball.vx = 1;
      }
      Ball.vx *= 1.5;
      Ball.vy *= 1.5;

    }
  }
  else if(CollisionSegment(flippL,Ball))
  {
     rebond(flippL);
    if(isLeftFlipperPressed && timeForce>0)
    {
      if(Ball.vx<1)
      {
        Ball.vx = 1;
      }
      Ball.vx *= 1.5;
      Ball.vy *= 1.5;
    }
  }
    
  //boolean isCoolide = false;
  for(byte i=0;i<NB_DROITE;i++)
  {
    if(CollisionSegment(droites[i],Ball))
    {
        rebond(droites[i]);
        break;
        //isCoolide = true;
    }
  }
  
  for(byte i=0;i<NB_BUMPER;i++)
  {
    if(CollisionSegment(bumper[i],Ball))
    {
        rebond(bumper[i]);
        Ball.x *= 1.05;
        Ball.y *= 1.05;
        
        if(i<4 || (i>7 && i<12))
        {
          score += 10;
        }
        else if(i>11)
        {
          score += 30;
        }
        else 
        {
          score += 20;
        }
        break;
        //isCoolide = true;
    }
  }
  
   for(byte i=0;i<NB_FLASHER;i++)
  {
    if(flasher[i].time>0) 
    {
      flasher[i].time--;
    }
    Droite dF;
    dF.x1 = flasher[i].x1;
    dF.y1 = flasher[i].y1;
    dF.x2 = flasher[i].x2;
    dF.y2 = flasher[i].y2;
    if(CollisionSegment(dF,Ball))
    {
         flasher[i].time = TIME_FLASH;
         score += 1;
        break;
        //isCoolide = true;
    }
  }
  
  if(score>100000)
  {
    score = 999999;
  }
  
  
  
   
  //prevent circles from going out of the screen :
  
  if(Ball.x > LCDWIDTH){
    Ball.x = LCDWIDTH - 2;
  }

  if(Ball.y < 0){
    Ball.y = 2;
  }
  if(Ball.y > LCDHEIGHT){
    Ball.y = LCDHEIGHT - 2;
  }
   
  if(Ball.x<-5)
  {
    Ball.vx = 0;
    Ball.vy = 0;
    Ball.x = 40;
    Ball.y = 43;
    vieRestante--;
    
    if(vieRestante < 0)
      vieRestante = 2;
  }
}

void rebond(Droite obst)
{
  Vecteur N = GetNormale(obst,Ball);
  Vecteur ptImpact =  ProjectionI(obst,Ball);
  Ball.x = ptImpact.x-2;
  Ball.y = ptImpact.y-2;
  Vecteur rebond =CalculerVecteurV2(Ball,N);
  Ball.vx = rebond.x;
  Ball.vy = rebond.y;
  Ball.vx *= FROTTEMENT;
  Ball.vy *= FROTTEMENT;
}

void drawBall()
{
  gb.display.drawBitmap(Ball.x,Ball.y, ball);
}

void drawWorld()
{
  if(isDebug)
  {
    for(byte i=0;i<NB_BUMPER;i++)
    {
      gb.display.drawLine(bumper[i].x1, bumper[i].y1, bumper[i].x2, bumper[i].y2);
    }
  
    for(byte i=0;i<NB_DROITE;i++)
    {
      gb.display.drawLine(droites[i].x1, droites[i].y1, droites[i].x2, droites[i].y2);
    }
    gb.display.drawLine(flippR.x1, flippR.y1, flippR.x2, flippR.y2);
    gb.display.drawLine(flippL.x1, flippL.y1, flippL.x2, flippL.y2);
  }
  else 
  {
    gb.display.drawBitmap(0,0,background);
    gb.display.drawBitmap(8,((isRightFlipperPressed)? 25 : 23), ((isRightFlipperPressed)? flipperHaut : flipperBas),0,FLIPV);
    gb.display.drawBitmap(8,10, ((isLeftFlipperPressed)? flipperHaut : flipperBas));
  }
  gb.display.drawBitmap(13,43, ((isRessortHaut)? ressortHaut : ressortBAs));
  gb.display.setColor(INVERT);
  for(byte i=0;i<vieRestante;i++)
  {
    gb.display.drawBitmap(2+ (i*5),43, ball);
  }
  for(byte i=0;i<NB_FLASHER;i++)
  {
    if(flasher[i].time>0 && (gb.frameCount%4 > 1)) 
    {
      gb.display.fillRect(flasher[i].x1,flasher[i].y1,(flasher[i].x2 - flasher[i].x1),(flasher[i].y2 - flasher[i].y1));
    }
  }
  
  gb.display.setColor(BLACK);
  
  
  
  
  //78 43 , -4 d'espacement
  for(byte i=0;i<6;i++)
  {
    gb.display.drawBitmap(78,(43 -(4*i)), numbers[((int8_t)((score /((int)pow(10,i)))  % 10))]);
  }
}


boolean collideDroite(Droite d2)
 {
  Droite d1;
  d1.x2 = Ball.x + 2;
  d1.y2 = Ball.y + 2;
  d1.x1 = d1.x2 - Ball.vx;
  d1.y1 = d1.y2 - Ball.vy;
  
  float  distAB, theCos, theSin, newX, ABpos ;
  if (d1.x1==d1.x2 && d1.y1==d1.y2 || d2.x1==d2.x2 && d2.y1==d2.y2) return false;

  //  Fail if the segments share an end-point.
  if (d1.x1==d2.x1 && d1.y1==d2.y1 || d1.x2==d2.x1 && d1.y2==d2.y1
  ||  d1.x1==d2.x2 && d1.y1==d2.y2 || d1.x2==d2.x2 && d1.y2==d2.y2) {
    return false; }

  //  (1) Translate the system so that point A is on the origin.
  d1.x2-=d1.x1; d1.y2-=d1.y1;
  d2.x1-=d1.x1; d2.y1-=d1.y1;
  d2.x2-=d1.x1; d2.y2-=d1.y1;

  //  Discover the length of segment A-B.
  distAB=sqrt(d1.x2*d1.x2+d1.y2*d1.y2);

  //  (2) Rotate the system so that point B is on the positive X axis.
  theCos=d1.x2/distAB;
  theSin=d1.y2/distAB;
  newX=d2.x1*theCos+d2.y1*theSin;
  d2.y1  =d2.y1*theCos-d2.x1*theSin; d2.x1=newX;
  newX=d2.x2*theCos+d2.y2*theSin;
  d2.y2  =d2.y2*theCos-d2.x2*theSin; d2.x2=newX;

  //  Fail if segment C-D doesn't cross line A-B.
  if (d2.y1<0. && d2.y2<0. || d2.y1>=0. && d2.y2>=0.) return false;

  //  (3) Discover the position of the intersection point along line A-B.
  ABpos=d2.x2+(d2.x1-d2.x2)*d2.y2/(d2.y2-d2.y1);

  //  Fail if segment C-D crosses line A-B outside of segment A-B.
  if (ABpos<0. || ABpos>distAB) return false;
 

  //  Success.
  return true; 
}


boolean CollisionDroite(Droite d1,Circle C)
{
   Vecteur u;
   u.x = d1.x2 - d1.x1;
   u.y = d1.y2 - d1.y1;
   Vecteur AC;
   AC.x = (C.x+2) - d1.x1;
   AC.y = (C.y+2) - d1.y1;
   float numerateur = u.x*AC.y - u.y*AC.x;   // norme du vecteur v
   if (numerateur <0)
      numerateur = -numerateur ;   // valeur absolue ; si c'est négatif, on prend l'opposé.
   float denominateur = sqrt(u.x*u.x + u.y*u.y);  // norme de u
   float CI = numerateur / denominateur;
   if (CI<2)//ma balle a un rayon de deux PX
      return true;
   else
      return false;
}

boolean CollisionSegment(Droite d1,Circle C)
{
   if (CollisionDroite(d1,C) == false)
     return false;  // si on ne touche pas la droite, on ne touchera jamais le segment
   Vecteur AB,AC,BC;
   AB.x = d1.x2 - d1.x1;
   AB.y = d1.y2 - d1.y1;
   AC.x = (C.x+2) - d1.x1;
   AC.y = (C.y+2) - d1.y1;
   BC.x = (C.x+2) - d1.x2;
   BC.y = (C.y+2) - d1.y2;
   float pscal1 = AB.x*AC.x + AB.y*AC.y;  // produit scalaire
   float pscal2 = (-AB.x)*BC.x + (-AB.y)*BC.y;  // produit scalaire
   if (pscal1>=0 && pscal2>=0)
      return true;   // I entre A et B, ok.
   // dernière possibilité, A ou B dans le cercle
   if (CollisionBallExtremiter(d1,C))
     return true;
     
   return false;
}

boolean CollisionBallExtremiter(Droite d1, Circle C)
{
  return false;
}

Vecteur ProjectionI(Droite d1,Circle C)
{
  Vecteur u,AC;
  u.x = d1.x2 - d1.x1; 
  u.y = d1.y2 - d1.y1; 
  AC.x = (C.x+2) - d1.x1;
  AC.y = (C.y+2) - d1.y1;
  float ti = (u.x*AC.x + u.y*AC.y)/(u.x*u.x + u.y*u.y);
  Vecteur I;
  I.x = d1.x1 + ti*u.x;
  I.y = d1.y1 + ti*u.y;
  return I;
}

Vecteur GetNormale(Droite d1,Circle C)
{
  Vecteur AC,u,N;
  u.x = d1.x2 - d1.x1;  
  u.y = d1.y2 - d1.y1;
  AC.x = C.x - d1.x1;  
  AC.y = C.y - d1.y1;
  float parenthesis = u.x*AC.y-u.y*AC.x;  // calcul une fois pour les deux
  N.x = -u.y*(parenthesis);
  N.y = u.x*(parenthesis);
  // normalisons
  float norme = sqrt(N.x*N.x + N.y*N.y);
  N.x/=norme;
  N.y/=norme;
  return N;
}

Vecteur CalculerVecteurV2(Circle v,Vecteur N)
{
  Vecteur v2;
  float pscal = (v.vx*N.x +  v.vy*N.y);
  v2.x = v.vx -2*pscal*N.x;
  v2.y = v.vy -2*pscal*N.y;
  return v2;
}

