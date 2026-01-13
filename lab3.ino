int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int nokta=9;
void setup() {

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(nokta, OUTPUT);

 
  Serial.begin(9600);  
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read(); 

   
    if (input == 'a') {
      x();  
      return;
    }

    
    if (input >= '0' && input <= '9') {
      int number = input - '0';  

      
      if (number == 0) {
        sifir();
      }
      else if (number == 1) {
        bir();
      }
      else if (number == 2) {
        iki();
      }
      else if (number == 3) {
        uc();
      }
      else if (number == 4) {
        dort();
      }
      else if (number == 5) {
        bes();
      }
      else if (number == 6) {
        alti();
      }
      else if (number == 7) {
        yedi();
      }
      else if (number == 8) {
        sekiz();
      }
      else if (number == 9) {
        dokuz();
      }

      delay(1000);  
    }

   
    else if (input == '7') {
      iki();  
      delay(1000);
    }

   
    else if (input == '5') {
      for (int i = 5; i >= 0; i--) {
        if (i == 0) {
          sifir();
        } 
        else if (i == 1) {
          bir();
        }
        else if (i == 2) {
          iki();
        }
        else if (i == 3) {
          uc();
        }
        else if (i == 4) {
          dort();
        }
        else if (i == 5) {
          bes();
        }

        delay(1000);  
      }
    }
  }
}






int x(){
digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(nokta, LOW); 
}

int sifir(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);
digitalWrite(nokta, 0);
}
  
int bir(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 0);
}
  
int iki(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 0);
}
int uc(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 0); 
}
int dort(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 0); 
}
int bes(){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 0);  
  delay(1000);
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 0); 
delay(1000);
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 0);
delay(1000);
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 0);
delay(1000);
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 0);
delay(1000);
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);
digitalWrite(nokta, 0);
}
int alti(){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 0);
}
int yedi(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 0);
}
int sekiz(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 0);
}
int dokuz(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 0); 
}