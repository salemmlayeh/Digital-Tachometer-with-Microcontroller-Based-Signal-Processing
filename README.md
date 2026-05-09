Conception et Réalisation d’un Tachymètre Numérique
Ce projet consiste en la conception complète d'un tachymètre numérique capable de mesurer la vitesse de rotation d'un moteur tout en détectant son sens de rotation. Il intègre un étage d'adaptation analogique, un micrologiciel embarqué et une carte électronique personnalisée.

📋 Caractéristiques Techniques
Détection du Sens de Rotation : Mise en œuvre d'un étage d'adaptation analogique spécifique pour identifier la direction.

Unité de Traitement : Utilisation d'un microcontrôleur PIC pour le calcul de la vitesse en temps réel.

Langage de Programmation : Firmware développé entièrement en C.

Conception Matérielle : Schématique et routage du PCB réalisés sous Proteus.

🛠️ Architecture du Système
1. Étage Analogique
L'étage d'entrée conditionne le signal provenant du capteur pour le rendre compatible avec les entrées numériques du microcontrôleur, tout en extrayant les informations de phase nécessaires à la détection du sens.

2. Firmware (Microcontrôleur PIC)
Le programme gère :

La capture d'impulsions via les interruptions.

Le calcul de la fréquence (tr/min).

La gestion de l'affichage pour l'utilisateur final.

3. Conception du PCB
La carte a été conçue pour être compacte et robuste. Les étapes incluaient :

Saisie du schéma sous ISIS (Proteus).

Routage des pistes sous ARES (Proteus).

Fabrication, perçage et soudure complète des composants.

📂 Structure du Dépôt
/Firmware : Code source en C pour le microcontrôleur PIC.

/Hardware : Fichiers de conception Proteus (schémas et fichiers de routage).

/Docs : Fiches techniques et rapports de tests.
