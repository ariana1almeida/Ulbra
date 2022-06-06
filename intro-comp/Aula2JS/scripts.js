//Declarar uma variável, atribuir um valor numérico a ela.
//Mostrar o valor e o tipo. Teste todos os tipor vistos em sala

var numero=100;
imprimir (numero);

var texto="Aqui vai um texto";
imprimir(texto);

var logico=true;
imprimir(logico);

function imprimir(valor){
    console.log(`O valor da variável é ${valor} e o tipo é ${typeof(valor)}`);
}