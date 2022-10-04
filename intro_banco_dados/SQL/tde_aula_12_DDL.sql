create table colaboradores(
    id int auto_increment primary key,
    nome varchar(100) not null,
    email varchar(100) not null,
    senha varchar(30) not null,
    indicacoes
);
create table departamentos(
    id int auto_increment primary key,
    nome varchar(100) not null
);
create table projetos(
    id int auto_increment primary key,
    nome varchar(100) not null,
    descricao varchar(200),
    id_colaborador int not null,
    estimativa_duracao int,
    categoria,
    constraint fk_colaboradores_projetos
        foreign key(id_colaborador) references colaboradores(id)
);
create table comentarios(
    id int auto_increment primary key,
    id_projeto int not null,
    id_colaborador int not null,
    data_e_hora date not null,
    constraint fk_projetos_comentarios
        foreign key(id_projeto) references projetos(id),
    constraint fk_colaboradores_comentarios
        foreign key(id_colaborador) references colaboradores(id)
);