# WORST CODE EVER CHALLENGE Projet PDD : Pain Driven Development

## Challenge Nuit de l'Info 2024

Ce projet a été développé dans le cadre de la **Nuit de l'Info 2024**, un hackathon international se déroulant pendant toute une nuit. Le défi consistait à créer un code mettant en évidence les mauvaises pratiques de programmation pour sensibiliser les développeurs à l'importance des bonnes pratiques et de l'éthique dans le développement logiciel.
⚠️le fichier du défi est worst_code_ever.c ⚠️l'autre fichier c pour voir une partie des jeux dans le sfe mode 

### Description : 
Le défi: WORST CODE EVER
Il est important de mettre de la qualité et du coeur dans les développements. Les tendances de TDD, DDD, Craftman ship sont en vogue et la beauté du code est à son paroxysme. Mais ne faut-il pas avoir touché le fond pour mieux remonter ? Cette année CAPCOD vous propose non pas de simplement produire un code de qualité médiocre, mais que celui-ci soit un exemple, une muse, pour le PDD (Pain Driven Développement INSERER JEU DE MOT RIGOLO). Le rendu se fera sous la forme du repo git de votre choix dans votre langage préféré et vous motiverez vos anti-choix de qualité par une petite note accompagnante.

 

PS : nous aimons l’humour.

### Équipe : EPI Fraternité Sans Bannières

- **Ahmed Hmila**
  - Email : [ahmedhmiladev@gmail.com](mailto:ahmedhmiladev@gmail.com)

## Table des Matières

- Introduction
- Fonctionnalités
- Description des Fonctions
  - Jeux Intégrés
    - jouerDeminage()
    - jeuColore()
    - jeuAbsurdCleAPI()
    - blackjackMiniature()
    - jeuPoker()
  - Mauvaises Pratiques
    - mauvaiseFonction1()
    - fonctionThread()
    - triInefficace()
    - fonctionNonSecurisee()
    - fuiteRessource()
    - fonction2() et fonction3()
- Pain Driven Development (PDD)
- Importance des Bonnes Pratiques en Programmation
- Conclusion
- Avertissement

## Introduction

Ce projet illustre des exemples concrets de **Pain Driven Development (PDD)**, une méthode de développement logiciel qui met en avant les conséquences négatives des mauvaises pratiques de codage. L'objectif est de sensibiliser les développeurs aux dangers potentiels liés à une mauvaise écriture du code et de promouvoir une éthique solide en matière de développement logiciel.

Développé pendant la Nuit de l'Info 2024, ce projet répond au défi de démontrer, de manière pédagogique, pourquoi les bonnes pratiques sont essentielles dans le développement.

## Fonctionnalités

- **Jeux interactifs** : Une série de mini-jeux conçus pour frustrer l'utilisateur en appliquant des règles injustes.
- **Mauvaises pratiques de programmation** : Le code contient intentionnellement des erreurs courantes et des vulnérabilités pour illustrer les risques associés.
- **Mode sécurisé** : Un paramètre `-safe` permet d'exécuter le programme sans causer de dommages, idéal pour les démonstrations.
- **Sensibilisation** : Mise en lumière de l'importance des bonnes pratiques et de l'éthique en programmation.

## Description des Fonctions

### Jeux Intégrés

#### jouerDeminage()

- **Description** : Simule un jeu de démineur où toutes les cases sont des mines. Le joueur perd automatiquement une vie sans possibilité de gagner.
- **Illustration PDD** : Montre comment des règles injustes et une conception délibérément défavorable peuvent nuire à l'expérience utilisateur.

#### jeuColore()

- **Description** : Demande au joueur de choisir une couleur (rouge, vert, bleu) mais le pénalise quel que soit son choix.
- **Illustration PDD** : Met en évidence le manque de considération pour l'entrée utilisateur et l'impact d'une logique de jeu mal conçue.

#### jeuAbsurdCleAPI()

- **Description** : Le joueur doit entrer une clé API qui est exposée en clair dans le code source.
- **Illustration PDD** : Souligne les risques de sécurité liés à l'exposition de données sensibles et à la mauvaise gestion des informations confidentielles.

#### blackjackMiniature()

