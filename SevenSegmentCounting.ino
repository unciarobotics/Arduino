int a =2,b=3,c=4,d=5,e=6,f=7,g=8,h=9,en1=10,en2=11;
void setup() {
pinMode(a,OUTPUT);pinMode(b,OUTPUT);pinMode(c,OUTPUT);pinMode(d,OUTPUT);pinMode(e,OUTPUT);
pinMode(f,OUTPUT);pinMode(g,OUTPUT);pinMode(h,OUTPUT);pinMode(en1,OUTPUT);pinMode(en2,OUTPUT);
}

void loop() {
for(int i = 0;i<10;i++)
  { for (int j=0;j<10;j++)
     {for(int k=0;k<30;k++)
       digitalWrite(en1,1);digitalWrite(en2,0);
       printdigit(i);
       digitalWrite(en1,0);digitalWrite(en2,1);
       printdigit(j); 
     }
   
   }
}




void printdigit(int x)
{switch(x)
{case 0:digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);
       digitalWrite(e,0);digitalWrite(f,0);digitalWrite(g,1);digitalWrite(h,1);break;
case 1:digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,1);
       digitalWrite(e,1);digitalWrite(f,1);digitalWrite(g,1);digitalWrite(h,1);break;
case 2:digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,1);digitalWrite(d,0);
       digitalWrite(e,0);digitalWrite(f,1);digitalWrite(g,0);digitalWrite(h,1);break;
case 3:digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);
       digitalWrite(e,1);digitalWrite(f,1);digitalWrite(g,0);digitalWrite(h,1);break;
case 4:digitalWrite(a,1);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,1);
       digitalWrite(e,1);digitalWrite(f,0);digitalWrite(g,0);digitalWrite(h,1);break;
case 5:digitalWrite(a,0);digitalWrite(b,1);digitalWrite(c,0);digitalWrite(d,0);
       digitalWrite(e,1);digitalWrite(f,0);digitalWrite(g,0);digitalWrite(h,1);break;
case 6:digitalWrite(a,0);digitalWrite(b,1);digitalWrite(c,0);digitalWrite(d,0);
       digitalWrite(e,0);digitalWrite(f,0);digitalWrite(g,0);digitalWrite(h,1);break;
case 7:digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,1);
       digitalWrite(e,1);digitalWrite(f,1);digitalWrite(g,1);digitalWrite(h,1);break;
case 8:digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);
       digitalWrite(e,0);digitalWrite(f,0);digitalWrite(g,0);digitalWrite(h,1);break;
case 9:digitalWrite(a,0);digitalWrite(b,0);digitalWrite(c,0);digitalWrite(d,0);
       digitalWrite(e,1);digitalWrite(f,0);digitalWrite(g,0);digitalWrite(h,1);break;
}}
