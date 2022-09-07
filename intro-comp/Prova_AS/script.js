//Faça um algoritmo em JS imprima a equação e os resultados de uma potenciação.
//O usuário irá informar uma base e o número do expoente. Ex. base 2, expoente 2.
//Deverá imprimir. 2ˆ0=1 || 2ˆ1=2 || 2ˆ2=4. O resultado também pode ser com quebra de
//linha. Entregar o arquivo JS anexado neste atividade

function ColetaInfos() {
  let num = parseInt(prompt("Digite o número que será elevado"));
  let pot = parseInt(prompt("Digite a potência"));
  return [num, pot];
}

//abrindo o console do navegador, digite Calcular() para executar o código

function Calcular() {
  let [num, pot] = ColetaInfos();
  let result = Math.pow(num, pot);
  console.log(num + "^" + pot + "=" + result);
}
