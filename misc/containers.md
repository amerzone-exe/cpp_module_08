# Containers:

## Les Arrays:

### Arrays declarations:

```c++
int a[10]; // Stack
int* a = new int[10]; //Heap
```
Les arrays doivent etre continue, il ne peux pas y avoir d'espace entre les elements de notre array
Cela rend les arrays rapide d'acces.

Arrays en c++ avec <array>

std::array<int, 10> b.
Les avantages des arrays en c++, c'est qu'on va pouvoir connaitre par exemple la size de notre array ailleurs dans notre programme avec array.size() par exemple.
Le probleme est que l ón doit connaitre la taille de notre array, elle n'est pas modulable.

## Vector

```c++
std::vector<int> a;
std::vector<int> b(10); // ou 10 est le nombre d'element de notre vector
```

Le vector est un container qui a la possibilité d'agrandir sa taille en fonction des besoins.
Cet agrandissements n'est pas constant. Le vector va choisir de facon aleatoir si il aggrandir sa taille de plus ou mois d'element.

La chose a savoir est qu'a chaque fois qu'un vector vas agrandir sa taille il va chercher une nouvelle places dans la memoire qui à la possibilité de l'acceuillir car il faut que les element du vecteur reste continue dans la memoire. Cela va donc prendre du temps si on fait que d'agrandir en boucle le vector petit a petit.

## Iterator

Les Iterators sont utilisé pour accedé et iteré sur les elements d'une data strucure (vector, sets etc..) en pointant dessus.

`begin()` et  `end()` sont des fonctions presentes dans certaint containers (elles appartiennent aux container pas a la class iterator).

`begin()` retourne un iterator qui pointe sur le premier element de la data structure.
`end()` retourne un iterator qui pointe une position apres le dernier element.

## List

Les listes (tout comme les vecteurs) permettent de stocker plusieurs elements d'un meme type et elles peuvent s'agrandir dynamiquement.

Le differences avec les vecteurs sont:

- On peut supprimer les elements du debut et de la fin de la liste.
- Elle n'a pas de memoire contigu.
- 
-