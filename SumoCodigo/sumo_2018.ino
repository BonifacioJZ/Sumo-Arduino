#define swc1 24   //cambiadores
#define swc2 26
#define swc3 28
#define swc4 30
#define swc5 32
#define m 20
int bandera=0;
/*
int infrarojo11=0;  //infrarojos delanteros A2 y A3
int infrarojo22=0;

int infrarojo33=0;  //infrarojos traceros   A4 y A5
int infrarojo44=0;
*/
int a=60;
int b=80;
int c=780;
int d=280;

void setup() {
    Serial.begin(9600);
    
 for(int j=4; j<=9; j++){
  pinMode(j,1);
 }
 digitalWrite(4,0);
 digitalWrite(7,0);
 digitalWrite(8,0);
 digitalWrite(9,0);

    delay(4800);   
}

void loop() {
  
  
  /*infrarojo11=analogRead(A15);                      
  infrarojo22=analogRead(A14);
  infrarojo33=analogRead(A11);                      
  infrarojo44=analogRead(A10);

  Serial.print("dist1:  ");
  Serial.print(dcm());
  Serial.print("     Dist2: ");
  Serial.print(cm());
  Serial.print("    lin1:      ");
  Serial.print(infrarojo11);
  Serial.print("    lin2:     ");
  Serial.print(infrarojo22);
  Serial.print("    lin3:     ");
  Serial.print(infrarojo33);
  Serial.print("    lin4:     ");
  Serial.println(infrarojo44);
  */
  if(!digitalRead(swc1)){
    if(infrarojo1()>a && infrarojo2()>b){
      atacar();
    }
    if (infrarojo1()<a && infrarojo2()<b){
      bandera=1;
      if (bandera==1){
        atras();
        delay(500);
        derecha();
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(700);   
        bandera=0;
       }
     }
    if (infrarojo1()<a){
      bandera=1;
      if (bandera==1){
        atras();
        delay(500);
        derecha();
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(700);
        bandera=0;
      }
    }
    if (infrarojo2()<b){
      bandera=1;
      if (bandera==1);{
        atras();
        delay(500);    
        derecha();
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(700);
        bandera=0;
      }
     }
    if (dcm()<50||cm()<50){
      bandera=1;
      if (bandera==1){
        if (dcm()<50 && cm()>50){
          derecha();
        }
        if(dcm()>50 && cm()<50){
          izquierda();
        }
        if(dcm()<=50 && cm()<=50){
          atacar();          //atacar
        }
        if (infrarojo1()<a && infrarojo2()<b){
          bandera=0;
        }
      }
    }
    if (infrarojo3()<c && infrarojo4()<d){
      bandera=1;
      if (bandera==1){
        atacar( );
        delay(500);   
        bandera=0;
       }
     }
    if (infrarojo3()<c){
      bandera=1;
      if (bandera==1){
        izquierda();
        delay(250);
        atacar();
        delay(250);
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(500);
        bandera=0;
      }
    }
    if (infrarojo4()<d){
      bandera=1;
      if (bandera==1){
        derecha();
        delay(250);
        atacar();
        delay(250);
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(500);
        bandera=0;
      }
    }
  }



  if(!digitalRead(swc2)){      //segundo programa
    if (dcm()>50 && cm()>50){       //buscar
      derecha();
    }
    if (dcm()<50||cm()<50){
      bandera=1;
      if (bandera==1){
        if (dcm()<50 && cm()>50){
          derecha();
        }
        if(dcm()>50 && cm()<50){
          izquierda();
        }
        if(dcm()<=50 && cm()<=50){
          atacar();          //atacar
        }
        if (infrarojo1()<a && infrarojo2()<b){
          bandera=0;
        }
      }
    }
   if (infrarojo1()<a){
    bandera=1;
    if (bandera==1){
      atras();
      delay(1000);
      bandera=0;  
    }
   }
   if (infrarojo2()<b){
    bandera=1;
    if (bandera==1){
      atras();
      delay(1000);
      bandera=0;
    }
  }
   if(infrarojo1()<a && infrarojo2()<b){
    bandera=1;
    if (bandera==1){
      atras();
      delay(1000);
      bandera=0;
    }
   }
   if (infrarojo3()<c && infrarojo4()<d ){
      bandera=1;
      if (bandera==1){
        atacar();
        delay(500);   
        bandera=0;
       }
     }
    if (infrarojo3()<c){
      bandera=1;
      if (bandera==1){
        izquierda();
        delay(250);
        atacar();
        delay(250);
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(500);
        bandera=0;
      }
    }
    if (infrarojo4()<d){
      bandera=1;
      if (bandera==1){
        derecha();
        delay(250);
        atacar();
        delay(250);
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(500);
        bandera=0;
      }
    }
  }



  if(!digitalRead(swc3)){      //tercer programa
    if (dcm()>50 && cm()>50){       //buscar
      izquierda();
    }
    if (dcm()<50||cm()<50){
      bandera=1;
      if (bandera==1){
        if (dcm()<50 && cm()>50){
          derecha();
        }
        if(dcm()>50 && cm()<50){
          izquierda();
        }
        if(dcm()<=50 && cm()<=50){
          atacar();          //atacar
        }    
      }
    }
   if (infrarojo1()<a){
    bandera=1;
    if (bandera==1){
      atras();
      delay(1000);
      bandera=0;  
    }
   }
   if (infrarojo2()<b){
    bandera=1;
    if (bandera==1){
      atras();
      delay(1000);
      bandera=0;
    }
  }
   if(infrarojo1()<a && infrarojo2()<b){
    bandera=1;
    if (bandera==1){
      atras();
      delay(1000);
      bandera=0;
    }
   }
   if (infrarojo3()<c && infrarojo4()<d ){
      bandera=1;
      if (bandera==1){
        atacar();
        delay(500);   
        bandera=0;
       }
     }
    if (infrarojo3()<c){
      bandera=1;
      if (bandera==1){
        izquierda();
        delay(250);
        atacar();
        delay(250);
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(500);
        bandera=0;
      }
    }
    if (infrarojo4()<d){
      bandera=1;
      if (bandera==1){
        derecha();
        delay(250);
        atacar();
        delay(250);
        if (cm()<=50 || dcm()<=50){
          bandera=0;
        }
        delay(500);
        bandera=0;
      }
    } 
  }


  
  if(!digitalRead(swc4)){   
    if (dcm()<50||cm()<50){
          bandera=1;
          if (bandera==1){
            if (dcm()<50 && cm()>50){
              derecha();
            }
            if(dcm()>50 && cm()<50){
              izquierda();
            }
            if(dcm()<=50 && cm()<=50){
              atacar();          //atacar
            }    
          }
      }
      else{
        izquierda();
      }
    }



  if(!digitalRead(swc5)){
    if (dcm()<31 && cm()>31){
      izquierda();
     }
    if(dcm()>31 && cm()<31){
      derecha();
    }
    if(dcm()>=31 && cm()>=31){
      atacar();          //atacar
    }
    if(dcm()<=15 && cm()<=15){
      atras();
      bandera=2;
      if (bandera==2){
        derecha();
        delay (800);
        bandera=1;          
      }
    }
  }
}
int cm(){
  return (distancia2(m));  //sensor Izquierdo
}
int dcm(){
  return (distancia(m));  //sensor derecho  
}

