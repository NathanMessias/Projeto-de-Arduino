int va = 0;
int vb = 0;
int vc = 0;
int vd = 0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
}

void ligar(int a, int b, int c, int d, int e, int f, int g){
  
  digitalWrite(2, a); //a
  
  digitalWrite(3, b); //b
  
  digitalWrite(4, c); //c
  
  digitalWrite(5, d); //d
 
  digitalWrite(6, e); //e

  digitalWrite(7, f); //f
  
  digitalWrite(8, g); //g
  
  digitalWrite(9, 0); //.
}

void loop()
{
  //Recebe o código em binário do usuário
  va= digitalRead(10);
  vb= digitalRead(11);
  vc= digitalRead(12);
  vd= digitalRead(13);
  
  if(va == 0 && vb == 0 && vc == 0 && vd == 0){ //mostra 0
    ligar(0, 0, 0, 0, 0, 0, 1);
  }
  
  if(va == 0 && vb == 0 && vc == 0 && vd == 1){ // mostra 1
    ligar(1, 0, 0, 1, 1, 1, 1);
  }
  
  if(va == 0 && vb == 0 && vc == 1 && vd == 0){ // mostra 2
    ligar(0, 0, 1, 0, 0, 1, 0);
  }
  
  if(va == 0 && vb == 0 && vc == 1 && vd == 1){ // mostra 3
    ligar(0, 0, 0, 0, 1, 1, 0);
  }
  
  if(va == 0 && vb == 1 && vc == 0 && vd == 0){ // mostra 4
    ligar(1, 0, 0, 1, 1, 0, 0);
  }
  
  if(va == 0 && vb == 1 && vc == 0 && vd == 1){ // mostra 5
    ligar(0, 1, 0, 0, 1, 0, 0);
  }
  
  if(va == 0 && vb == 1 && vc == 1 && vd == 0){ // mostra 6
    ligar(0, 1, 0, 0, 0, 0, 0);
  }
  
  if(va == 0 && vb == 1 && vc == 1 && vd == 1){ // mostra 7
    ligar(0, 0, 0, 1, 1, 1, 1);
  }
  
  if(va == 1 && vb == 0 && vc == 0 && vd == 0){ // mostra 8
    ligar(0, 0, 0, 0, 0, 0, 0);
  }
  
  if(va == 1 && vb == 0 && vc == 0 && vd == 1){ // mostra 9
    ligar(0, 0, 0, 1, 1, 0, 0);
  }
  
  if(va == 1 && vb == 0 && vc == 1 && vd == 0){ //mostra A
    ligar(0, 0, 0, 1, 0, 0, 0);
  }
  
  if(va == 1 && vb == 0 && vc == 1 && vd == 1){ //mostra b
    ligar(1, 1, 0, 0, 0, 0, 0);
  }
  
  if(va == 1 && vb == 1 && vc == 0 && vd == 0){ //mostra C
    ligar(0, 1, 1, 0, 0, 0, 1);
  }
  
  if(va == 1 && vb == 1 && vc == 0 && vd == 1){ //mostra d
    ligar(1, 0, 0, 0, 0, 1, 0);
  }
  
  if(va == 1 && vb == 1 && vc == 1 && vd == 0){ //mostra E
    ligar(0, 1, 1, 0, 0, 0, 0);
  }
  
  if(va == 1 && vb == 1 && vc == 1 && vd == 1){ //mostra F
    ligar(0, 1, 1, 1, 0, 0, 0);
  }
}
