create table fornecedores(
    id int auto_increment primary key,
    nome varchar(100) not null
);
create table categorias(
    id int auto_increment primary key,
    nome varchar(100) not null
);
create table produtos(
    id int auto_increment primary key,
    data_cadastro date not null,
    valor_unitario int not null,
    id_categoria int not null,
    constraint produtos_fk_categorias
        foreign key(id_categoria) references categorias (id)
        on delete restrict
        on update cascade
);
create table pedidos(
    id int auto_increment primary key,
    data date not null,
    valor_unitario int not null,
    quantidade int not null,
    id_produto int not null,
    id_fornecedor int not null,
    constraint pedidos_fk_produtos
        foreign key(id_produto) references produtos(id)
        on delete restrict
        on update cascade,
    constraint pedidos_fk_fornecedores
        foreign key (id_fornecedor) references fornecedores(id)
        on delete restrict
        on update cascade 
);

alter table fornecedores
    add data_ultima_compra date;

alter table pedidos 
    rename column data to data_pedido;

alter table produtos
    drop data_cadastro;

alter table produtos drop constraint produtos_fk_categorias;
alter table produtos add constraint produtos_fk_categorias
        foreign key(id_categoria) references categorias (id)
        on delete cascade
        on update restrict;

alter table fornecedores modify column nome varchar(130) not null;

/*
drop table fornecedores;
    --tabela mencionada em produtos e pedidos, com constraint de restrict, proibindo de apagar
*/

alter table pedidos add numero_pedido varchar(30);