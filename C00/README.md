# C00

Premiers pas en C : afficher avec `write` uniquement.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_putchar.c` | affiche un caractère |
| 01 | `ft_print_alphabet.c` | affiche l'alphabet en minuscules |
| 02 | `ft_print_reverse_alphabet.c` | affiche l'alphabet à l'envers |
| 03 | `ft_print_numbers.c` | affiche les chiffres de 0 à 9 |
| 04 | `ft_is_negative.c` | affiche `N` si l'entier est négatif, `P` sinon |
| 05 | `ft_print_comb.c` | toutes les combinaisons croissantes de 3 chiffres distincts (`012, 013, …, 789`) |
| 06 | `ft_print_comb2.c` | toutes les paires de nombres à 2 chiffres `aa bb` avec `aa < bb` |

## Notes

Les combinaisons sont générées par des boucles imbriquées dont chaque indice démarre après le précédent, ce qui garantit l'ordre croissant sans doublon.

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
