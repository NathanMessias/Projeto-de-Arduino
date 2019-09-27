//Declarando os valores das variáveis
 int a = 1;
 int b = 1;
 int c = 0;
void setup()
{
  //Definindo as portas de saida
  pinMode(13, OUTPUT);// saida do led vermelho quando for 1
  pinMode(12, OUTPUT);// saida do led azul quando for 1
  pinMode(11, OUTPUT); // Saida, led verde, do resultado  
  						//entre a relação de a e b						
}

void loop()
{
  //Ligando o led vermelho
  if (a == 1){
  digitalWrite(13, HIGH);
  } 
  //Ligando o led azul
  if(b == 1){
     digitalWrite(12, HIGH);
  }
  
  	//Mostrando os resultados de cada porta desejada
  	//Remova as "//" da operação desejada
  	//Se houver duas operações sem as "//"
  	//o resultado pode não ser o esperado
  
  	//c = a && b; //Faz a operação  Lógica AND (e) entre A e B
  	//c = a || b; // Faz a operação lógica OR (OU) entre A e B
    //c = !a; // Faz a operação lógica NOT (inversora) na entrada A
    c = !(a && b); // Faz a operação lógica NAND (E invertida) entre A e B
    //c = !(a || b); // Faz a operação lógica NOR (OU invertida) entre A e B
    //c = a ^ b; // Faz a operação lógica XOR (Ou exclusivo) entre A e B
    //c = !(a ^ b); // Faz a operação lógica XNOR 
  					//(Ou exclusivo invertido) entre A e B
    
  //Ligando o led verde, o qual é a saida do resultado
  if (c == 1){
    digitalWrite(11, HIGH);
  }
  
  delay(3000);
  
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  
  delay(3000);
  
  //Aumenta a possibilidade de 
  if (a == 1){
    a = 0;
  } else {
    a = 1;
  }
}
 