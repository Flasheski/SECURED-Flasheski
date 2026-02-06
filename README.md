# 🔐 SECURED
# 🛡️ IMPLÉMENTATION D'UNE TABLE DE HACHAGE

## 🧭 DESCRIPTION DU PROJET

Objectif : Concevoir et implémenter une bibliothèque de hash table en C, pour stocker, organiser et retrouver des données de manière efficace grâce à une fonction de hachage personnalisée.

## 🗓️ DATES

📅 **Du 10/01/2026 à 08h42 au 30/01/2026 à 19h42**

## 🎯 OBJECTIFS

- Comprendre le fonctionnement d'une table de hachage
- Développer une fonction de hachage pertinente et efficace
- Implémenter une structure de données dynamique
- Gérer les collisions à l'aide du separate chaining
- Produire une librairie statique réutilisable

## 🛠️ INFORMATIONS TECHNIQUES

- Langage: C
- Librairie rendue: ```libhashtable.a```
- Compilation: via Makefile (```re```, ```clean```, ```fclean```)

## ✅ FONCTIONS AUTORISÉES

- ```write```, ```malloc```, ```free```

---

## 🗂️ TABLE DE HACHAGE

```bash
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);
```

## 🔑 MANIPULATION DE LA TABLE

```bash
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
int *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);
```

---

##  💥 GESTION DES COLLISIONS

Lorsque plusieurs clés correspondent au même index, une collision se produit.
Dans ce projet, les collisions sont gérées par separate chaining :

- Chaque index de la table contient une liste chainée
- Plusieurs éléments peuvent être stockés au même index
- Si une clé existe déjà, la valeur associée doit être mise à jour

---

## 📁 STRUCTURE DU PROJET

```bash
└── secured
    ├── include/
    ├── lib/
    ├── src/
    │   ├── hash/
    │   ├── ht_table/
    │   └── main.c
    └── Makefile
```

## ⚙️ ÉTAPES POUR POUVOIR RÉALISER LE PROJET

1 - Implémentation d'une première fonction de hachage

2 - Définition de la structure ```hashtable_t```

3 - Création et destruction de la table

4 - Insertion des élements et gestion des collisions

5 - Recherche et suppression d'éléments

6 - Gestion complète de la mémoire et des erreurs

7 - Tests avec des volumes de données importantes

## 🎓 COMPÉTENCES MOBILISÉES

- Tableaux et listes chaînées
- Gestion dynamique de la mémoire
- Pointeurs et pointeurs de fonctions
- Conception de bibliothèques en C
- Algorithmes de hachage
