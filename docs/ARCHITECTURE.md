# MiniShell-Pro Architecture

- **main.c** : point d'entrée, initialise les signaux et boucle shell
- **shell.c** : boucle principale, lecture ligne par ligne
- **parser.c / parser.h** : analyse la ligne en commande et arguments
- **executor.c / executor.h** : exécute commandes, fork & execvp
- **signals.c / signals.h** : gère Ctrl+C
- **tests/** : scripts de test
- **Makefile** : compilation simple
