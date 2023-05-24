#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // Variables pour stocker les choix du joueur et les caractéristiques des personnages
    char player_name[50];
    int player_level = 1;
    int player_health = 100;
    char player_weapon[20] = "Une épée";
    char player_armor[20] = "une armure en cuir";

    // Tableau pour stocker une liste d'objets trouvés par le joueur
    char found_items[5][50];
    int num_found_items = 0;

    // Boucle pour chercher des trésors dans l'environnement
    char search_result[5];
    printf("Voulez-vous chercher un trésor ? (oui/non) ");
    scanf("%s", search_result);

    if (strcmp(search_result, "oui") == 0) {
        bool treasure_found = true;  // Variable pour indiquer si un trésor a été trouvé
        //sprintf(found_items[num_found_items], "Trésor %d", i+1);
        num_found_items++;
        int rep;
        printf("Voulez-vous %s(1) ou %s(2) ? chosir 1 ou 2 : ", player_weapon, player_armor);
        scanf("%d", &rep);

        if (rep == 2) {
            printf("Mauvais choix\n");
        } else {
            printf("Excellent choix ! La meilleure défense, c'est l'attaque.\n");
        }
    } else {
        bool treasure_found = false;
        printf("C'est Excellent je garde tous pour moi.\n");
    }

    return 0;
}
