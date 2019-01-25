int l1g = 10;
int l2g = 11;
int l3g = 12;
int l4g = 13;
int lsg = 4;

int l1r = 5;
int l2r = 6;
int l3r = 7;
int l4r = 8;
int lsr = 2;

int speaker = 3;

int knopje = 9;
int toestand = 0;
int toestand2 = 0;

void setup() {
  pinMode( l1g, OUTPUT);
  pinMode( l2g, OUTPUT);
  pinMode( l3g, OUTPUT);
  pinMode( l4g, OUTPUT);
  pinMode( lsg, OUTPUT);
  
  pinMode( l1r, OUTPUT);
  pinMode( l2r, OUTPUT);
  pinMode( l3r, OUTPUT);
  pinMode( l4r, OUTPUT);
  pinMode( lsr, OUTPUT);

  pinMode( knopje, INPUT);
}

void loop(){
  digitalWrite( l1g, HIGH);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, LOW);
  digitalWrite( lsg, LOW); 
  
  digitalWrite( l1r, LOW);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, HIGH);
  digitalWrite( lsr, HIGH);
  vertraging();
  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, HIGH);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, LOW);
  digitalWrite( lsg, LOW);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, LOW);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, HIGH);
  digitalWrite( lsr, HIGH);
  vertraging();
  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, HIGH);
  digitalWrite( l4g, LOW);
  digitalWrite( lsg, LOW);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, LOW);
  digitalWrite( l4r, HIGH);
  digitalWrite( lsr, HIGH);
  vertraging();
  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, HIGH);
  digitalWrite( lsg, LOW);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, LOW);
  digitalWrite( lsr, HIGH);
  vertraging();
  
    if (toestand2 == 1){
      stoplicht(); 
      toestand2 = 0; 
    }
  
}

void vertraging(){
   for (int i=0; i <= 2000; i++){
    
   toestand = digitalRead(knopje);
    if (toestand == HIGH){
       toestand2 = 1;
    }
      delay(1);
   }
}




void stoplicht(){
  tone(speaker, 500);
  lichtstop();
  delay(200);
  noTone(speaker);
  lichtstop();
  delay(200);
  tone(speaker, 500);
  lichtstop();
  delay(200);

  noTone(speaker);
  lichtstop();
  delay(200);
  tone(speaker, 500);
  lichtstop();
  delay(200);
  noTone(speaker);
  lichtstop();
  delay(200);
  
  tone(speaker, 500);
  lichtstop();
  delay(200);
  noTone(speaker);
  lichtstop();
  delay(200);
  tone(speaker, 500);
  lichtstop();
  delay(200);
  
  noTone(speaker);
  lichtstop();
  delay(200);
  tone(speaker, 500);
  lichtstop();
  delay(200);
  noTone(speaker);
  lichtstop();
  delay(200);

  tone(speaker, 500);
  lichtstop();
  delay(200);
  noTone(speaker);
  lichtstop();
  delay(200);
}
void lichtstop(){  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, LOW);
  digitalWrite( lsg, HIGH);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, HIGH);
  digitalWrite( lsr, LOW);
}
