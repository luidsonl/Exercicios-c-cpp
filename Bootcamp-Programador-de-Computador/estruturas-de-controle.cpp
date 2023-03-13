#include <iostream>

using namespace std;

/*Enunciado 1------- Faça um programa que lei um número entre 1 e 4 e diga qual a estação do ano
 * 1-Primavera
 * 2-Verão
 * 3-Outono
 * 4-Inverno
 * */
 
void estacao(){
	int entrada;
	
	cout<< "Estação do ano \nInforme um número de 1 a 4\n";
	cin>> entrada;
	
	if (entrada == 1){
		cout<<"A estação é primavera";
	}else if (entrada == 2){
		cout<<"A estação é verão";
	} else if (entrada == 3){
		cout<<"A estação é outono";
	} else if (entrada == 4){
		cout<<"A estação é inverno";
	} else{
		cout<< "Número inválido";		
	}
	
	cout <<"\n";
}

void estacaoMelhorada(){
	string estacoes[4] = { "primavera", "verão", "outono", "inverno" }; // Declarando um array que irá conter o nome de cada estação
	//Obs: é necessário usar aspas duplas
	int entrada;
	
	cout<< "Estação do ano \nInforme um número de 1 a 4\n";
	cin>> entrada;
	
	if (entrada <= 4 && entrada >= 1){
		
		cout<< "A estação é "<< estacoes[entrada-1]; // o -1 é porque o array inicia a partir do zero
	}else{
		cout<< "Número inválido";
			
	}
	cout <<"\n";
}

/*Enunciado 2------- Faça um programa que leia dois números, A e B, e escreva se o valor de A é maior que o o valor de B*/

void aMaiorB(){
	int a, b;
	
	cout<< "Verificar se A é maior que B\n";
	cout<< "Informe o valor de A\n";
	cin>> a;
	cout<< "Informe o valor de B\n";
	cin>> b;
	
	if(a>b){
		cout<< a <<" é maior que " << b;
	}else{
		cout<< a <<" não é maior que " << b;
	}
	cout <<"\n";
	
}

/*Enunciado 3------- Faça um programa que leia a idade de um usuário e diga se ele pode assinar uma carteira de trabalho
 * de acordo com a lei, podem assinar pessoas entre 18 e 65 anos*/

void assinarCarteira(){
	int idade;
	
	cout << "Eu posso assinar carteira?\n";
	cout << "Minha idade é de:\n";
	cin >> idade;
	
	if (idade >= 18 && idade <=65){
		cout<< "Você pode";
	}else{
		cout<< "Você não pode";
	}
	
	cout <<"\n";
	
}

/*Enunciado 4 -------- Faça um programa que leia um número e diga se ele é par*/

void isEven(){
	int numero;
	
	cout<< "Informe um número para saber se ele é par\n";
	cin >> numero;
	
	if(numero%2){// Essa condição só será alcançada se o resultado do módulo da divisão por 2 for diferente de zero, ou seja, impar
		cout<< "É impar!";
	} else{
		cout<< "É par";
	}
	cout <<"\n";
}

/*Enunciado 5 --------- Faça um progama que solicite ao usuário altura e sexo de uma pessoa:
 * 1 para feminino
 * 2 para masculino
 * calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
 * - para homens (72.7 * altura) - 58
 * - para mulheres: (62.1 * altura) - 44.7*/
 
 void calcPesoIdeal(){
	int sexo;
	float altura, pesoIdeal;
	
	cout<< "Calculador de peso ideal\n";
	cout<< "Informe o sexo da pessoa	\nDigite 1 para feminino	\nDigite 2 para masculino\n";
	cin>> sexo;
	
	if (sexo > 2 || sexo < 1){ // testa se a opção é válida
		cout<< "Código inválido";
		return; // encerra a função caso chegue aqui
	}
	
	cout<< "Informe a altura da pessoa em cm\n";
	cin >> altura;
	altura = altura/100; //converte altura para metros
	
	if (sexo ==1){// Sexo feminino
		
		pesoIdeal = (62.1 * altura) - 44.7;
		
	} else if(sexo == 2){ //sexo masculino
		
		pesoIdeal = (72.7 * altura) - 58;
	}
	
	cout<< "O peso ideal para essa pessoa é: "<<pesoIdeal<< "KG";
	
	cout <<"\n";
	 
}


/*Escreva um progama para ler 3 valores inteiros e escrever o maior deles.
 * Considere que o usuário não informará falores iguais*/
 
