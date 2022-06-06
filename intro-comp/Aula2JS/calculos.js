//imprima a média aritmética de 3 números
var n1=5;
var n2=7;
var n3=8.5;

var result=(n1+n2+n3)/3;
console.log("a média é "+ result);

//media da ulbra e ver se está aprovado

var ap1=1.5;
var ap2=2.0;
var as=5;

function alunoAprovado(ap1, ap2, as){
    let media=ap1+ap2+as;
    if(media>=7)
        return "o aluno está aprovado";
    else
        return "o aluno está reprovado";
}

function alunoAprovado2(ap1, ap2, as){
    let media=ap1+ap2+as;

    //if ternário = (condicao) ? true : false;

    return (media >=7) ? "aprovado" : "reprovado";
}

//informe 3 numeros e mostre qual é o maior
function numeroMaior(n1,n2,n3){
    if (n1>n2 && n1>n3)
        console.log(n1 + " é maior");
    else if (n2>n1 && n2>n3)
        console.log(n2 + " é maior");
    else if(n3>n1 && n3>n2)
        console.log(n3 + " é maior");
    else
        console.log("Algo deu errado");
}

//Informe o nome e a idade de uma pessoa e imprima se esta pessoa é maior ou 
//menor de idade.

function maiorMenor(nome, idade){
    console.log(`Seu nome é ${nome} e sua idade é ${idade}`);
    if(idade>=18){
        console.log("Você é maior de idade");
    }else{
        console.log("Você é menor de idade");
    }
}
