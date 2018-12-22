            
#include <SPI.h>
#include <SD.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(14, 15, 16, 17,18 ,19);                                
File logfile;

#define rf1 7
#define rf2 6
#define rf3 5
#define rf4 8
#define sw 9
int f1,f2,f3,f4,x,y,z;

int sec1,sec2,forc;
const int chipSelect = 4;
  String data1= "",data2= "",data3= "",data4= "",data5= "",data6= "",data7= "";

  int i[4], j,l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0,aa=0,bb=0,cc=0,dd=0,L1,L2,L3,L4;
int b[3], d, ww=0,xx=0,yy=0,zz=0;
 int e[3], f;
  int ee[3], ff;
int g[3], h;
int c[3], a;int  mils,s1,s2,s3,s4,min1,min2,min3,min4,wasmils;
void setup()
{
  pinMode(rf1,OUTPUT);
  pinMode(rf2,OUTPUT);
  pinMode(rf3,OUTPUT);
  pinMode(rf4,OUTPUT);
    pinMode(sw,OUTPUT);
 lcd.begin(16, 2);
 lcd.setCursor(0,0); 
 lcd.print("BLUETOOTH        ");
 lcd.setCursor(0,1);
 lcd.print(" HOME AUTOMATION  ");
 delay(800);  lcd.clear(); 
 
 Serial.begin(9600); 
                            
   digitalWrite(rf1,HIGH);                  
   digitalWrite(rf2,HIGH); 
   digitalWrite(rf3,HIGH); 
   digitalWrite(rf4,HIGH); 

  lcd.clear();  


 while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.print("Initializing SD card...");

  // see if the card is present and can be initialized:
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    // don't do anything more:
    return;
  }
  Serial.println("card initialized.");
  



  char filename[] = "LOGGER00.csv";
  for (uint8_t i = 0; i < 100; i++) {
    filename[6] = i/10 + '0';
    filename[7] = i%10 + '0';
    if (! SD.exists(filename)) {
      // only open a new file if it doesn't exist
      logfile = SD.open(filename, FILE_WRITE); 

      // Serial.println(filename, FILE_WRITE); 
      break;  // leave the loop!
    }
     }
  
 /* if (! logfile) {
    error("couldnt create file");
  }*/
  
 Serial.print("Logging to: ");
  Serial.println(filename);



  logfile.println("LOAD1_POWER,LOAD2_POWER,LOAD3_POWER,LOAD4_POWER");    
 //Serial.println("LOAD1,LOAD2,LOAD3,LOAD4"); 
 
  // If you want to set the aref to something other than 5v

  delay(1000);delay(500);
}