void maior3(){ // pode informar valores iguais dessa forma
	int num1,num2,num3, maior;
	cout << "Maior de 3\n";
	cout<< "Informe o primeiro número\n";
	cin>> num1;
	cout<< "Informe o segundo número\n";
	cin>> num2;
	cout<< "Informe o terceiro número\n";
	cin>> num3;
	
	// Irá atribuir os valores e substituir caso o próximo seja maior
	maior = num1;
	if (num2>maior){
		maior = num2;
	}
	if (num3>maior){
		maior = num3;
	}
		
	cout<< "O maior número é "<< maior;;
	
	cout <<"\n";
}

/*Escreva um progama que leia o valor de 3 angulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.
 * Sendo que:
 * - Triângulo retângulo: possui um ângulo reto.
 * - triângulo obtusângulo possui um ângulo obtuso
 * - Triângulo acutângulo possui todos ângulos agudos*/
 
 void tipoTriangulo(){
	int a,b,c; // declaração das variáveis que irão armazenar a medida do ângulo
	
	cout << "Classificador de trângulos em relação a medida de seus ângulos\n";
	cout<< "Informe a medida do primeiro ângulo em graus\n";
	cin >> a;
	cout<< "Informe a medida do segundo ângulo em graus\n";
	cin>> b;
	cout<< "Informe a medida do terceiro ângulo em graus\n";
	cin >>c;
	// Condicionais
	
	if (a + b + c != 180){ // testa se é possível formar um triângulo
		cout<< "Impossível um trângulo ter essas medidas";
		return; // encerra função
	}
	
	if (a == 90||b == 90||c == 90){
		cout<< "É um triangulo retângulo";
		
	} else if (a > 90||b > 90||c > 90){
		cout<< "É um triangulo obtusângulo";
		
	} else { //(a < 90 && b < 90 && c < 90)
		cout<< "É um triangulo acutângulo";
	}
	
	cout <<"\n";
	
}

/* Faça um programa que leia dois numeros e verifique se o primeiro é divisível pelo segundo*/

void aDivideB(){
	int a, b;
	
	cout<< "Verificar se A é divisível por B\n";
	
	cout<< "Informe o valor de A\n";
	cin>> a;
	cout<< "Informe o valor de B\n";
	cin>> b;
	
	if (a%b ==0){
	cout<< "É divisível";
	}else{
	cout<< "Não é divisível";	
	}
	
	cout <<"\n";
	
}

/*Faça um programa que informe a alícota de imposto de renda a ser paga por um funcionário.
 * o funcionário deverá informar seu salário e o sistema deverá escrever na tela a alícota baseando-se na seguinte tabela:
 * Até R$1.903,98 - Isento
 * De R$1.903,99 até R$2.826,65	 - 7,5%
 * De R$2.826,66 até R$3.751,05	- 15%
 * De R$3.751,06 até R$4.664,68	- 22,5%	
 * Acima de R$4.664,68	- 27,5%	*/
 
 void impostoDeRenda(){
	float salario, imposto = 0;
	
	cout<< "Cálculo da alícota de imposto de renda:\n";
	cout<< "Informe seu salário\n";
	cin>> salario;
	
	//condicionais
	if(salario <= 1908.98){
		cout << "O leão não sentiu seu cheiro\n";
		
	}else if(salario > 1908.98 && salario <=2826.65){
		imposto = salario * 0.075; // pega 7,5% do salario 
		cout<< "Alícota de 7,5%\n";
		
	} else if(salario > 2826.65 && salario <= 3751.05){
		imposto = salario * 0.15;
		cout<< "Alícota de 15%\n";
		
	}else if(salario > 3751.05 && salario <= 4664.68){
		imposto = salario * 0.225;
		cout<< "Alícota de 22,5%\n";
		
	}else if (salario > 4664.68){
		imposto = salario * 0.275;
		cout<< "Alícota de 27,5%\n";
	}
	
	// Valor a pagar
	cout<<"O leão comeu "<< imposto<<" R$" ;
	
	cout <<"\n";
	
}

/*Faça um progama que calcule o conceito do aluno de acordo com sua nota, considerando as seguintes faixas:
 * A - Maior ou igual a 90 pontos
 * B - Maior ou igual a 80 e menor que 90
 * C - maior ou igual a 70 e menor que 80
 * D - Menor que 70 */
 void calcularConceito(){
	float nota;
	char conceito;
	
	cout<<"Cálculo de conceito\n";
	cout <<"Informe sua nota\n";
	
	cin >> nota;
	
	if (nota>= 90){
	conceito = 'A';// Para char é usado aspas simples
		
	}else if(nota <90 && nota >= 80){
	conceito = 'B';	
	
	}else if(nota <80 && nota >= 70){
	conceito = 'C';	
	
	}else if(nota <70){//Podia ser apenas o else
	conceito = 'D';	
	}
	
	cout<<"Seu conceito foi "<< conceito;
	
	cout <<"\n";
	
}

