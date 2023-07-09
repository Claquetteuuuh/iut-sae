alter table AVOIR
   drop constraint FK_AVOIR_AVOIR_FLEUR;

alter table AVOIR
   drop constraint FK_AVOIR_AVOIR2_GROSSIST;

alter table BOUQUET
   drop constraint FK_BOUQUET_CONTIENT_COMMANDE;

alter table COMMANDE
   drop constraint FK_COMMANDE_LIVRE_A_CODEPOST;

alter table COMMANDE
   drop constraint FK_COMMANDE_PAYER_CLIENT;

alter table COMPOSER
   drop constraint FK_COMPOSER_COMPOSER_BOUQUET;

alter table COMPOSER
   drop constraint FK_COMPOSER_COMPOSER2_FLEUR;

drop index AVOIR2_FK;

drop index AVOIR_FK;

drop table AVOIR cascade constraints;

drop index CONTIENT_FK;

drop table BOUQUET cascade constraints;

drop table CLIENT cascade constraints;

drop table CODEPOSTALLIVRAISON cascade constraints;

drop index LIVRE_A_FK;

drop index PAYER_FK;

drop table COMMANDE cascade constraints;

drop index COMPOSER2_FK;

drop index COMPOSER_FK;

drop table COMPOSER cascade constraints;

drop table FLEUR cascade constraints;

drop table GROSSISTE cascade constraints;

/*==============================================================*/
/* Table : AVOIR                                                */
/*==============================================================*/
create table AVOIR 
(
   ID_FLEUR             INTEGER              not null,
   ID_GROSSISTE         INTEGER              not null,
   DATE_PRIX            DATE,
   PRIX_ACHAT           INTEGER,
   constraint PK_AVOIR primary key (ID_FLEUR, ID_GROSSISTE)
);

/*==============================================================*/
/* Index : AVOIR_FK                                             */
/*==============================================================*/
create index AVOIR_FK on AVOIR (
   ID_FLEUR ASC
);

/*==============================================================*/
/* Index : AVOIR2_FK                                            */
/*==============================================================*/
create index AVOIR2_FK on AVOIR (
   ID_GROSSISTE ASC
);

/*==============================================================*/
/* Table : BOUQUET                                              */
/*==============================================================*/
create table BOUQUET 
(
   ID_BOUQUET           INTEGER            not null,
   COMMAND_ID           INTEGER              not null,
   NB_EXEMPLAIRE        CHAR(100),
   NOM_BOUQUET          VARCHAR(100),
   constraint PK_BOUQUET primary key (ID_BOUQUET)
);

/*==============================================================*/
/* Index : CONTIENT_FK                                          */
/*==============================================================*/
create index CONTIENT_FK on BOUQUET (
   COMMAND_ID ASC
);

/*==============================================================*/
/* Table : CLIENT                                               */
/*==============================================================*/
create table CLIENT 
(
   ID_CLIENT            INTEGER              not null,
   NOMCLIENT            CHAR(100)            not null,
   ADRESS_FAC           CHAR(100)            not null,
   TEL                  CHAR(14),
   EMAIL                CHAR(100)            not null,
   constraint PK_CLIENT primary key (ID_CLIENT)
);

/*==============================================================*/
/* Table : CODEPOSTALLIVRAISON                                  */
/*==============================================================*/
create table CODEPOSTALLIVRAISON 
(
   CODEP                INTEGER              not null,
   TARIFL               INTEGER               not null,
   constraint PK_CODEPOSTALLIVRAISON primary key (CODEP)
);

/*==============================================================*/
/* Table : COMMANDE                                             */
/*==============================================================*/
create table COMMANDE 
(
   COMMAND_ID           INTEGER              not null,
   CODEP                INTEGER              not null,
   ID_CLIENT            INTEGER              not null,
   NBRBOUQUET           INTEGER,
   PAYE                 NUMBER,
   ADRESSELIVRAISON     CHAR(100)            not null,
   NOMLIVRAISON         CHAR(100)            not null,
   DATELIVRAISONPREVUE  DATE                 not null,
   VILLE                CHAR(100)            not null,
   DATE_ACCEPT          DATE,
   constraint PK_COMMANDE primary key (COMMAND_ID)
);

/*==============================================================*/
/* Index : PAYER_FK                                             */
/*==============================================================*/
create index PAYER_FK on COMMANDE (
   ID_CLIENT ASC
);

/*==============================================================*/
/* Index : LIVRE_A_FK                                           */
/*==============================================================*/
create index LIVRE_A_FK on COMMANDE (
   CODEP ASC
);

/*==============================================================*/
/* Table : COMPOSER                                             */
/*==============================================================*/
create table COMPOSER 
(
   ID_BOUQUET           INT            not null,
   ID_FLEUR             INTEGER              not null,
   NBFLEUR              INTEGER,
   constraint PK_COMPOSER primary key (ID_BOUQUET, ID_FLEUR)
);

/*==============================================================*/
/* Index : COMPOSER_FK                                          */
/*==============================================================*/
create index COMPOSER_FK on COMPOSER (
   ID_BOUQUET ASC
);

/*==============================================================*/
/* Index : COMPOSER2_FK                                         */
/*==============================================================*/
create index COMPOSER2_FK on COMPOSER (
   ID_FLEUR ASC
);

/*==============================================================*/
/* Table : FLEUR                                                */
/*==============================================================*/
create table FLEUR 
(
   ID_FLEUR             INTEGER              not null,
   NOMFLEUR             CHAR(100)            not null,
   PRIX_VENTE           INTEGER              not null,
   constraint PK_FLEUR primary key (ID_FLEUR)
);

/*==============================================================*/
/* Table : GROSSISTE                                            */
/*==============================================================*/
create table GROSSISTE 
(
   ID_GROSSISTE         INTEGER              not null,
   NOM_GROSSISTE        CHAR(100),
   constraint PK_GROSSISTE primary key (ID_GROSSISTE)
);

alter table AVOIR
   add constraint FK_AVOIR_AVOIR_FLEUR foreign key (ID_FLEUR)
      references FLEUR (ID_FLEUR);

alter table AVOIR
   add constraint FK_AVOIR_AVOIR2_GROSSIST foreign key (ID_GROSSISTE)
      references GROSSISTE (ID_GROSSISTE);

alter table BOUQUET
   add constraint FK_BOUQUET_CONTIENT_COMMANDE foreign key (COMMAND_ID)
      references COMMANDE (COMMAND_ID);

alter table COMMANDE
   add constraint FK_COMMANDE_LIVRE_A_CODEPOST foreign key (CODEP)
      references CODEPOSTALLIVRAISON (CODEP);

alter table COMMANDE
   add constraint FK_COMMANDE_PAYER_CLIENT foreign key (ID_CLIENT)
      references CLIENT (ID_CLIENT);

alter table COMPOSER
   add constraint FK_COMPOSER_COMPOSER_BOUQUET foreign key (ID_BOUQUET)
      references BOUQUET (ID_BOUQUET);

alter table COMPOSER
   add constraint FK_COMPOSER_COMPOSER2_FLEUR foreign key (ID_FLEUR)
      references FLEUR (ID_FLEUR);
