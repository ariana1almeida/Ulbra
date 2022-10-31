<?php

$nome = $_FILES['foto']['name'];
$caminho = $_FILES['foto']['tmp_name'];
$tipo = $_FILES['foto']['type'];
 
$arquivo = $caminho;
$destino = "arquivos/{$nome}";
move_uploaded_file($arquivo, $destino);

header("location: index.php");    

?>
