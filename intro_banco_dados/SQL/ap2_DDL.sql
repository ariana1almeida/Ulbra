/* -------------ATIVIDADE 01 ----------------*/
create table clientes(
    id int auto_increment primary key,
    nome varchar(100) not null,
    cpf char(11) not null unique,
    telefone int(20) not null,
    endereco varchar(100) not null
);

create table carros (
    id int auto_increment primary key,
    modelo varchar(20) not null,
    placa varchar(10) not null unique,
    marca varchar(30) not null
);

create table aluguel(
    id int auto_increment primary key,
    data_aluguel date not null,
    data_devolucao date not null,
    valor decimal(12,2) not null,
    id_carro int not null,
    id_cliente int not null unique,
    constraint carros_fk_aluguel
    foreign key(id_carro) references carros(id)
        on delete restrict
        on update cascade,
    constraint aluguel_fk_aluguel
    foreign key(id_cliente) references clientes(id)
        on delete restrict
        on update cascade
);

insert into carros(modelo,marca,placa)
    values
        ('conversivel','fiat', 'asf341'),
        ('meu modelo','chevrolet', 'as1341')


insert into clientes(nome,cpf,telefone,endereco)
    values
        ('edu','12355678910', '234245355', 'rua tal'),
        ('joao','12345678910', '35635656','rua tal')

insert into aluguel(data_aluguel,data_devolucao,valor,id_carro,id_cliente)
	values    	
		('2022-12-23','2023-01-23','11.54','1','2'),
		('2022-11-23','2022-12-23','11.54','2','1')

/*1 - comando de consulta*/
SELECT a.data_aluguel, a.id_carro,c.modelo, c.placa,c.marca
from aluguel as a, carros as c
where a.id_carro = c.id && a.data_aluguel = '2021-11-23'       

/*Segundo comando*/
SELECT *
from clientes as c
where c.nome = 'silva'

/*Terceiro comando*/
Select  a.valor + (a.valor * '0.20')
from aluguel as a
where a.valor

Select valor,
valor * 1.20 as valor_mais_vinte_percent
from aluguel

/* -------------ATIVIDADE 02 ----------------*/

create table escritores(
    id int auto_increment primary key,
    nome varchar (100) not null
);
create table artigos(
    id int auto_increment primary key,
    id_escritor int not null,
    titulo varchar(100) not null,
    nome_editora varchar(100) not null,
    pagina_inicial int,
    pagina_final int
    constraint escritores_fk_artigos
        foreign key(id_escritor) references escritores(id)
        on delete restrict
        on update restrict
);

insert into escritores(nome)
values
        ('Eduardo Barbosa'),
        ('Ariana Almeida'),
        ('Cassio Costa'),
        ('João Carlos Barbosa'),
        ('João Rodrigues');
insert into escritores(id,nome) values ('1234','Diogo Vinícius');

insert into artigos(id_escritor,titulo,nome_editora,pagina_inicial,pagina_final)
values
        ('1', 'Sou Gremista', 'Saraiva', '1', '10'),
        ('3', 'Fundamentos de Bancos de Dados', 'Saraiva', '1', '404'),
        ('1', 'Não seja colorado', 'Saraiva', '1', '13'),
        ('2', 'Crepúsculo: O Melhor Filme Do Século', 'Rocco', '1', '326'),
        ('1', 'A Crise dos 100 Anos', 'Rocco', '1', '300'),
        ('1234', 'Magic The Gathering: Regras Básicas', 'Intrínseca', '1', '110'),
        ('2', 'Crepúsculo Lua Nova: O Segundo Melhor Filme do Século', 'Saraiva', '1', '259');
insert into artigos(id, id_escritor,titulo,nome_editora,pagina_inicial,pagina_final)
values
        ('1234', '1234', 'O Número da Sorte', 'Intrínseca', '1', '1234');


SELECT * from artigos where id = '1234'

SELECT * from artigos where nome_editora = 'Saraiva'

SELECT * from escritores where nome like '%João'

/* -------------ATIVIDADE 03 ----------------*/
create table socios(
    id int auto_increment primary key,
    endereco varchar(200) not null,
    nome varchar(100) not null,
    descricao varchar(150) not null
);

create table servicos(
    id int auto_increment primary key,
    descricao varchar(150) not null,
    mes_referencia date not null,
    valor_pago decimal(12,2) not null
);

create table pedidos(
    id int auto_increment primary key,
    id_socio int not null,
    id_servico int not null,
    constraint socios_fk_pedidos
        foreign key(id_socio) references socios(id)
            on delete restrict
            on update cascade,
    constraint servicos_fk_pedidos
        foreign key(id_servico) references servicos(id)
            on delete restrict 
            on update cascade
)

insert into socios(nome,descricao,endereco)
values
        ('eduardo', 'sou gremista', 'rua paulo teixeira'),
        ('Joao', 'sou colorado', 'rua Barão do Rio Branco')

insert into servicos(descricao,valor_pago,mes_referencia)
values      
        ('servico de jardinagem','20.50','2022-12-06'),
        ('servico de piscina','50.50','2020-01-06'),
        ('servico de limpeza','600.50','2020-01-06')


insert into pedidos(id_servico,id_socio)
values
        ('1','2'),
        ('2','1')


select *
from servicos
where valor_pago > "500"

select pedidos.id as id_pedido, servicos.*
from pedidos, servicos
where servicos.mes_referencia = '2020-01-06'

select *
from socios
where endereco = 'rua Barão do Rio Branco'