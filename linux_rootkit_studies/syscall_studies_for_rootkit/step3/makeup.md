## Ecriture de fichier
Une fois un peu plus familier avec les appels systèmes, il est possible de passer à l'étape suivante : Développer un programme qui lancera un shell sur un port souhaité, en s'appuyant sur le protocole TCP.
Pour ceci il faut utiliser le système de socket.

Les librairies utilisées sont :
````C
#include <sys/socket.h>
#include <netinet/in.h>
````
La première met à disposition tout ce qu'il faut pour utiliser socket(), la deuxième sert pour la partie réseau.

Voici ma documentation pour les appels systèmes : https://man7.org/linux/man-pages/man2/
Les appels systèmes utilisés sont :
socket() crée un point de terminaison pour la communication et renvoie un fichier
        descripteur qui fait référence à ce point de terminaison. Le descripteur de fichier
        renvoyé par un appel réussi sera le fichier avec le numéro le plus bas
        descripteur non ouvert actuellement pour le processus.

bind()  Lorsqu'une socket est créée avec socket(2), elle existe sous un nom
        espace (famille d'adresses) mais n'a pas d'adresse qui lui soit assignée. Bind()
        attribue l'adresse spécifiée par addr à la socket référencée
        par le descripteur de fichier sockfd. addrlen spécifie la taille, en
        octets, de la structure d'adresse pointée par addr.
        Traditionnellement, cette opération s'appelle « attribuer un nom à un
        prise".

listen() marque la socket référencée par sockfd comme passive
        socket, c'est-à-dire en tant que socket qui sera utilisé pour accepter
        les requêtes de connexion en utilisant accept(2).

accept() est utilisé avec le socket basé sur la connexion
        type (SOCK_STREAM, SOCK_SEQPACKET). Il extrait le premier
        demande de connexion dans la file d'attente des connexions en attente pour le
        socket d'écoute, sockfd, crée un nouveau socket connecté, et
        renvoie un nouveau descripteur de fichier faisant référence à cette socket. La
        socket nouvellement créé n'est pas à l'état d'écoute. L'original
        socket sockfd n'est pas affecté par cet appel.

dup2() effectue la même tâche que dup(), mais
        au lieu d'utiliser le descripteur de fichier inutilisé portant le numéro le plus bas, il
        utilise le numéro de descripteur de fichier spécifié dans newfd. En d'autre
        mots, le descripteur de fichier newfd est ajusté de sorte qu'il
        fait référence à la même description de fichier ouvert que oldfd.

execve() est le dernier appel système. On peut utiliser cet appel système pour exécuter /bin/sh afin que le client puisse avoir un shell.
         Cet appel système peut être appelé avec le nom du programme que vous souhaitez exécuter, puis deux arguments NULL pour ce programme.