/*Faça um progama que implemente um sistema de monitoramento meteorologico e faça alertas aos usuários.
 * Leia a temperatura e umidade do ar e emita alertas. Considere as seguintes regras:
 * - Se a temperatura estiver acima de 30 graus e umidade abaixo de 50%. Alerta de atenção
 * - Se umidade do ar estiver abaixo de 12. Alerta de emergencia.
 * - Se a umidade do ar estiver acima de 90. Alerta de possibilidade de chuva.
 * */
 
 void monitoraTempo(){
	 
	bool temAlerta = true;
	float temperatura, umidade;
	string alerta;
	
	cout<< "Sistema de monitoramento meteorológico\n";
	cout<< "Informe a temperatura em graus celcius\n";
	
	cin >> temperatura;
	
	cout<< "Informe a umidade relativa do ar\n";
	cin>> umidade;
	
	// COndicionais
	
	if(umidade < 12){
			alerta = "emergência";
			
	} else if (temperatura > 30 && umidade < 50){
		alerta = "atenção";
		
	}else if(umidade > 90){
		alerta = "possibilidade de chuva";
		
	}else{
		cout<< "Sem alertas";
		temAlerta = false;
		
	}
	
	if(temAlerta){
		cout<< "Alerta de "<< alerta;
	
	}
	
	cout <<"\n";
	 
}

/*Faça um programa que leia um númmero e informe se este número é positivo, negativo ou neutro. Considere 0 como um número neutro*/
void posNeg(){
	float num;
	
	cout<< "Testar se um número é positivo ou negativo\n";
	cout<< "Informe um número\n";
	
	cin >> num;
	
	if(num == 0){
		cout<< "É um número neutro";
		
	}else if (num > 0){
		cout<< "É um número positivo";
		
	}else if (num < 0){
		cout<< "É um número negativo";
	}
	
	cout <<"\n";
}

/*Faça um programa que faça a consulta de preços de protudos em estoque.
 * Dado o código do produto, o progama deverá retornar o valor deste produto. */
void consultaEstoque(){
	int cod;
	
	
	cout<<"Faça a consulta no estoque\n";
	cout<< "Feijão - 1 \nArroz - 2 \nFrango - 3 \nPeixe - 4 \nCarne bovina - 5 \n";
	
	cout<<"Informe o código do produto\n";
	
	
	
	cin>> cod;
	
	switch(cod){// só funciona com valores inteiros
		case 1:
			cout <<"Feijão - 8,00 R$";
			break;
			
		case 2:
			cout <<"Arroz - 5,40 R$";
			break;
			
		case 3:
			cout <<"Frango - 23,75 R$";
			break;
			
		case 4:
			cout <<"Peixe - 43,80 R$";
			break;
			
		case 5:
			cout <<"Carne Bovina - 60,45 R$";
			break;
			
		default:
			cout << "Código inválido";
			
	}
	cout <<"\n";
}

/*Faça um programa que solicite ao usuário que informe um número inteiro entre 1 e 5, caso o número informado não corresponda
 * a regra, emita uma mensagem de erro*/
 
 void deUmACinco(){
	int num;
	cout <<"Informe um número de 1 a 5\n";
	cin>> num;
	 
	switch(num){
	case 1:
		cout<<"Correto";
		break;
	case 2:
		cout<<"Correto";
		break;
	case 3:
		cout<<"Correto";
		break;
	case 4:
		cout<<"Correto";
		break;
	case 5:
		cout<<"Correto";
		break;
	default:
		cout<<"Número inválido";
		 
	}
	cout <<"\n";
	 
} 
/*Múltiplos cases
 * Há momentos da aplicação, onde duas condições podem executar o mesmo bloco de código.
 * No switch case também é possível. Para isso é necessário colocar dois cases.
 * Use a orientação acima para ler um número entre 1 e 5 e determinar se é menor que 3, se é o 3 ou se é maior que o 3.*/
void maiorOuMenorQue3(){
	int num;
	cout<< "Informe um número entre 1 e 5\n";
	cin>> num;
	
	switch (num){
		case 1: // O código irá executar até chegar em um break
		case 2:
		cout<<"Menor que 3";
		break; 	
		
		case 3:
		cout<<"Igual a 3";
		break;
		
		case 4:
		case 5:
		cout<<"Maior que 3";
		break;
		
		default:
		cout<<"Número inválido";
		
		
	}
	cout <<"\n";
}

int main(){
	/*Chama as funções*/
	
	
	//estacao();
	//estacaoMelhorada();
	//aMaiorB();
	//assinarCarteira();
	//isEven();
	//calcPesoIdeal();
	//maior3();
	//tipoTriangulo();
	//aDivideB();
	//impostoDeRenda();
	//calcularConceito();
	//monitoraTempo();
	//posNeg();
	//consultaEstoque();
	//deUmACinco();
	maiorOuMenorQue3();

	return 0;
}
