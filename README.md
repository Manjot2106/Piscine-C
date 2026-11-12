# Piscine C (C00 à C09)

*Projets réalisés pendant la Piscine C de 42 par msingh.*

Les 10 modules C de la piscine de 42 regroupés dans un seul dépôt. Chaque dossier contient ses exercices et son propre README détaillé.

| Module | Thème |
|---|---|
| [C00](C00) | premiers programmes avec `write` uniquement |
| [C01](C01) | pointeurs et tableaux |
| [C02](C02) | manipulation de chaînes (copie, tests de caractères, casse) |
| [C03](C03) | comparaison, concaténation et recherche dans les chaînes |
| [C04](C04) | `atoi`, `putnbr` et changements de base |
| [C05](C05) | récursivité et mathématiques (factorielle, puissance, Fibonacci, racine, nombres premiers) |
| [C06](C06) | arguments de `main` (`argc` / `argv`) |
| [C07](C07) | allocation dynamique (`strdup`, `range`, `strjoin`, `convert_base`, `split`) |
| [C08](C08) | fichiers d'en-tête, macros et structures |
| [C09](C09) | bibliothèques statiques et Makefile |

## Compilation

Les exercices sont des fonctions seules, sans `main`. Pour les tester, on les compile avec un `main` de test :

```bash
cc -Wall -Wextra -Werror C02/ex00/ft_strcpy.c main.c
```

Tout le code respecte la Norme 42. Les fonctions ont été testées contre leurs équivalents de la libc, et valgrind ne signale aucune fuite.
