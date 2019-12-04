//Projeto de um somador e subtrador em arduino. Os valores de 
//cada chave são respectivamente as marcações numéricas das mesmas 
//A chave vermelha é responsável pela seleção da opção de somar 
//ou subtrair. 1 = soma e 0 = subtrai.

#include<LiquidCrystal.h>
//Declarando as variáveis que receberão as leituras
int va = 0;
int vb = 0;
int vc = 0;
int vd = 0;

int ve = 0;
int vf = 0;
int vg = 0;
int vh = 0;

int v1 = 1;
int v2 = 2;
int v3 = 3;
int v4 = 4;

int contesq = 0;
int contdir = 0;

char sinal;

int ler = 0;

int resultado = 0;

LiquidCrystal lcd(4, 5, 0, 1, 2, 3);


void setup()
{
  pinMode(A0,INPUT);
  
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  
 lcd.begin(16, 2); //Configurando o Display
 lcd.setCursor(0,0);

 lcd.print("Soma:1/Subtrai:0");
  
}


int somar(int a, int b){//Função responsável por somar os valores
  int c  = 0;
  c = a + b;
  return c;
}

int subtrair(int a, int b){//Função responsável para subtrair os valores
  int c = 0;
  c = a - b;
  return c;
}


void loop()
{
  lcd.setCursor(2,1);
  
  ler= digitalRead(A0);
  
  va= digitalRead(6);
  vb= digitalRead(7);
  vc= digitalRead(8);
  vd= digitalRead(9);
  
  ve= digitalRead(10);
  vf= digitalRead(11);
  vg= digitalRead(12);
  vh= digitalRead(13);

  if (ve == 1){//Verifica se a chave foi selecionada
  contesq = contesq + v4;//Adiciona o valor da chave a um contador a esquerda
  }
  
  if (vf == 1){//Verifica se a chave foi selecionada
  contesq = contesq + v3;//Adiciona o valor da chave a um contador a esquerda
  }
  
  if (vg == 1){//Verifica se a chave foi selecionada
  contesq = contesq + v2;//Adiciona o valor da chave a um contador a esquerda
  }
  
  if (vh == 1){//Verifica se a chave foi selecionada
  contesq = contesq + v1;//Adiciona o valor da chave a um contador a esquerda
  }
  
   if (va == 1){//Verifica se a chave foi selecionada
  contdir = contdir + v4;//Adiciona o valor da chave a um contador a direita
  }
  
  if (vb == 1){//Verifica se a chave foi selecionada
  contdir = contdir + v3;//Adiciona o valor da chave a um contador a direita
  }
  
  if (vc == 1){//Verifica se a chave foi selecionada
  contdir = contdir + v2;//Adiciona o valor da chave a um contador a diretia
  }
  
  if (vd == 1){//Verifica se a chave foi selecionada
  contdir = contdir + v1;//Adiciona o valor da chave a um contador a direita
  } 
  
  
  if (ler == 1){ //Laço de verificação de soma/subtração
    resultado = somar(contesq,contdir);
    sinal = '+';
  } else {
    resultado = subtrair(contesq,contdir);
    sinal = '-';
  		 }
  
  lcd.print(contesq);//Mostra valor do interruptor da esquerda
  lcd.print(sinal);//Mostra o sinal da operação que será realizada
  lcd.print(contdir);//Mostra valor do interruptor da direita
  lcd.print("=");
  
  lcd.print(resultado);//Mostra o resultado da operação
  lcd.print("      ");//Gambiarra para eliminar um problema de dígitos que teve
  
  //Zerando contadores e resultado
  contesq = 0;
  contdir = 0;
  resultado = 0;
  }