function convertToDecimal(numero, base){
    var numero = document.getElementById('numero').value;
    var base = document.getElementById('base').value;
    var resultParcial = 0;
    var resultFinal = 0;
    var numReal = 0;
    var arrNumero = numero.split('');
    var posicao=0;
    posicao=arrNumero.length-1;

    for(i=0; i<arrNumero.length; i++){
        if(isNaN(arrNumero[i])){
            numReal=hexaToDecimal(arrNumero[i]);
        } else{
            numReal=arrNumero[i];
        }
        resultParcial = (numReal*(base**posicao));
        resultFinal = resultFinal + resultParcial;
        posicao--;
    }
    document.getElementById("resultFinal").innerHTML = ("Resultado: " + resultFinal);
}

function hexaToDecimal(letra){
    var valor =0;
    switch(letra){
        case "A":
            valor=10;
            break;
        case "B":
            valor=11;
            break;
        case "C":
            valor=12;
            break;
        case "D":
            valor=13;
            break;
        case "E":
            valor=14;
            break;
        case "F":
            valor=15;
            break;
        default:
            valor=0;
    }
    return valor;
}

