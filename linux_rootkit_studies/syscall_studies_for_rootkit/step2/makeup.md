## Ecriture de fichier
La prochaine étape sera de pouvoir écrire dans le fichier. En se référant sur le wiki présent dans l'étape précédente, afin de pouvoir écrire du texte, il faut connaître la longeur de ce texte : "Writing test data to the file." a une longeur de 30 caractères.
La dernière étape est de pouvoir clore l'appel système avec la fonction `close()`


## Exemple de sortie de terminal :
```terminal_session
GOLGOTH:~/C_Language_Learning/ # ./syscall
The open operation succeeded!
The write operation succeeded!#
GOLGOTH:~/C_Language_Learning/ # cat testfile.txt
Writing test data to the file#
```