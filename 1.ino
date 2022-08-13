int IR1=0;
int IR2=1;
int IR3=2;

int l1=4;
int l2=5;
int l3=6;
int l4=7;

int ldr=A1

void setup()
{
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(ldr,INPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  
}

void loop()
{
  int t0 = analogRead(ldr);
   if (t0<=900)
   {
    int t1 = digitalRead(IR1);
    int t2 = digitalRead(IR2);
    int t3 = digitalRead(IR3);
  
  
  if (t1!=1)
   {
     digitalWrite(l1, HIGH);
     digitalWrite(l2, HIGH);
     digitalWrite(l3, LOW);
     digitalWrite(l4, LOW);
     while(t2!=1)
     {  
     digitalWrite(l1, HIGH);
     digitalWrite(l2, HIGH);
     t2 = digitalRead(IR2);
     }
     
     digitalWrite(l1, LOW);
     digitalWrite(l2, LOW);
     
     delay(10);
     
   }
   
  if (t2!=1)
   {
     digitalWrite(l1, LOW);
     digitalWrite(l2, HIGH);
     digitalWrite(l3, HIGH);
     digitalWrite(l4, LOW);
     
     while (t3!=1)
      {
        digitalWrite(l2, HIGH);
        digitalWrite(l3, HIGH);
        t3 = digitalRead(IR3);
      }
     
     digitalWrite(l2, LOW);
     digitalWrite(l3, LOW);
     
     delay(10);
   } 
   
  if (t3!=1)
   {
     digitalWrite(l1, LOW);
     digitalWrite(l2, LOW);
     digitalWrite(l3, HIGH);
     digitalWrite(l4, HIGH);
      
     delay(2000);
   }
     
     digitalWrite(l1, LOW);
     digitalWrite(l2, LOW);
     digitalWrite(l3, LOW);
     digitalWrite(l4, LOW);
   
   }
   
   else
   {
     
     digitalWrite(l1, LOW);
     digitalWrite(l2, LOW);
     digitalWrite(l3, LOW);
     digitalWrite(l4, LOW);
   }
    delay (1);
   
}
