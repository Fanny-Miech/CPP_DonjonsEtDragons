# CPP_DonjonsEtDragons

Le jeu “Donjons et Dragons”

=
  Introduction
=

Le but de ce projet est de créer un jeu, inspiré des jeux de plateaux de l’univers « Donjons et Dragons », en utilisant le langage C++. 


=
  Règles du jeu
=

Le but du jeu est de faire avancer un personnage du début à la fin d’un plateau de jeu, en combattant des ennemis.

-> Le plateau de jeu

Le plateau de jeu est constitué de 64 cases dont une case 'Départ' et une case 'Arrivée' aux 2 extrémités du plateau. 

Chaque case peut soit être vide, soit contenir un ennemi à combattre, soit contenir une caisse surprise. Les caisses surprises contiennent des objets (armes, sorts ou potions).

NB : les cases Départ et Arrivée sont des cases vides.


-> Les personnages

Au début de chaque partie, l’utilisateur choisit son personnage (guerrier ou magicien). Chaque type de personnage est caractérisé par les attributs suivants :

- Guerrier :

Nom

Niveau de vie (5 par défaut - 10 max)

Force d’attaque (5- 10)

- Magicien :

Nom

Niveau de vie (3 - 6)

Niveau d’attaque (8 - 15)


-> Les équipements offensifs

Les armes/sorts sont caractérisés par un niveau d’attaque qui, lorsqu’ils sont utilisés, vont modifier le niveau d’attaque du personnage.

On proposera dans cette première version du jeu, les équipements offensifs décrits ci-dessous :

Les armes (spécifiques au guerrier) :

-   	Massue :  augmente l’attaque de 3 points

-   	Epée : augmente l’attaque de 5 points

Les sorts (spécifiques au magicien) :

-   	Eclair:  augmente l’attaque de 2 points.

-   	Boule de feu :  augmente l’attaque de 7 points.


Les potions (utilisables par tous les personnages) :

Potion de vie standard : rend 2 points de vie.

Grande potion de vie : rend 5 points de vie.


-> Les ennemis

Les personnages peuvent être confrontés à des ennemis au cours du jeu. Ces derniers ont différents points de vie et niveaux d’attaque :

Les gobelins: 6 points de vie, 1 point d’attaque.

Les sorciers : 9 points de vie, 2 points d’attaque.

Les dragons : 15 points de vie, 4 points d’attaque. 



=
  Déroulement du jeu
=

Ce jeu se déroule en mode tour par tour. À chaque tour, le joueur va lancer un dé virtuel à 6 faces afin de connaître le nombre de cases dont il avance

-       Si la nouvelle case atteinte est vide : on passe au tour suivant.

-       Si la nouvelle case contient une caisse surprise :

o   Équipement : le bonus est appliqué au personnage,

o   Potions : Le personnage récupère le nombre de points de vie défini par le type de potion.

-       Si la nouvelle case atteinte contient un ennemi 

o   Fuir -> reculer d'un nombre de cases aléatoire entre 1 et 6,

o   Ou se battre.



-> Règle des combats

Le personnage frappe l’ennemi avec la force définie par son équipement (arme ou sort), le niveau de vie de l’ennemi diminue en conséquence.

Si le niveau de vie de l’ennemi atteint 0, il meurt.

Sinon, l’ennemi réplique et le niveau de vie du personnage diminue en fonction de la force de frappe de l’ennemi.

Si le joueur est encore en vie il peut alors à nouveau choisir entre fuir ou se battre.

Note : Le niveau de vie d’un même ennemi (sur une même case) doit être persistant d’un tour à l’autre. Si le joueur parvient à vaincre totalement un ennemi (niveau de vie à 0), cet ennemi disparaît du plateau.



-> Fin de partie

La partie est gagnée si le joueur arrive sur la dernière case du plateau ou en sort. 

La partie est perdue si le joueur a perdu tous ses points de vie.

