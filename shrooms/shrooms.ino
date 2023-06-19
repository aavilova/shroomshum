
// версия 1.0 собрали с Захаром


// int analogPin0 = A0;
// int raw = 0;
// int Vin = 5;
// float Vout = 0;
// float R1 = 10000;
// float R2 = 0;
// float buffer = 0;


// void setup(){
// Serial.begin(9600);
// Serial.println("Setup");
// digitalWrite(7, LOW);
// pinMode(11, OUTPUT);  
// }

// void loop(){
//   raw0 = analogRead(analogPin0);
//   Serial.println("Loop");
//   Serial.println(raw0);

//   if(raw0){
//     buffer = raw0 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2= R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);

//     digitalWrite(7, HIGH); tone (11, raw0); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //ми
//   }

//   delay(50);
// }









// // версия 1.1 собрала сама, добавила остальные ноты

// int analogPin0 = A0;
// int analogPin1 = A1;
// int analogPin2 = A2;
// int analogPin3 = A3;
// int analogPin4 = A4;
// int analogPin5 = A5;

// int raw0 = 0;
// int raw1 = 1;
// int raw2 = 2;
// int raw3 = 3;
// int raw4 = 4;
// int raw5 = 5;

// int doo = 1046;
// int re = 1174;
// int mi = 1318;
// int sol = 1568;
// int la = 1720;
// int si = 1975;

// int Vin = 5;
// float Vout = 0;
// float R1 = 10000;
// float R2 = 0;
// float buffer = 0;



// void setup(){
// Serial.begin(9600);
// Serial.println("Setup");
// digitalWrite(7, LOW);
// pinMode(11, OUTPUT);  
// }

// void loop(){
//   raw0 = analogRead(analogPin0);
//   raw1 = analogRead(analogPin1);
//   raw2 = analogRead(analogPin2);
//   raw3 = analogRead(analogPin3);
//   raw4 = analogRead(analogPin4);
//   raw5 = analogRead(analogPin5);
//   Serial.println("Loop");
//   Serial.println(raw0);
//   Serial.println(raw1);
//   Serial.println(raw2);
//   Serial.println(raw3);
//   Serial.println(raw4);
//   Serial.println(raw5);

//   void noteC3(raw0){
//     buffer = raw0 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2 = R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);
//     if(R2 > 0){
//       tone (11, doo); delay(100); //до
//     }
//     else { noTone(11);
//     }
//     delay(50);
//   }

//   void noteD3(raw1){
//     buffer = raw1 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2 = R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);
//     if(R2 > 0){
//       tone (11, re); delay(100); //ре
//     }
//     else { noTone(11);
//     }
//     delay(50);
//   } 

//   void noteE3(raw2){
//     buffer = raw2 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2 = R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);
//     if(R2 > 0){
//       tone (11, mi); delay(100); //ми
//     }
//     else { noTone(11);
//     }
//     delay(50);
//   } 

//   void noteG3(raw3){
//     buffer = raw3 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2 = R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);
//     if(R2 > 0){
//       tone (11, sol); delay(100); //соль
//     }
//     else { noTone(11);
//     }
//     delay(50);
//   }

//   void noteA3(raw4){
//     buffer = raw4 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2 = R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);
//     if(R2 > 0){
//       tone (11, la; delay(100); //ля
//     }
//     else { noTone(11);
//     }
//     delay(50);
//   }  

//   void noteB3(raw5){
//     buffer = raw5 * Vin;
//     Vout = (buffer)/1024.0;
//     buffer = (Vin/Vout) - 1;
//     R2 = R1 * buffer;
//     Serial.print("Vout: ");
//     Serial.println(Vout);
//     Serial.print("R2: ");
//     Serial.println(R2);
//     if(R2 > 0){
//       tone (11, si; delay(100); //си
//     }
//     else { noTone(11);
//     }
//     delay(50);
//   } 

// }






// версия 1.2 собрала сама, добавила остальные ноты и прогнала через чат жпт и еще раз пересобрала все что не работало

int analogPin0 = A0;
int analogPin1 = A1;
int analogPin2 = A2;
int analogPin3 = A3;
int analogPin4 = A4;
int analogPin5 = A5;

int doo = 1046;
int re = 1174;
int mi = 1318;
int sol = 1568;
int la = 1720;
int si = 1975;

int Vin = 5;
float Vout = 0;
float R1 = 10000;
float R2 = 0;
float buffer = 0;

int raw0 = analogRead(analogPin0);
int raw1 = analogRead(analogPin1);
int raw2 = analogRead(analogPin2);
int raw3 = analogRead(analogPin3);
int raw4 = analogRead(analogPin4);
int raw5 = analogRead(analogPin5);

void setup() {
  Serial.begin(9600);
  Serial.println("Setup");
  digitalWrite(7, LOW);
  pinMode(11, OUTPUT);  
}

