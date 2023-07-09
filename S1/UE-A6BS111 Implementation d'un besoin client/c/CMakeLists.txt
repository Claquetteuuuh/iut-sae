cmake_minimum_required(VERSION 3.23)
project(SAEFINITO C)

set(CMAKE_C_STANDARD 99)

add_executable(SAEFINITO main.c utils/fileToList.c utils/fileToList.h utils/structs.h utils/countLines.c utils/countLines.h utils/triGens.c utils/triGens.h utils/fillFile.c utils/fillFile.h utils/find.c utils/find.h utils/editMail.c utils/editMail.h utils/removeLine.c utils/removeLine.h utils/addLine.c utils/addLine.h api/ajouter_client.c api/ajouter_client.h api/modifier_mel_client.c api/modifier_mel_client.h api/filtrer_donnee_manquante.c api/filtrer_donnee_manquante.h api/filtrer_un_champ.c api/filtrer_un_champ.h utils/filterBy.c utils/filterBy.h api/trier_clients_par_nom.c api/trier_clients_par_nom.h api/supprimer_client.c api/supprimer_client.h api/filtrer_combiner_deux_champs.c api/filtrer_combiner_deux_champs.h api/modifier_autre_que_mail.c api/modifier_autre_que_mail.h)