void loop() 
{
   sec1++; 
  
  mils = millis();



    if ( mils - wasmils >= 1000 )        
       {
 s1++;if(s1>59){min1++;s1=0;}
 s2++;if(s2>59){min2++;s2=0;}
 s3++;if(s3>59){min3++;s3=0;}
 s4++;if(s4>59){min4++;s4=0;}
      
      wasmils = mils;
       }
//Serial.println(min1);
   if (Serial.available() > 0)
  {
      delay(10);
  ee[ff]= e[f]=g[h]= i[j]= b[d]=c[a]= Serial.read();


    if (b[0] == '#')d++; else d = 0;

      if (e[0] == '@')f++; else f = 0;
        if (ee[0] == '&')ff++; else ff = 0;
  
     if (i[0] == '*')j++; else j = 0;
       if (g[0] == '$')h++; else h = 0;
     delay(10);
  }


if (f > 2)    //@
  {
    l1=(e[1]-0x30)*1;
    l2=(e[2]-0x30)*1;
    f=0; s1=0;min1=0;aa=1;ww=1;}

  

  if (d > 2)  //  #
  {
    l3=(b[1]-0x30)*1;
    l4=(b[2]-0x30)*1;

    d = 0;s2=0;min2=0;bb=1;xx=1;
  }
    if (j > 2)  //  *
  {
    l5=(i[1]-0x30)*1;
    l6=(i[2]-0x30)*1;

    j = 0;s3=0;min3=0;cc=1;yy=1;
  }   
   if (h > 2)  //  $
  {
    l7=(g[1]-0x30)*1;
    l8=(g[2]-0x30)*1;
       h = 0;s4=0;min4=0;dd=1;zz=1;
  }  

  
   if(min1>=l1 && aa==1  ){
   
  // Serial.print("time load on");
   digitalWrite(sw,LOW);delay(500);digitalWrite(rf1,LOW); 
   } 
   if(min1>=l2 && aa==1){
   // Serial.print("time load oFF");
    digitalWrite(sw,LOW);delay(500);digitalWrite(rf1,HIGH);  aa=0;}
   
if(min2==l3  && bb==1){digitalWrite(sw,LOW);delay(500);digitalWrite(rf2,LOW);} if(min2==l4&& bb==1){digitalWrite(sw,LOW);delay(500);digitalWrite(rf2,HIGH); bb=0;}

if(min3==l5 && cc==1){digitalWrite(sw,HIGH);delay(500);digitalWrite(rf3,LOW);} if(min3==l6 && cc==1){digitalWrite(sw,HIGH);digitalWrite(rf3,HIGH);cc=0;}
   
if(min4==l7 && dd==1){digitalWrite(sw,HIGH);delay(500);digitalWrite(rf4,LOW);} if(min4==l8 && dd==1){digitalWrite(sw,HIGH);digitalWrite(rf4,HIGH);dd=0;}





  if(ee[1]=='1'){digitalWrite(sw,LOW);delay(500);digitalWrite(rf1,LOW); Serial.print("load1 on");ff=0;delay(100);}
  if(ee[1]=='2'){digitalWrite(sw,LOW);delay(500);digitalWrite(rf1,HIGH); Serial.print("load1 off");ff=0;delay(100);}
  
   if(ee[1]=='3'){digitalWrite(sw,LOW);delay(500);digitalWrite(rf2,LOW); Serial.print("load2 on");ff=0;delay(100);}
  if(ee[1]=='4'){digitalWrite(sw,LOW);delay(500);digitalWrite(rf2,HIGH); Serial.print("load2 off");ff=0;delay(100);}
  
  
   if(ee[1]=='5'){digitalWrite(sw,HIGH);delay(500);digitalWrite(rf3,LOW); Serial.print("load3 on");ff=0;delay(100);}
  if(ee[1]=='6'){digitalWrite(sw,HIGH);delay(500);digitalWrite(rf3,HIGH); Serial.print("load3 off");ff=0;delay(100);}

   if(ee[1]=='7'){digitalWrite(sw,HIGH);delay(500);digitalWrite(rf4,LOW); Serial.print("load4 on");ff=0;delay(100);}
  if(ee[1]=='8'){digitalWrite(sw,HIGH);delay(500);digitalWrite(rf4,HIGH); Serial.print("load4 off");ff=0;delay(100);}

   if(ee[1]=='9'){digitalWrite(sw,LOW);delay(500);digitalWrite(rf1,LOW);
   digitalWrite(rf2,LOW);
   delay(500);
   digitalWrite(sw,HIGH);delay(500);
   digitalWrite(rf3,LOW);digitalWrite(rf4,LOW);
   
   Serial.print("load all on");ff=0;delay(100);}
  if(ee[1]=='a'){digitalWrite(sw,LOW);delay(500);digitalWrite(rf1,HIGH);digitalWrite(rf2,HIGH);delay(500);
  digitalWrite(sw,HIGH);delay(500);
  digitalWrite(rf3,HIGH);digitalWrite(rf4,HIGH);
  
  
  Serial.print("load all off");ff=0;delay(100);}
   lcd.setCursor(0,0);
   lcd.print("L1: , ");
   lcd.setCursor(3,0);
   lcd.print(l1);   

lcd.setCursor(5,0);
 
   lcd.print(l2);


   lcd.setCursor(8,0);
   lcd.print("L2: , ");
   lcd.setCursor(11,0);
   lcd.print(l3);
  lcd.setCursor(13,0);
  lcd.print(l4);

   lcd.setCursor(0,1);
   lcd.print("L3: , ");
   lcd.setCursor(3,1);
   lcd.print(l5);   

lcd.setCursor(5,1);
 
   lcd.print(l6);


   lcd.setCursor(8,1);
   lcd.print("L4: , ");
   lcd.setCursor(11,1);
   lcd.print(l7);
  lcd.setCursor(13,1);
  lcd.print(l8);

 delay(200);



  if(ww==1 || xx==1 ||yy==1 || zz==1){
L1=(l2-l1)*20;
L2=(l4-l3)*23;
L3=(l6-l5)*24;
L4=(l8-l7)*25;

   logfile.print(L1);
   logfile.print(",");
   logfile.print(L2);


    logfile.print(",");
    logfile.print(L3);
   logfile.print(",");
   logfile.println(L4);
logfile.flush();
  
 ww=0;xx=0;yy=0;zz=0;


   }
ee[1]=0;
}