- **Description** : Un jeu de Blackjack tronqué où le joueur tire une carte impossible (par exemple, 23) et perd immédiatement.
- **Illustration PDD** : Démontre l'effet néfaste d'un gameplay irréaliste et frustrant.

#### jeuPoker()

- **Description** : Propose un jeu de poker où le joueur est inévitablement arrêté par la police, quelle que soit sa décision.
- **Illustration PDD** : Montre l'importance de conséquences logiques et équilibrées dans le développement de scénarios.

### Mauvaises Pratiques

#### mauvaiseFonction1()

- **Description** : Provoque un dépassement de tampon en copiant une chaîne trop longue dans un petit buffer.
- **Risques** : Peut conduire à des vulnérabilités exploitables (ex. exécution de code arbitraire).

#### fonctionThread()

- **Description** : Incrémente une variable globale depuis un thread sans protection contre les conditions de concurrence.
- **Risques** : Peut entraîner des comportements imprévisibles et des bugs difficiles à diagnostiquer.

#### triInefficace()

- **Description** : Effectue un tri avec un algorithme extrêmement inefficace en complexité temporelle O(n²).
- **Risques** : Gaspille les ressources et réduit les performances du programme.

#### fonctionNonSecurisee()

- **Description** : Utilise `gets()` pour lire l'entrée utilisateur et stocke les mots de passe en clair.
- **Risques** : `gets()` est une fonction dangereuse pouvant causer des dépassements de tampon. Le stockage de mots de passe en clair est une faille critique de sécurité.

#### fuiteRessource()

- **Description** : Ouvre un fichier sans jamais le fermer.
- **Risques** : Provoque des fuites de ressources, ce qui peut épuiser les descripteurs de fichiers disponibles et causer des plantages.

#### fonction2() et fonction3()

- **Description** : Fonctions vides ou inutiles.
- **Risques** : Alourdissent le code, le rendent moins lisible et plus difficile à maintenir.

## Pain Driven Development (PDD)

Le **Pain Driven Development** consiste à écrire du code délibérément mauvais pour illustrer les conséquences négatives des mauvaises pratiques. Cette approche vise à enseigner, par l'exemple contraire, l'importance des principes de développement sains.

Dans ce projet, le PDD est mis en œuvre pour :

- Sensibiliser aux risques de sécurité (ex. dépassements de tampon, divulgation de données sensibles).
- Montrer l'impact d'une mauvaise gestion des ressources.
- Démontre comment une mauvaise conception peut frustrer les utilisateurs.
- Souligner l'importance de la synchronisation dans les applications multithreadées.

## Importance des Bonnes Pratiques en Programmation

Adopter de bonnes pratiques de programmation est essentiel pour :

- **Sécurité** : Protéger les données et prévenir les vulnérabilités exploitables.
- **Fiabilité** : Assurer que le logiciel fonctionne correctement dans toutes les situations.
- **Maintenabilité** : Faciliter les futures modifications et la compréhension du code par d'autres développeurs.
- **Performance** : Optimiser l'utilisation des ressources pour un fonctionnement efficace.
- **Satisfaction Utilisateur** : Fournir une expérience utilisateur positive et éviter la frustration.

## Conclusion

Ce projet, réalisé lors de la Nuit de l'Info 2024, sert d'exemple pédagogique pour illustrer les dangers des mauvaises pratiques en programmation. En étudiant ce code, les développeurs peuvent mieux comprendre pourquoi il est crucial de suivre des normes élevées d'éthique et de qualité dans le développement logiciel.

## Avertissement

**Important** : Le code fourni dans ce projet est intentionnellement vulnérable et comporte de nombreuses mauvaises pratiques. Il ne doit **en aucun cas** être utilisé en production ou exécuté sur des systèmes réels, car il pourrait causer des dommages graves ou des pertes de données. Ce projet est destiné uniquement à des fins éducatives pour mettre en garde contre les conséquences des mauvaises pratiques de programmation.

---

**Contact**

- **Ahmed Hmila**
  - Email : [ahmedhmiladev@gmail.com](mailto:ahmedhmiladev@gmail.com)

---

**Remarque** : Il est essentiel pour les développeurs de toujours adhérer aux meilleures pratiques de programmation, de respecter les principes de sécurité et d'éthique, et de s'engager dans une amélioration continue de leurs compétences pour contribuer positivement à la communauté du développement logiciel.
