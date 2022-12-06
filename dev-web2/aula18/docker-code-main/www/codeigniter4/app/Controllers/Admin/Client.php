<?php

namespace App\Controllers\Admin;

use App\Models\ClientModel;
use CodeIgniter\Controller;

class Client extends Controller{
    public function listClients(){
        $ClientModel= new ClientModel();

        $data=[
            'clients'=>$ClientModel->getClients()
        ];

        echo view('admin/templates/header.php');
        echo view('admin/client/listClients.php', $data);
        echo view('admin/templates/footer.php'); 
    }

    public function insertClient(){
        echo view('admin/templates/header.php');
        echo view('admin/client/insertClient.php');
        echo view('admin/templates/footer.php'); 
    }

    public function insertClientAction(){
        $request = \Config\Services::request();

        $ClientModel= new ClientModel();

        $data=[
            'name'=> $request->getVar('name'),
            'phone'=> $request->getVar('phone'),
            'email'=> $request->getVar('email'),
            'address'=> $request->getVar('address')
        ];

        $ClientModel-> insert($data);
        
        return redirect()->route('admin/client');
    }

    public function updateClient($idClient){
        $ClientModel= new ClientModel();

        $data=[
            'client'=>$ClientModel->getClients($idClient)
        ];

        echo view('admin/templates/header.php');
        echo view('admin/client/updateClient.php', $data);
        echo view('admin/templates/footer.php'); 
    }

    public function updateClientAction($idClient){
        $request = \Config\Services::request();
        $ClientModel= new ClientModel();

        $data=[
            'name'=> $request->getVar('name'),
            'phone'=> $request->getVar('phone'),
            'email'=> $request->getVar('email'),
            'address'=> $request->getVar('address')
        ];

        $ClientModel-> update($idClient, $data);
        
        return redirect()->route('admin/client');
        
    }

    public function deleteClient($idClient){
        $ClientModel=new ClientModel();
        $ClientModel->delete($idClient);
        return redirect()->route('admin/client');
    }

    public function searchClient(){
        $request = \Config\Services::request();
        $ClientModel= new ClientModel();
        
        $data=[
            'clients'=>$ClientModel->searchForClient($request->getVar('input'))
        ];

        echo view('admin/templates/header.php');
        echo view('admin/client/listClients.php', $data);
        echo view('admin/templates/footer.php'); 
    }
}