int infrarojo1(){
  return(analogRead(A15));  
}
int infrarojo2(){
  return(analogRead(A14));  
}
int infrarojo3(){
  return(analogRead(A10));  
}
int infrarojo4(){
  return(analogRead(A11));  
}                                                   //funciones

float distancia(int n){                                      
long suma=0;
for (int i=0;i<n;i++){
  suma=suma+analogRead(A8);
}
float adc=suma/n;
float distancia_cm=17569.7* pow(adc,-1.2062);
return(distancia_cm);
}

float distancia2(int N){
long suma2=0;
for (int i=0;i<N;i++){
  suma2=suma2+analogRead(A9);
}
float top=suma2/N;
float distanciacm=17569.7* pow(top,-1.2062);
return(distanciacm);
}


void atacar(){
  digitalWrite(9,1);  //ADELANTE
  digitalWrite(8,1);
  digitalWrite(7,0);//atras
  digitalWrite(4,0);
  analogWrite(5,1023);
  analogWrite(6,1023);
}
void atras(){
  digitalWrite(9,0);  //ADELANTE
  digitalWrite(8,0);
  digitalWrite(7,1);//atras
  digitalWrite(4,1);
  analogWrite(5,1023);
  analogWrite(6,630);
 }
void derecha(){
  digitalWrite(9,1);  //ADELANTE
  digitalWrite(8,0);
  digitalWrite(7,1);//atras
  digitalWrite(4,0);
  analogWrite(5,1023);
  analogWrite(6,630);
}
void izquierda(){
  digitalWrite(9,0);  //ADELANTE
  digitalWrite(8,1);
  digitalWrite(7,0);//atras
  digitalWrite(4,1);
  analogWrite(5,650);
  analogWrite(6,650);
}
void alto(){
  digitalWrite(7,0); //adelante
  digitalWrite(9,0);
  digitalWrite(8,0); //atras
  digitalWrite(4,0);
  analogWrite(5,0);
  analogWrite(6,0);
}
