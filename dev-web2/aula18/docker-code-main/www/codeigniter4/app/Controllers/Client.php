<?php
namespace App\Controllers;

use App\Controllers\BaseController;
use App\Models\ClientModel;

class Client extends BaseController{
    public function listClients(){
       $ClientModel = new ClientModel();
       $data=[
            'arrayClient' => $ClientModel->findAll()
       ];

       echo view('admin/templates/header');
       echo view('admin/client/listClients', $data);
       echo view('admin/templates/footer');
    }

    public function detailClient($idClient){
        $clientModel = new ClientModel();

        $data=[
        'title' => 'Meu titulo da página',
        'client' => $clientModel -> getClients($idClient)
        ];

        echo view('templates/header');
        echo view('Client/detailClient', $data);
        echo view('templates/footer');
    }

    //API
    public function listClientsApi(){
        $clientModel = new ClientModel();
        $clients=$clientModel -> getClients();
        
        header('Content-Type: application/json; charset=utf-8');
        
        echo view('templates/header');
        echo(json_encode($clients));
        echo view('templates/footer');
    }
}
