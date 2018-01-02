# Code C++ et Python "Exemples de Design Patterns" 

## Objectifs

Ces exemples, basés sur du code C++ et Python , permettent de d'illuster les principaux "Design Patterns".

Ils sont tirés d'exemples trouvés sur internet,:
* Langages à Objets Avancés - Cours de programmation C++ https://www.irif.fr/~yunes/cours/cpp/
** Cours Design Pattern https://www.irif.fr/~yunes/cours/cpp/fiches/2017/125-DesignPatterns.pdf
** Lien YouTube: https://www.youtube.com/watch?v=C50geRSrLUo
* Martin Fowler: Refactoring: Improving the Design of Existing Code http://jaoo.dk/jaoo1999/schedule/MartinFowlerRefractoring.pdf


* Factory



## Pre-requis

Ces logiciels doivent avoir été installés et configurés (versions utilisées entre parenthèses)

- Linux. La plupart des linux courants (CentOs, Debian, Fedora ...) conviennent (CentOS 7)
- gcc (4.8.5)
- doxygen (1.8.13)

## Installation

Se placer sur un répertoire de travail

`$ git clone https://github.com/ExemplesDev/ExemplesDesignPatterns.git`

Lancer le Makefile
`$ make`

Ces exécutables devraient avoir été générés sous le répertoire build/ :

```
[user@localhost Calcul_Aires]$ ls -al build/
total 2520
drwxrwxr-x 2 user user    4096 nov.  28 18:35 .
drwxrwxr-x 6 user user    4096 nov.  28 18:34 ..

```

## Lancement du programme principal et des 2 tests unitaires

* Executer le programme principal: 
`$ /build/calcul_aires`
* Executer les tests unitaires
`$ ./build/test_Rectangle`
et `$ ./build/test_Triangle`
* Nettoyer les répertoires des binaires, fichiers objects et temporaires:
`$ make clean`

## Utilisation de Doxygen

* lancer les outils Qualité et sonarQube:
`$ make sonar`
* obtenir le tableau de bord sonarQube généré:
lancer un navigateur et aller sur cette adresse locale: http://localhost:9000/sonar/


## Description des répertoires et fichiers

### Répertoires principaux:

* <Nom du Design Pattern>
  * src/ : code source C++
    * cli/ (=command line interface): programme principal (main.cpp)
    * lib/ (=library) : classes constituant la bibliothèque FormesGeometriques.a (utilisée par le programme principal)
  * tests/ (=unit tests) : 
    * gtest-1.6.0/ : fichiers source du framework gtest (version 1.6.0), nécéssaire pour l'exécution des tests unitaires
    * unittests/ quelques tests unitaitres de démonstration

### Fichiers spécifiques:

* ./Doxygen : fichier de configuration de sonarQube


```
[user@localhost Calcul_Aires]$ tree -L 3
.

```
