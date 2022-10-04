<?php

class ClientController{
    public function __construct(){
        if (!isset($_SESSION['user'])) {
            header('Location:?controller=main&action=login');
        }
    }
    public function listClients(){
        require_once('models/ClientModel.php');
        $ClientModel = new ClientModel();
        $result = $ClientModel->listClients();

        $arrayClient = array();

        while ($client = $result->fetch_assoc()) {
            array_push($arrayClient, $client);
        }

        require_once('views/templates/header.php');
        require_once('views/client/listClient.php');
        require_once('views/templates/footer.php');
    }
    public function detailsClient($idClient){
        require_once('models/ClientModel.php');
        $ClientModel = new ClientModel();
        $result = $ClientModel->detailsClient($idClient);

        require_once('views/templates/header.php');
        echo "detalhes do cliente $idClient";
        require_once('views/templates/footer.php');

        if ($arrayClient = $result->fetch_assoc()) {
            require_once('views/templates/header.php');
            require_once('views/client/detailsClient.php');
            require_once('views/templates/footer.php');
        }
    }
}
