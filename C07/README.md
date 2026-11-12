# C07

Allocation dynamique avec `malloc`.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_strdup.c` | duplique une chaîne |
| 01 | `ft_range.c` | tableau des entiers de `min` à `max - 1` |
| 02 | `ft_ultimate_range.c` | même chose via un pointeur, renvoie la taille |
| 03 | `ft_strjoin.c` | joint un tableau de chaînes avec un séparateur |
| 04 | `ft_convert_base.c, ft_convert_base2.c` | convertit un nombre d'une base vers une autre et renvoie la chaîne allouée |
| 05 | `ft_split.c` | découpe une chaîne selon un ensemble de séparateurs |

## Notes

Chaque fonction calcule d'abord la taille exacte nécessaire, alloue une seule fois, puis remplit le résultat.

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
