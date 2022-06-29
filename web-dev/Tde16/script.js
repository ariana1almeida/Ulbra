alert("Parte 1");
var numero = prompt("Digite um numero: ");

numero = parseFloat(numero);

if (numero < 10) {
  alert(numero + " é menor que 10");
} else if (numero > 10) {
  alert(numero + " é maior que 10");
} else {
  alert(numero + " é igual a 10");
}

alert("Parte 2");
var num1 = prompt("valor1: ");
var num2 = prompt("valor2: ");

num1=parseInt(num1);
num2=parseInt(num2);

alert(num1+num2);

alert("Parte 3");
var num1=prompt("valor: ");
var operacao=prompt("Operação a ser realizada (+, -, *, /): ");
var num2=prompt("valor: ");

num1=parseFloat(num1);
num2=parseFloat(num2);

switch(operacao){
    case '+':
        alert(num1+num2);
        break;
    case '-':
        alert(num1 - num2);
        break;
    case '*':
        alert(num1*num2);
        break;
    case '/':
        alert(num1/num2);
        break;
    default:
        alert("Erro! Operação invalida");
        break;
}

alert("Parte 4");
var nome = prompt("Nome: ");
var n=prompt("Número de vezes para repetir: ");

n = parseInt(n);

for(var i = 1; i<=n; i++){
    alert(nome);
}

alert("Parte 5 com array");
var variavel=[];

variavel[0]=prompt("Nome: ");
variavel[1]=prompt("Endereço: ");
variavel[2]=prompt("Email: ");

alert(variavel[0]);
alert(variavel[1]);
alert(variavel[2]);

alert("Parte 5.1 com objeto");

var a=prompt ("Nome: ");
var b=prompt("Endereço: ");
var c=prompt("Email: ");

var objeto={nome:a,endereco:b, email:c}

alert(objeto.nome);
alert(objeto.endereco);
alert(objeto.email);
