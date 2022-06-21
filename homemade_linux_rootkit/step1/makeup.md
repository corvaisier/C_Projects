## Simple appel système
L'objectif ici est d'écrire un programme qui réalisera un simple appel système. Techniquement, c'est la fonction wrapper de la libc qui fera l'appel, et non le programme.
Pour se faire, je vais utiliser deux librairies :

```C
#include <unistd.h>
#include <fcntl.h>
```
``unistd.h`` contient tous les wrappers nécessaires pour les appels systèmes et ``fcnt1.h`` ceux pour le contrôle de fichiers.

Pour la suite, j'ai utilisé la documentation de [codewiki](http://codewiki.wikidot.com/c:system-calls:open) .
````C
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main (void)
{
	open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

	return 0;
}
````
`O_WRONLY` - Ouvrir un fichier en mode lecture.
`O_CREAT` -	Si le fichier n'existe pas, le créer. Si O_CREAT est utilisé, alors il faut inclure un troisième paramètre pour définir les permissions.
`S_IRWXU` - On définit les droits à `700`.

La suite du script sert à s'assurer du bon fonctionnement du script.

## Exemple de sortie de terminal :
```terminal_session
GOLGOTH:~/C_Language_Learning/ # ./syscall
The open operation succeeded!#
GOLGOTH:~/C_Language_Learning/ # ls -lah
total 32K
drwxr-xr-x  2 root root 4.0K Jun 21 12:46 .
drwxr-xr-x 35 root root 4.0K Jun 21 12:46 ..
-rw-r--r--  1 root root  328 Jun 21 12:46 assignment24.c
-rwxr-xr-x  1 root root  16K Jun 21 12:42 assignment24
-rwx------  1 root root    0 Jun 21 12:42 testfile.txt
```