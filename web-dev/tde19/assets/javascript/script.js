//calculadora
$(document).ready(function () {
  $("#btn").click(function () {
    var n1 = $("#n1")[0].value;
    var n2 = $("#n2")[0].value;
    var operacao = $("#operacao")[0].value;
    var resultado = $("#resultado")[0];

    n1 = parseInt(n1);
    n2 = parseInt(n2);

    switch (operacao) {
      case "+":
        resultado.value = n1 + n2;
        break;
      case "-":
        resultado.value = n1 - n2;
        break;
      case "*":
        resultado.value = n1 * n2;
        break;
      case "/":
        resultado.value = n1 / n2;
        break;
    }
    console.log(n1);
    console.log(n2);
    console.log(operacao);
  });
});

//calcula Kwh

$(document).ready(function () {
  $("#calcularKwh").click(function () {
    var kwh = $("#kwh")[0].value;
    var valorUnit = $("#valorUnit")[0].value;
    var resultadoAt2;

    var kwh = parseFloat(kwh);
    var valorUnit = parseFloat(valorUnit);

    if (kwh > 200) {
      resultadoAt2 = 1.5 * (valorUnit * kwh);
    } else if (kwh > 100) {
      resultadoAt2 = 1.25 * (valorUnit * kwh);
    } else {
      resultadoAt2 = valorUnit * kwh;
    }
    console.log("Valor kwhs" + resultadoAt2);
    $("#resultadoAt2").val(resultadoAt2);
  });
});

//verificador de numero maior
$(document).ready(function () {
  $("#checarMaior").click(function () {
    var inputs = $("#inputs")[0].value;
    var inputs = inputs.split(",");
    var i = 0,
      maior = 0;
    for (i; i < inputs.length; i++) {
      if (inputs[i] > maior) {
        maior = inputs[i];
      }
    }
    console.log(maior);
    $("#maior").val(maior);
  });
});

//verificar idades

$(document).ready(function () {
  $("#verifyAges").click(function () {
    var idades = $("#idades")[0].value;
    idades = idades.split(",");
    var i = 0,
      maiores = 0,
      menores = 0,
      iguais18 = 0;

    for (i; i < idades.length; i++) {
      if (idades[i] > 18) {
        maiores++;
      } else if (idades[i] < 18) {
        menores++;
      } else if (idades[i] == 18) {
        iguais18++;
      }
    }
    $("#resultAt4").html(
      "Menores de 18: " +
        menores +
        "<br>" +
        "Maiores de 18: " +
        maiores +
        "<br>" +
        "Iguais a 18: " +
        iguais18
    );
    console.log(maiores + "." + menores + "." + iguais18);
  });
});