//calculadora
function btn(){
    var n1=document.getElementById('n1').value;
    var n2=document.getElementById('n2').value;
    var operacao=document.getElementById('operacao').value;
    var resultado=document.getElementById('resultado');
    n1=parseInt(n1);
    n2=parseInt(n2);
    
    switch(operacao){
       case '+':
          resultado.value= n1+n2;
          break;
       case '-':
          resultado.value= n1-n2;
          break;
       case '*':
          resultado.value= n1*n2;
          break;
       case '/':
          resultado.value= n1/n2;
          break;
    }
    console.log(n1);
    console.log(n2);
    console.log(operacao);
 }
 //calcula Kwh
 function calcularKwh(){
    var kwh=parseFloat(document.getElementById('kwh').value);
    var valorUnit=parseFloat(document.getElementById('valorUnit').value);
    var resultadoAt2;
 
    if(kwh>200){
       resultadoAt2=1.5*(valorUnit*kwh);
    }
    else if(kwh>100){
       resultadoAt2=1.25*(valorUnit*kwh);
    }
    else{
       resultadoAt2=valorUnit*kwh;
    }
    console.log('Valor kwhs'+resultadoAt2);
    document.getElementById('resultadoAt2').value= resultadoAt2;
 }
 //verificador de numero maior
 function checarMaior(){
    var inputs=document.getElementById('inputs').value;
    var inputs=inputs.split(',');
    var i=0, maior=0;
    for(i;i<inputs.length;i++){
       if(inputs[i]>maior){
          maior=inputs[i];
       }
    }
    console.log(maior);
    document.getElementById('maior').value= maior;
}
    //
function verifyAges(){
    var idades= document.getElementById('idades').value;

   idades=idades.split(',');
   var i=0, maiores=0, menores=0, iguais18=0;
   var resultado=document.getElementById('resultAt4').textContent;

   for(i;i<idades.length;i++){
      if(idades[i]>18){
         maiores++;
      }
      else if(idades[i]<18){
         menores++;
      }
      else if(idades[i]==18){
         iguais18++;
      }
   }
  document.getElementById('resultAt4').innerHTML=("Menores de 18: "+menores+'<br>'+'Maiores de 18: '+maiores+'<br>'+'Iguais a 18: '+iguais18);
   
   console.log(maiores+'.'+menores+'.'+iguais18);
}