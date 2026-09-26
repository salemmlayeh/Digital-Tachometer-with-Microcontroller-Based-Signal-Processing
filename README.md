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

4.images:
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/cf6f365b-3ca8-4a52-a7b3-4908adbe8325" />
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/ea7c6a40-49b9-4249-a823-d37efb61ca57" />
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/b1165b08-64fe-4a79-8fdb-ac80126c4cee" />
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/301ebf58-24be-4eda-b2da-06b57c99746f" />
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/d3252f13-89c3-4407-a9f0-ae7da24276d0" />
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/f2c2576c-c96c-4920-92a2-f0087c09f390" />
<img width="963" height="1280" alt="image" src="https://github.com/user-attachments/assets/b3d0058c-c6a3-47a8-a686-857c5b8bd20a" />



📂 Structure du Dépôt
/Firmware : Code source en C pour le microcontrôleur PIC.

/Hardware : Fichiers de conception Proteus (schémas et fichiers de routage).

/Docs : Fiches techniques et rapports de tests.
