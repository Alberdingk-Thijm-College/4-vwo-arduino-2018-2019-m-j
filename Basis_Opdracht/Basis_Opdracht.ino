int l1g = 10;
int l2g = 11;
int l3g = 12;
int l4g = 13;

int l1r = 5;
int l2r = 6;
int l3r = 7;
int l4r = 8;

void setup(){
  pinMode( l1g, OUTPUT);
  pinMode( l2g, OUTPUT);
  pinMode( l3g, OUTPUT);
  pinMode( l4g, OUTPUT);
  
  pinMode( l1r, OUTPUT);
  pinMode( l2r, OUTPUT);
  pinMode( l3r, OUTPUT);
  pinMode( l4r, OUTPUT);
}

void loop(){
  digitalWrite( l1g, HIGH);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, LOW);
  
  digitalWrite( l1r, LOW);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, HIGH);
  delay(2000);
  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, HIGH);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, LOW);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, LOW);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, HIGH);
  delay(2000);
  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, HIGH);
  digitalWrite( l4g, LOW);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, LOW);
  digitalWrite( l4r, HIGH);
  delay(2000);
  
  digitalWrite( l1g, LOW);
  digitalWrite( l2g, LOW);
  digitalWrite( l3g, LOW);
  digitalWrite( l4g, HIGH);
  
  digitalWrite( l1r, HIGH);
  digitalWrite( l2r, HIGH);
  digitalWrite( l3r, HIGH);
  digitalWrite( l4r, LOW);
  delay(2000);
}



