# C03

Comparaison, concaténation et recherche dans les chaînes.

## Exercices

| Ex. | Fichier | Rôle |
|---|---|---|
| 00 | `ft_strcmp.c` | compare deux chaînes |
| 01 | `ft_strncmp.c` | compare au plus n caractères |
| 02 | `ft_strcat.c` | concatène |
| 03 | `ft_strncat.c` | concatène au plus n caractères |
| 04 | `ft_strstr.c` | cherche une sous-chaîne |
| 05 | `ft_strlcat.c` | concaténation sécurisée façon BSD |

## Notes

Les comparaisons se font en `unsigned char`, comme dans la libc.

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror ex00/*.c main.c
```
