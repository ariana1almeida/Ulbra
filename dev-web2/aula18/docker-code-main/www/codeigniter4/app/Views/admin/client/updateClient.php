<h1>Alterar Cliente</h1>
<form class="form" action="<?=base_url('admin/updateClientAction/'.$arrayClients['idClient'])?>" method="post" enctype='multipart/form-data'>>
    <div class="mb-3 mt-3">
        <label class="form-label">Nome</label>
        <input name="name" class="form-control" type="text" value="<?=$arrayClients['name']?>">
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Email</label>
        <input name="email" class="form-control" type="email" value="<?=$arrayClients['email']?>">
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Telefone</label>
        <input name="phone" class="form-control" type="text" value="<?=$arrayClients['phone']?>">
    </div>
    <div class="mb-3 mt-3">
        <label class="form-label">Endereço</label>
        <input name="address" class="form-control" type="text" value="<?=$arrayClients['address']?>">
    </div>
        <br>
        <br>
        <button type="submit" class="btn btn-warning">Salvar</button>
    </div>
</form>