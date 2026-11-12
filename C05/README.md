# C05

Récursivité et mathématiques.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_iterative_factorial.c` | factorielle en boucle |
| 01 | `ft_recursive_factorial.c` | factorielle récursive |
| 02 | `ft_iterative_power.c` | puissance en boucle |
| 03 | `ft_recursive_power.c` | puissance récursive |
| 04 | `ft_fibonacci.c` | n-ième terme de Fibonacci, récursif |
| 05 | `ft_sqrt.c` | racine carrée entière (0 si elle n'est pas entière) |
| 06 | `ft_is_prime.c` | test de primalité |
| 07 | `ft_find_next_prime.c` | premier nombre premier supérieur ou égal à n |

## Notes

Les cas négatifs et les débordements sont gérés : factorielle d'un négatif = 0, puissance d'exposant négatif = 0. Les tests de primalité et la racine s'arrêtent à √n.

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