void loop() {
  raw0 = analogRead(analogPin0);
  raw1 = analogRead(analogPin1);
  raw2 = analogRead(analogPin2);
  raw3 = analogRead(analogPin3);
  raw4 = analogRead(analogPin4);
  raw5 = analogRead(analogPin5);
  Serial.println("Loop");
  Serial.println(raw0);
  Serial.println(raw1);
  Serial.println(raw2);
  Serial.println(raw3);
  Serial.println(raw4);
  Serial.println(raw5);

  // Moved the note functions outside the loop function
  // noteC3(raw0);
  // noteD3(raw1);
  // noteE3(raw2);
  // noteG3(raw3);
  // noteA3(raw4);
  // noteB3(raw5);

  if(raw0){
    buffer = raw0 * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);

    digitalWrite(7, HIGH); tone (11, doo); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //до
  }

  if(raw1){
    buffer = raw1 * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);

    digitalWrite(7, HIGH); tone (11, re); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //ре
  }

  if(raw2){
    buffer = raw2 * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);

    digitalWrite(7, HIGH); tone (11, mi); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //ми
  }

  if(raw3){
    buffer = raw3 * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);

    digitalWrite(7, HIGH); tone (11, sol); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //соль
  }

  if(raw4){
    buffer = raw4 * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);

    digitalWrite(7, HIGH); tone (11, la); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //ля
  }

  if(raw5){
    buffer = raw5 * Vin;
    Vout = (buffer)/1024.0;
    buffer = (Vin/Vout) - 1;
    R2= R1 * buffer;
    Serial.print("Vout: ");
    Serial.println(Vout);
    Serial.print("R2: ");
    Serial.println(R2);

    digitalWrite(7, HIGH); tone (11, si); delay(100); } else { digitalWrite(7, LOW); noTone(11);  //си
  }

  delay(0);
}

// // Added return type 'void' to the note functions
// void noteC3(int raw0) {
//   buffer = raw0 * Vin;
//   Vout = (buffer) / 1024.0;
//   buffer = (Vin / Vout) - 1;
//   R2 = R1 * buffer;
//   Serial.print("Vout: ");
//   Serial.println(Vout);
//   Serial.print("R2: ");
//   Serial.println(R2);
//   if (R2 > 0) {
//     tone(11, doo);
//     delay(100); //do
//   } else {
//     noTone(11);
//   }
// }

// // Similar changes made to other note functions
// void noteD3(int raw1) {
//   buffer = raw1 * Vin;
//   Vout = (buffer) / 1024.0;
//   buffer = (Vin / Vout) - 1;
//   R2 = R1 * buffer;
//   Serial.print("Vout: ");
//   Serial.println(Vout);
//   Serial.print("R2: ");
//   Serial.println(R2);
//   if (R2 > 0) {
//     tone(11, re);
//     delay(100); //re
//   } else {
//     noTone(11);
//   }
// }

// void noteE3(int raw2) {
//   buffer = raw2 * Vin;
//   Vout = (buffer) / 1024.0;
//   buffer = (Vin / Vout) - 1;
//   R2 = R1 * buffer;
//   Serial.print("Vout: ");
//   Serial.println(Vout);
//   Serial.print("R2: ");
//   Serial.println(R2);
//   if (R2 > 0) {
//     tone(11, mi);
//     delay(100); //mi
//     } else {
//     noTone(11);
//   }
// }

// void noteG3(int raw3) {
//   buffer = raw3 * Vin;
//   Vout = (buffer) / 1024.0;
//   buffer = (Vin / Vout) - 1;
//   R2 = R1 * buffer;
//   Serial.print("Vout: ");
//   Serial.println(Vout);
//   Serial.print("R2: ");
//   Serial.println(R2);
//   if (R2 > 0) {
//     tone(11, sol);
//     delay(100); //sol
//   } else {
//     noTone(11);
//   }
// }

// void noteA3(int raw4) {
//   buffer = raw4 * Vin;
//   Vout = (buffer) / 1024.0;
//   buffer = (Vin / Vout) - 1;
//   R2 = R1 * buffer;
//   Serial.print("Vout: ");
//   Serial.println(Vout);
//   Serial.print("R2: ");
//   Serial.println(R2);
//   if (R2 > 0) {
//     tone(11, la);
//     delay(100); //la
//   } else {
//     noTone(11);
//   }
// }

// void noteB3(int raw5) {
//   buffer = raw5 * Vin;
//   Vout = (buffer) / 1024.0;
//   buffer = (Vin / Vout) - 1;
//   R2 = R1 * buffer;
//   Serial.print("Vout: ");
//   Serial.println(Vout);
//   Serial.print("R2: ");
//   Serial.println(R2);
//   if (R2 > 0) {
//     tone(11, si);
//     delay(100); //si
//   } else {
//     noTone(11);
//   }
// }

