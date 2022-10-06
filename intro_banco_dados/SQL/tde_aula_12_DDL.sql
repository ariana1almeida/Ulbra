create table colaboradores(
    id int auto_increment primary key,
    nome varchar(100) not null,
    email varchar(100) not null,
    senha varchar(30) not null,
    indicacoes int
);
create table projetos(
    id int auto_increment primary key,
    nome varchar(100) not null,
    descricao varchar(200),
    id_colaborador int not null,
    estimativa_duracao int,
    constraint fk_colaboradores_projetos
        foreign key(id_colaborador) references colaboradores(id)
);
create table melhorias_de_processo(
    id int auto_increment primary key,
    id_projeto int not null,
    departamento varchar(100) not null,
    resultados_esperados varchar(200),
    constraint fk_projetos_melhorias
        foreign key (id_projeto) references projetos(id)
);
create table sociais(
    id int auto_increment primary key,
    id_projeto int not null,
    publico_beneficiario varchar(100) not null,
    constraint fk_projetos_sociais
        foreign key (id_projeto) references projetos(id)
);
create table comentarios(
    id int auto_increment primary key,
    id_projeto int not null,
    id_colaborador int not null,
    comentario varchar(500) not null,
    data_e_hora date not null,
    constraint fk_projetos_comentarios
        foreign key(id_projeto) references projetos(id),
    constraint fk_colaboradores_comentarios
        foreign key(id_colaborador) references colaboradores(id)
);