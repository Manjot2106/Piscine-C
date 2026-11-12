# C01

Pointeurs et tableaux.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_ft.c` | écrit 42 via un pointeur |
| 01 | `ft_ultimate_ft.c` | même chose à travers 9 niveaux de pointeurs |
| 02 | `ft_swap.c` | échange deux entiers via leurs adresses |
| 03 | `ft_div_mod.c` | quotient et reste dans deux pointeurs |
| 04 | `ft_ultimate_div_mod.c` | quotient et reste écrits dans les variables d'entrée |
| 05 | `ft_putstr.c` | affiche une chaîne |
| 06 | `ft_strlen.c` | longueur d'une chaîne |
| 07 | `ft_rev_int_tab.c` | inverse un tableau d'entiers sur place |
| 08 | `ft_sort_int_tab.c` | trie un tableau d'entiers (tri à bulles) |

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
