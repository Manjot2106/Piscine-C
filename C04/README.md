# C04

Conversions entre nombres et chaînes, et changements de base.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_strlen.c` | longueur d'une chaîne |
| 01 | `ft_putstr.c` | affiche une chaîne |
| 02 | `ft_putnbr.c` | affiche un entier, y compris `INT_MIN` |
| 03 | `ft_atoi.c` | chaîne vers entier : espaces, suite de `+`/`-` (le signe dépend du nombre de `-`), puis chiffres |
| 04 | `ft_putnbr_base.c` | affiche un entier dans une base quelconque décrite par une chaîne |
| 05 | `ft_atoi_base.c` | convertit une chaîne écrite dans une base quelconque |

## Notes

Une base est valide si elle contient au moins 2 symboles, sans doublon, sans `+`, `-` ni espace. `ft_putnbr_base` affiche récursivement `n / base` puis le symbole de `n % base`.

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
