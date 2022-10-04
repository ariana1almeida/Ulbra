
-- comentário
/*
comentario em bloco
*/

--padrão de nomes
/*
    tabelas - plural
    atributos - singular
    snake_case é utilizado no SQL
    abreviações em letra maiúsculo
*/

clientes(id int pk, nome char(100));
enderecos(id int pk, logradouro char(100), numero int, bairro, cidade, estado);

/*
create table nome_da_tabela(
    nome_do_atributo | dominio | vazios | chaves,
    nome_do_atributo | dominio | vazios | chaves
);
*/

create table clientes (
    id int not null primary key,
    nome varchar(100) not null,
    CPF char(14) not null unique
);

create table enderecos (
    id int not null primary key,
    logradouro varchar(100) not null,
    numero varchar(10),
    bairro varchar(100),
    cidade varchar(100),
    estado char(2),
    id_cliente int not null,
        constraint fk_clientes_enderecos
            foreign key(id_cliente) references clientes(id)
);

create table engenheiros(
    id int not null primary key,
    nome varchar(100) not null
);

create table projetos(
    id int not null primary key,
    nome varchar(250) not null
);

create table atuacoes(
    id int not null primary key,
    funcao varchar(20),
    id_engenheiro int not null,
    id_projeto int not null,
        constraint fk_engenheiros_atuacoes
            foreign key(id_engenheiro) references engenheiros(id),
        constraint fk_projetos_atuacoes
            foreign key(id_projeto) references projetos(id)
);

--desafio

/*
aluno(id, nome)
departamento (id, nome)
curso(id, nome, id_depto)
  id_depto referencia departamento (id)
*/

create table alunos(
    id int auto_increment primary key,
    nome varchar(100) not null
);

create table departamentos(
    id int auto_increment primary key,
    nome varchar(100) not null
);

create table cursos(
    id int auto_increment primary key,
    nome varchar(100) not null,
    id_departamento int not null,
    constraint fk_departamentos_cursos
        foreign key(id_departamento) references departamentos(id)
);

/*
professor(id, nome)
disciplina(id, nome, id_prof)
   id_prof referencia professor(id)
*/
create table professores(
    id int auto_increment primary key,
    nome varchar(100) not null
);

create table disciplinas(
    id int auto_increment primary key,
    nome varchar(100) not null,
    id_professor int not null,
    constraint fk_professores_disciplinas
        foreign key(id_professor) references professores(id)
);

/*
matricula(id_disciplina, id_aluno, data_matr)
    id_disciplina referencia disciplina(id) 
   id_aluno referencia aluno(id);
*/

create table matriculas(
    id int auto_increment primary key,
    id_disciplina int not null,
    id_aluno int not null,
    data_matricula date,
    constraint fk_disciplinas_matriculas
        foreign key(id_disciplina) references disciplinas(id),
    constraint fk_alunos_matriculas
        foreign key(id_aluno) references alunos(id)
);
