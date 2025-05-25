boolean estado = false; //Flag para mudar estado da válvula

void setup(){

  pinMode(10,INPUT); //Pino de entrada do botão para comutar válvula
  pinMode(9,OUTPUT); //Pino de saída para chavear relé
   
}

void loop() {

  if(digitalRead(10)== LOW){ //Se o botão for pressionado altera estado da flag e do pino
     
   delay(500);
    
   estado = !estado; //Altera estado anterior da flag 
   digitalWrite(9, estado); //Altera estado do pino
      
  }


}
