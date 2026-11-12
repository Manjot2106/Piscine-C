# C02

Manipulation de chaînes de caractères.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_strcpy.c` | copie une chaîne |
| 01 | `ft_strncpy.c` | copie au plus n caractères et complète par des `\0` |
| 02 – 06 | `ft_str_is_*.c` | teste si la chaîne est alphabétique, numérique, en minuscules, en majuscules, imprimable |
| 07 | `ft_strupcase.c` | passe en majuscules |
| 08 | `ft_strlowcase.c` | passe en minuscules |
| 09 | `ft_strcapitalize.c` | met une majuscule au début de chaque mot (un mot = suite alphanumérique) |
| 10 | `ft_strlcpy.c` | copie sécurisée façon BSD, renvoie la longueur de la source |

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
