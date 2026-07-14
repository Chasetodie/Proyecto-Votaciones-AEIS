#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <ctype.h>

#define UP 72
#define DOWN 80
#define ENTER 13

const char *usr[] = {"admin"};
const char *pass[] = {"1234"};

void gotoxy(int x,int y)    
{
    printf("%c[%d;%df",0x1B,y,x);
}
void crearImagen(int imagen)
{
    switch (imagen) {
        case 0:
            gotoxy(70,5);
            printf("           BBBBBBBBBBB        ");
            gotoxy(70,6);
            printf("         BBBBBBBBBBBBBBB      ");
            gotoxy(70,7);
            printf("        BBBBBBBBBBBBBBBBB     ");
            gotoxy(70,8);
            printf("       BBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,9);
            printf("       BBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,10);
            printf("       BBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,11);
            printf("       BBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,12);
            printf("       BBBBBBBBBBBBBBBBBB     ");
            gotoxy(70,13);
            printf("        BBBBBBBBBBBBBBBB      ");
            gotoxy(70,14);
            printf("         BBBBBBBBBBBBBB       ");
            gotoxy(70,15);
            printf("    BBBB   BBBBBBBBBBBBBB     ");
            gotoxy(70,16);
            printf("  BBB  BBB  BBBBBBBBBBBBBBB   ");
            gotoxy(70,17);
            printf(" BB      BB BBBBBBBBBBBBBBBB  ");
            gotoxy(70,18);
            printf("  BBB  BBB  BBBBBBBBBBBBBBBBB ");
            gotoxy(70,19);
            printf("    BBBBB   BBBBBBBBBBBBBBBBB ");
            gotoxy(70,20);
            printf("          BBBBBBBBBBBBBBBBBBB ");
            gotoxy(70,21);
            printf("   BBBBBBBBBBBBBBBBBBBBBBBBBB ");
            gotoxy(70,22);
            printf("   BBBBBBBBBBBBBBBBBBBBBBBBBB ");
            gotoxy(70,23);
            printf("   BBBBBBBBBBBBBBBBBBBBBBBBBB ");
            
            break;
        case 1:
            gotoxy(50,7);
            printf("                BBBBBB                                     ");
            gotoxy(50,8);
            printf("             BBBBBBBBBBBB                                   ");
            gotoxy(50,9);
            printf("            BBBBBBBBBBBBBBB                                 ");
            gotoxy(50,10);
            printf("          BBBBBB BBBBBBB  BB                                ");
            gotoxy(50,11);
            printf("          BBBBBBBB BBBBBBB BBBBBBBBBBBBBBBBBBBBBB           ");
            gotoxy(50,12);
            printf("         BBBBB  BBBBBBBBBBB BBBBBBBBBBBBBBBBBBBBBBB         ");
            gotoxy(50,13);
            printf("         BBBB     BBBBBBBBB BBBBBBBBB    BBB  BBB BB        ");
            gotoxy(50,14);
            printf("         BBBBB   BBBBBBBBBB BBBBB    BBBB   BBB  BBB        ");
            gotoxy(50,15);
            printf("          BB BBBBBBBBBBBBB BBBBBBBBBBBBBBBBBBBBBBBB         ");
            gotoxy(50,16);
            printf("          BBB  BBBBBBBBBBBBBBB   BBBB    BBB  BBBB          ");
            gotoxy(50,17);
            printf("            BBBB BBBBBBBBBB                                 ");
            gotoxy(50,18);
            printf("             BBBBBBBBBBBB                                   ");
            gotoxy(50,19);
            printf("                BBBBBBB");
            
            break;
        case 2:
            gotoxy(70,5);
            printf("                BBBBBBBBBBBBBBBB   ");
            gotoxy(70,6);
            printf("               BB              BBB  ");
            gotoxy(70,7);
            printf("                BBBBBBBBBBBBBB  BB ");
            gotoxy(70,8);
            printf("                             BB  BB");
            gotoxy(70,9);
            printf("                              B  BB");
            gotoxy(70,10);
            printf("                  BB          B  BB");
            gotoxy(70,11);
            printf("                 BBBBB        B  BB");
            gotoxy(70,12);
            printf("                 BB  BBB      B  BB");
            gotoxy(70,13);
            printf("  BBBBBBBBBBBBBBBBBB   BBB    B  BB");
            gotoxy(70,14);
            printf("  BB                     BB   B  BB");
            gotoxy(70,15);
            printf("  BBBBBBBBBBBBBBBBBB   BBB    B  BB");
            gotoxy(70,16);
            printf("                 BB   BBB     B  BB");
            gotoxy(70,17);
            printf("                 BBBBB        B  BB");
            gotoxy(70,18);
            printf("                  BB          B  BB");
            gotoxy(70,19);
            printf("                              B  BB");
            gotoxy(70,20);
            printf("                             BB  BB ");
            gotoxy(70,21);
            printf("                BBBBBBBBBBBBBB  BB ");
            gotoxy(70,22);
            printf("               BB             BBB  ");
            gotoxy(70,23);
            printf("                BBBBBBBBBBBBBBB    ");
            
            break;
        case 3:
            gotoxy(70,4);  printf("   BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB   ");
            gotoxy(70,5);  printf(" BB                                BB ");
            gotoxy(70,6);  printf(" B              BBBBBBB             B ");
            gotoxy(70,7);  printf(" B              BBBBBBB             B ");
            gotoxy(70,8);  printf(" B              BBBBBBB             B ");
            gotoxy(70,9);  printf(" B              BBBBBBB             B ");
            gotoxy(70,10); printf(" B              BBBBBBB             B ");
            gotoxy(70,11); printf(" B              BBBBBBB             B ");
            gotoxy(70,12); printf(" B  BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB  B ");
            gotoxy(70,13); printf(" B  BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB  B ");
            gotoxy(70,14); printf(" B  BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB  B ");
            gotoxy(70,15); printf(" B              BBBBBBB             B ");
            gotoxy(70,16); printf(" B              BBBBBBB             B ");
            gotoxy(70,17); printf(" B              BBBBBBB             B ");
            gotoxy(70,18); printf(" B              BBBBBBB             B ");
            gotoxy(70,19); printf(" B              BBBBBBB             B ");
            gotoxy(70,20); printf(" B              BBBBBBB             B ");
            gotoxy(70,21); printf(" BB                                BB ");
            gotoxy(70,22); printf("   BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB   ");
            break;

        case 4:
            gotoxy(70,4);  printf("           BBBBBBBBBBBBBBBB           ");
            gotoxy(70,5);  printf("        BBB                BBB        ");
            gotoxy(70,6);  printf("      BB                      BB      ");
            gotoxy(70,7);  printf("     B                          B     ");
            gotoxy(70,8);  printf("    B          BB                B    ");
            gotoxy(70,9);  printf("   B           BBBB               B   ");
            gotoxy(70,10); printf("   B           BBBBBB             B   ");
            gotoxy(70,11); printf("  B            BBBBBBBB            B  ");
            gotoxy(70,12); printf("  B            BBBBBBBBBB          B  ");
            gotoxy(70,13); printf("  B            BBBBBBBB            B  ");
            gotoxy(70,14); printf("   B           BBBBBB             B   ");
            gotoxy(70,15); printf("   B           BBBB               B   ");
            gotoxy(70,16); printf("    B          BB                B    ");
            gotoxy(70,17); printf("     B                          B     ");
            gotoxy(70,18); printf("      BB                      BB      ");
            gotoxy(70,19); printf("        BBB                BBB        ");
            gotoxy(70,20); printf("           BBBBBBBBBBBBBBBB           ");
            break;

        case 5:
            gotoxy(70,4);  printf("            BBBBBBBBBBBBBBBBBB            ");
            gotoxy(70,5);  printf("    BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,6);  printf("    BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,7);  printf("    BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB    ");
            gotoxy(70,8);  printf("    B                                B    ");
            gotoxy(70,9);  printf("    B                                B    ");
            gotoxy(70,10); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,11); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,12); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,13); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,14); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,15); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,16); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,17); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,18); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,19); printf("    B    BBBBBB   BBBBBB   BBBBBB    B    ");
            gotoxy(70,20); printf("    B                                B    ");
            gotoxy(70,21); printf("    B                                B    ");
            gotoxy(70,22); printf("     BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB     ");
            break;

        case 6:
            gotoxy(70,5);  printf("                             ");
            gotoxy(70,6);  printf("                             ");
            gotoxy(70,7);  printf("          BBBB               ");
            gotoxy(70,8);  printf("         B    B              ");
            gotoxy(70,9);  printf("         B    B              ");
            gotoxy(70,10); printf("          BBBB               ");
            gotoxy(70,11); printf("                             ");
            gotoxy(70,12); printf("        BBBBBBBB             ");
            gotoxy(70,13); printf("        B      B             ");
            gotoxy(70,14); printf("        B      B             ");
            gotoxy(70,15); printf("        B      B             ");
            gotoxy(70,16); printf("        BBBBBBBB     BBBBBB  ");
            gotoxy(70,17); printf("                   BB    BBBB");
            gotoxy(70,18); printf("                   B   BBB  B");
            gotoxy(70,19); printf("                   B  BBB   B");
            gotoxy(70,20); printf("                   B BBB    B");
            gotoxy(70,21); printf("                   BBBB    BB");
            gotoxy(70,22); printf("                     BBBBBB  ");
            break;

        case 7:
            gotoxy(70,4);  printf("           BBBBBBBBBBBBBBBB           ");
            gotoxy(70,5);  printf("        BBB                BBB        ");
            gotoxy(70,6);  printf("      BB                      BB      ");
            gotoxy(70,7);  printf("     B             B            B     ");
            gotoxy(70,8);  printf("    B              B             B    ");
            gotoxy(70,9);  printf("   B               B              B   ");
            gotoxy(70,10); printf("   B               B              B   ");
            gotoxy(70,11); printf("  B                B               B  ");
            gotoxy(70,12); printf("  B                BBBBBBBBB       B  ");
            gotoxy(70,13); printf("  B                                B  ");
            gotoxy(70,14); printf("   B                              B   ");
            gotoxy(70,15); printf("   B                              B   ");
            gotoxy(70,16); printf("    B                            B    ");
            gotoxy(70,17); printf("     B                          B     ");
            gotoxy(70,18); printf("      BB                      BB      ");
            gotoxy(70,19); printf("        BBB                BBB        ");
            gotoxy(70,20); printf("           BBBBBBBBBBBBBBBB           ");
            gotoxy(70,21); printf("               BB    BB               ");
            gotoxy(70,22); printf("               BB    BB               ");
            break;

        case 8:
            gotoxy(70,4);  printf("        BBBBBBBBBBBBBBBBBBBB          ");
            gotoxy(70,5);  printf("       B                    B         ");
            gotoxy(70,6);  printf("  BBB  B         BB         B  BBB    ");
            gotoxy(70,7);  printf(" B   B B        BBB         B B   B   ");
            gotoxy(70,8);  printf(" B    BB         BB         BB    B   ");
            gotoxy(70,9);  printf(" B     B         BB         B     B   ");
            gotoxy(70,10); printf(" B     B         BB         B     B   ");
            gotoxy(70,11); printf(" B    BB         BB         BB    B   ");
            gotoxy(70,12); printf("  BBBB  B      BBBBBBB      B  BBBB    ");
            gotoxy(70,13); printf("         BB                BB         ");
            gotoxy(70,14); printf("           BBBBBBBBBBBBBBBB           ");
            gotoxy(70,15); printf("               BBBBBBB                ");
            gotoxy(70,16); printf("               BBBBBBB                ");
            gotoxy(70,17); printf("               BBBBBBB                ");
            gotoxy(70,18); printf("            BBBBBBBBBBBBB             ");
            gotoxy(70,19); printf("           B             B            ");
            gotoxy(70,20); printf("          BBBBBBBBBBBBBBBBB           ");
            gotoxy(70,21); printf("         B                 B          ");
            gotoxy(70,22); printf("         BBBBBBBBBBBBBBBBBBB          ");
            break;
    }
}

void crearBorde(int x1, int y1, int x2, int y2)
{
    int i;
    for (i = x1; i <= x2; i++){
        gotoxy(i, y1); printf("*");
        gotoxy(i, y2); printf("*");
    }
    for (i = y1; i <= y2; i++){
        gotoxy(x1, i); printf("*");
        gotoxy(x2, i); printf("*");
    }
}

int crearMenu(const char* tituloMenu, const char *opcionesMenu[], int cantOpc, int numMenu)
{
    int opcSelec = 1, teclaPresionada, flagSalida = 1;
    do
    {
        system("cls");
        crearBorde(2, 1, 118, 25);
        gotoxy(5, 16 + opcSelec);
        printf("==>");
        gotoxy(15, 4);
        printf("%s", tituloMenu);

        for(int i = 0; i < cantOpc; i++)
        {
            gotoxy(10, 17 + i);
            printf("%d) %s", i + 1, opcionesMenu[i]);

            switch(numMenu) {
                case 0:
                    switch (opcSelec) {
                        case 1:
                            crearImagen(0);
                            break;
                        case 2:
                            crearImagen(1);
                            break;
                        case 3:
                            crearImagen(2);
                            break;
                    }
                    break;
                case 1:
                    switch (opcSelec) {
                        case 1:
                            crearImagen(3);
                            break;
                        case 2:
                            crearImagen(4);
                            break;
                        case 3:
                            crearImagen(5);
                            break;
                        case 4:
                            crearImagen(6);
                            break;
                        case 5:
                            crearImagen(7);
                            break;
                        case 6:
                            crearImagen(8);
                            break;
                        case 7:
                            crearImagen(2);
                            break;
                    }
                    break;
                default:
                    break;
            }
        }

        do {
            teclaPresionada = getch();
        } while (teclaPresionada != UP && teclaPresionada != DOWN && teclaPresionada != ENTER);
        
        switch(teclaPresionada)
        {
            case UP:
                opcSelec--;
                if(opcSelec < 1)
                    opcSelec = cantOpc;
            
                break;
            case DOWN:
                opcSelec++;
                if(opcSelec > cantOpc)
                    opcSelec=1;
                break;
            case ENTER:
                flagSalida = 0;
                
                break;
        }
    } while (flagSalida);
    
    return opcSelec;
}

int comprobarID(char idUser[100]) {  
    int anioEleccion, cantidadVotos, numeroCandidatos, estadoEleccion;
    char codigoEleccion[20];
    FILE *archivoInfo = fopen("ElectionInfo.txt", "r");

    if (archivoInfo == NULL) {
        crearBorde(2,1,118,25);
        gotoxy(44, 12);	
        printf("NO SE HA GENERADO UNA VOTACION");
        sleep(2);
        return 0;
    }

    fscanf(archivoInfo, "%d", &anioEleccion);
    fscanf(archivoInfo, "%s", codigoEleccion);
    fscanf(archivoInfo, "%d", &cantidadVotos);
    fscanf(archivoInfo, "%d", &numeroCandidatos);
    fscanf(archivoInfo, "%d", &estadoEleccion);
    fclose(archivoInfo);

    // Verifica si la ID es valida
    int longitudCodigo = strlen(codigoEleccion);
    int longitudEsperada = 4 + longitudCodigo + 5;
    int idValida = 1;

    if ((int)strlen(idUser) != longitudEsperada) {
        idValida = 0;
    } else {
        char anioTexto[5];
        strncpy(anioTexto, idUser, 4);
        anioTexto[4] = '\0';

        char codigoTexto[20];
        strncpy(codigoTexto, idUser + 4, longitudCodigo);
        codigoTexto[longitudCodigo] = '\0';

        char idTexto[6];
        strncpy(idTexto, idUser + 4 + longitudCodigo, 5);
        idTexto[5] = '\0';

        int anioIngresado = atoi(anioTexto);
        int idIngresado = atoi(idTexto);

        if (anioIngresado != anioEleccion) {
            idValida = 0;
        } else if (strcmp(codigoTexto, codigoEleccion) != 0) {
            idValida = 0;
        } else if (idIngresado < 1 || idIngresado > cantidadVotos) {
            idValida = 0;
        }
    }

    return idValida;
}

int comprobarVotacionActiva() {
    FILE *archivo = fopen("ElectionInfo.txt", "r");
    char linea[50];
    int flag = -1;

    if (archivo == NULL) {
        return -1;
    }

    for (int i = 0; i < 4; i++) {
        fgets(linea, sizeof(linea), archivo);
    }

    fscanf(archivo, "%d", &flag);
    fclose(archivo);

    return flag;
}

int contarCandidatos() {
    FILE *archivo = fopen("ElectionInfo.txt", "r");
    char linea[50];
    int candidatos = 0;

    if (archivo == NULL) {
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        fgets(linea, sizeof(linea), archivo);
    }

    fscanf(archivo, "%d", &candidatos);
    fclose(archivo);

    return candidatos;
}

void crearVotacion() {
    if (comprobarVotacionActiva() == 1) {
        crearBorde(2, 1, 118, 25);
        gotoxy(26, 12);	
        printf("YA HAY UNA VOTACION ACTIVA, TERMINE LA VOTACION Y VUELVA A INTENTARLO");               
        sleep(3);
        return;
    }

    int anio, cantidadVotos, numeroCandidatos, i = 0, j = 0;
    char codigo[20], nombreCandidato[100], nombreArchivo[100];
    FILE *archivo;

    crearBorde(2, 1, 118, 25);
    gotoxy(50, 3);
    printf("CREACION DE NUEVA ELECCION");

    gotoxy(5, 6);
    printf("INGRESE EL A%cO DE LA ELECCION: ", 165);
    scanf("%d", &anio);

    gotoxy(5, 8);
    printf("INGRESE EL C%cDIGO DE LA ELECCI%cN: ", 224, 224);
    scanf("%s", codigo);

    gotoxy(5, 10);
    printf("INGRESE LA CANTIDAD DE VOTOS: ");
    scanf("%d", &cantidadVotos);

    gotoxy(5, 12);
    printf("INGRESE EL N%cMERO DE CANDIDATOS: ", 233);
    scanf("%d", &numeroCandidatos);

    i = numeroCandidatos;

    do {
        j++; 

        system("cls");
        crearBorde(2, 1, 118, 25);
        gotoxy(50, 3);
        printf("CREACION DE NUEVA ELECCION");
        gotoxy(5, 5);
        printf("INGRESE EL NOMBRE DEL CANDIDATO N%c%d: ", 167, j);
        scanf("%s", nombreCandidato);
                   
        sprintf(nombreArchivo, "Candidato%d.txt", i);
        archivo = fopen(nombreArchivo, "w");
                    
        if (archivo == NULL) {
            printf("Error al crear el archivo de candidatos.\n");
            return;
        }

        fprintf(archivo, "%d\n", 0); // Inicializar el número de votos en 0
        fprintf(archivo, "%s\n", nombreCandidato);
        fclose(archivo);

        i--;

    } while(i > 0);

    archivo = fopen("ElectionInfo.txt", "w");

    if (archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return;
    }

    fprintf(archivo, "%d\n", anio);
    fprintf(archivo, "%s\n", codigo);
    fprintf(archivo, "%d\n", cantidadVotos);
    fprintf(archivo, "%d\n", numeroCandidatos);
    fprintf(archivo, "1");
    fclose(archivo);

    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(40, 12);	
    printf("CREANDO ARCHIVO DE LOS CANDIDATOS...");               
    sleep(2);
    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(40, 12);	
    printf("GUARDANDO INFORMACION DE LA ELECCION...");               
    sleep(2);
    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(40, 12);	
    printf("EL REGISTRO HA SIDO CREADO CON EXITO!");     
    sleep(2);
}

int cambiarEstadoVotacion(int nuevoEstado) {
    FILE *archivoNuevo = fopen("ElectionInfo.txt", "r+");
    char linea[50];

    if (archivoNuevo == NULL) {
        return -1;
    }

    for (int i = 0; i < 4; i++) {
        fgets(linea, sizeof(linea), archivoNuevo);
    }

    fseek(archivoNuevo, 0, SEEK_CUR);

    // Sobrescribimos el último número
    fprintf(archivoNuevo, "%d", nuevoEstado);
    fclose(archivoNuevo);

    return 1;
}

int contarVotosCreados() {
    FILE *archivo = fopen("ElectionInfo.txt", "r");
    char linea[50];
    int cantVotos = 0;

    if (archivo == NULL) {
        return 0;
    }

    for (int i = 0; i < 2; i++) {
        fgets(linea, sizeof(linea), archivo);
    }

    fscanf(archivo, "%d", &cantVotos);
    fclose(archivo);
    return cantVotos;
}

int sumarVotosRecursivo(int candidatoActual, int numeroCandidatos) {
    if (candidatoActual > numeroCandidatos) {
        return 0; // caso base: ya no hay mas candidatos
    }

    char nombreArchivo[100];
    sprintf(nombreArchivo, "Candidato%d.txt", candidatoActual);
    FILE *archivo = fopen(nombreArchivo, "r");

    int votos = 0;
    if (archivo != NULL) {
        fscanf(archivo, "%d", &votos);
        fclose(archivo);
    }

    return votos + sumarVotosRecursivo(candidatoActual + 1, numeroCandidatos);
}

void mostrarResultados() {
    crearBorde(2,1,118,25);

    gotoxy(40, 12);	
    printf("CONTANDO VOTOS, POR FAVOR ESPERE...");               
    sleep(2);
    system("cls");
  
    FILE *archivo = fopen("ElectionInfo.txt", "r");
    char linea[50];
    int numeroCandidatos, votosGanador = 0, votosTotales = 0, numVotos = contarVotosCreados(), i = 1;
    float porcentajeVotos = 0;

    char nombresGanadores[50][100];
    int cantidadGanadores = 0;

    if (archivo == NULL) {
        crearBorde(2,1,118,25);
        gotoxy(22, 12);	
        printf("ERROR CONTANDO VOTOS, VUELVA A INTENTAR O VERIFIQUE SI HAY UNA VOTACION CREADA");               
        sleep(2);
        return;
    }

    for (int i = 0; i < 3; i++) {
        fgets(linea, sizeof(linea), archivo);
    }

    fscanf(archivo, "%d", &numeroCandidatos);
    fclose(archivo);

    crearBorde(2,1,118,25);
    gotoxy (45,3);	
    printf("RESULTADOS DE LA VOTACION!");                 

    for (i = 1; i <= numeroCandidatos; i++) {
        char nombreArchivo[100];
        sprintf(nombreArchivo, "Candidato%d.txt", i);
        archivo = fopen(nombreArchivo, "r");

        if (archivo == NULL) {
//            printf("Error al abrir el archivo del candidato %d.\n", i);
            continue;
        }

        int votos;
        char nombreCandidato[100];

        fscanf(archivo, "%d", &votos);
        fgets(nombreCandidato, sizeof(nombreCandidato), archivo); // Leer el nombre del candidato
        fscanf(archivo, "%s", nombreCandidato); // Leer el nombre del candidato hasta el salto de línea
        fclose(archivo);

        gotoxy(8, 3 + (i * 2));
        printf("Candidato %d: %s - Votos: %d", i, nombreCandidato, votos);

        if (votosGanador < votos) {
            votosGanador = votos;
            cantidadGanadores = 0;
            strcpy(nombresGanadores[cantidadGanadores], nombreCandidato);
            cantidadGanadores++;
        } else if (votos == votosGanador && votos > 0) {
            strcpy(nombresGanadores[cantidadGanadores], nombreCandidato);
            cantidadGanadores++;
        }
    }

    votosTotales = sumarVotosRecursivo(1, numeroCandidatos);

    for (int g = 0; g < cantidadGanadores; g++) {
        for (int j = 0; j < strlen(nombresGanadores[g]); j++) {
            nombresGanadores[g][j] = toupper(nombresGanadores[g][j]);
        }
    }

    if (votosTotales <= 0) {
        system("cls");
        crearBorde(2,1,118,25);
        gotoxy(30, 12);	
        printf("NO PUEDE VER LOS RESULTADOS, AUN NO HAY VOTOS REGISTRADOS");               
        sleep(2);
        return;        
    } 

    porcentajeVotos = ((float)votosTotales / numVotos) * 100;

    if (cantidadGanadores == 1) {
        gotoxy(40, (i * 2) + cantidadGanadores + 2);
        printf("EL GANADOR ES: %s CON %d VOTOS!!.", nombresGanadores[0], votosGanador);

        gotoxy(8, (i * 2) + cantidadGanadores + 4);
        printf("Porcentaje de votos emitidos: %.2f%%", porcentajeVotos);

        if (comprobarVotacionActiva() == 1) {
            cambiarEstadoVotacion(0); // Cambiar el estado de la votación a inactiva
            gotoxy(8, (i * 2) + cantidadGanadores + 6);
            printf("Aviso: La votacion ha sido cerrada.");
        } else {
            gotoxy(8, (i * 2) + cantidadGanadores + 6);
            printf("Aviso: La votacion ya ha sido cerrada. Puede reactivarla en cualquier momento, o crear una nueva.");
        }
        gotoxy(8, (i * 2) + cantidadGanadores + 8);
        system("pause");
    } else {
        gotoxy(30, (i * 2) + 3);
        printf("HAY UN EMPATE ENTRE %d CANDIDATOS CON %d VOTOS CADA UNO", cantidadGanadores, votosGanador);

        gotoxy(8, (i * 2) + 5);
        printf("Porcentaje de votos emitidos: %.2f%%", porcentajeVotos);

        if (comprobarVotacionActiva() == 1) {
            cambiarEstadoVotacion(0); // Cambiar el estado de la votación a inactiva
            gotoxy(8, (i * 2) + 7);
            printf("Aviso: La votacion ha sido cerrada.");
        } else {
            gotoxy(8, (i * 2) + 7);
            printf("Aviso: La votacion ya ha sido cerrada. Puede reactivarla en cualquier momento, o crear una nueva.");
        }
        gotoxy(8, (i * 2) + 9);
        system("pause");
    }
}

void verificarEstadoVotacion() {
    crearBorde(2,1,118,25);

    gotoxy(40, 12);	
    printf("VERIFICANDO ESTADO, POR FAVOR ESPERE...");               
    sleep(2);
    system("cls");
  
    FILE *archivo = fopen("ElectionInfo.txt", "r");
    char linea[50];
    int numeroCandidatos = 0, votosTotales = 0, numVotos = contarVotosCreados();

    if (archivo == NULL) {
        crearBorde(2,1,118,25);
        gotoxy(20, 12);	
        printf("ERROR VERIFICANDO ESTADO, VUELVA A INTENTAR O VERIFIQUE SI HAY UNA VOTACION CREADA");               
        sleep(2);
        return;
    }

    for (int i = 0; i < 3; i++) {
        fgets(linea, sizeof(linea), archivo);
    }

    fscanf(archivo, "%d", &numeroCandidatos);
    fclose(archivo);

    crearBorde(2,1,118,25);
    gotoxy (45,3);	
    printf("ESTADO DE LA VOTACION!");                 

    votosTotales = sumarVotosRecursivo(1, numeroCandidatos);

    gotoxy(40, (numeroCandidatos * 2) + numeroCandidatos);
    printf("LA VOTACION SE ENCUENTRA %s.", comprobarVotacionActiva() == 1 ? "ACTIVA" : "INACTIVA");
    gotoxy(40, (numeroCandidatos * 2) + numeroCandidatos + 7);
    printf("SE HAN EMERGIDO %d / %d DE VOTOS!", votosTotales, numVotos);
    gotoxy(8, (numeroCandidatos * 2) + numeroCandidatos + 13);
    system("pause");
}

void continuarVotacion() {
    crearBorde(2,1,118,25);
    gotoxy(44, 12);	

    if (comprobarVotacionActiva() == 1) {
        printf("LA VOTACION YA ESTA ACTIVA");
    } else if (comprobarVotacionActiva() == -1) {
        printf("NO SE HA GENERADO UNA VOTACION");   
    } else {
        cambiarEstadoVotacion(1); // Cambiar el estado de la votación a activa
        printf("LA VOTACION HA SIDO REANUDADA");
    }
    sleep(2);
}

// Busca una ID para banerla
int quitarVotoDeId(char *idBuscada, int numeroCandidatos) {
    int encontrado = 0;

    for (int i = 1; i <= numeroCandidatos; i++) {
        char nombreArchivo[100], nombreTemporal[100];
        char nombreCandidato[100];
        char idsGuardadas[500][100];
        int votos, cantidadIds = 0;

        sprintf(nombreArchivo, "Candidato%d.txt", i);
        sprintf(nombreTemporal, "Candidato%dTemp.txt", i);

        FILE *original = fopen(nombreArchivo, "r");

        if (original == NULL) {
            continue;
        }

        fscanf(original, "%d", &votos);
        fscanf(original, "%s", nombreCandidato);

        // Guarda todas las IDs de este archivo en el arreglo
        while (fscanf(original, "%s", idsGuardadas[cantidadIds]) == 1) {
            cantidadIds++;
        }
        fclose(original);

        // Cuenta cuantas veces aparece la ID repetida en el arreglo
        int vecesEncontrada = 0;
        for (int j = 0; j < cantidadIds; j++) {
            if (strcmp(idsGuardadas[j], idBuscada) == 0) {
                vecesEncontrada++;
            }
        }

        if (vecesEncontrada > 0) {
            // Resta un voto por cada repeticion de la ID
            votos -= vecesEncontrada; 

            FILE *temporal = fopen(nombreTemporal, "w");
            fprintf(temporal, "%d\n", votos);
            fprintf(temporal, "%s\n", nombreCandidato);

            // Vuelve a escribir todas las IDs menos todas las repeticiones de la que se baneo
            for (int j = 0; j < cantidadIds; j++) {
                if (strcmp(idsGuardadas[j], idBuscada) != 0) {
                    fprintf(temporal, "%s\n", idsGuardadas[j]);
                }
            }

            fclose(temporal);

            remove(nombreArchivo);
            rename(nombreTemporal, nombreArchivo);

            encontrado = 1;
        }
    }

    return encontrado;
}

 // Función que permite borrar el voto de un estudiante
void borrarVoto() {
    if (comprobarVotacionActiva() == 0) {
        crearBorde(2, 1, 118, 25);
        gotoxy(24, 12);	
        printf("NO HAY VOTACIONES ACTIVAS, HABILITE LA VOTACION Y VUELVA A INTENTARLO");               
        sleep(2);
        return;
    }

    char idBuscada[100];
    int numeroCandidatos;
    char linea[50];
    int encontrado = 0;

    FILE *archivoInfo = fopen("ElectionInfo.txt", "r");

    if (archivoInfo == NULL) {
        crearBorde(2,1,118,25);
        gotoxy(44, 12);	
        printf("NO SE HA GENERADO UNA VOTACION");
        sleep(2);
        return;
    }

    for (int i = 0; i < 3; i++) {
        fgets(linea, sizeof(linea), archivoInfo);
    }
    fscanf(archivoInfo, "%d", &numeroCandidatos);
    fclose(archivoInfo);

    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(42, 3);
    printf("INGRESE LOS DATOS DEL VOTO A BORRAR");
    gotoxy(82, 23);
    printf("0 PARA VOLVER AL MENU PRINCIPAL");

    gotoxy(5, 6);
    printf("INGRESE LA ID DEL ESTUDIANTE: ");
    scanf("%s", idBuscada);

    if (strcmp(idBuscada, "0") == 0) {
        return;
    }

    if (!comprobarID(idBuscada)) {
        system("cls");
        crearBorde(2,1,118,25);
        gotoxy(41, 12);	
        printf("ID INVALIDA. INGRESE UNA ID VALIDA!");
        sleep(2);
        // Vuelve a pedir otra ID
        borrarVoto();
    }

    for (int i = 1; i <= numeroCandidatos; i++) {
        char nombreArchivo[100], nombreTemporal[100];
        char nombreCandidato[100];
        char idsGuardadas[500][100];
        int votos, cantidadIds = 0;

        sprintf(nombreArchivo, "Candidato%d.txt", i);
        sprintf(nombreTemporal, "Candidato%dTemp.txt", i);

        FILE *original = fopen(nombreArchivo, "r");

        if (original == NULL) {
            continue;
        }

        fscanf(original, "%d", &votos);
        fscanf(original, "%s", nombreCandidato);

        // Guarda todas las IDs de este archivo en el arreglo
        while (fscanf(original, "%s", idsGuardadas[cantidadIds]) == 1) {
            cantidadIds++;
        }
        fclose(original);

        // Busca la ID dentro del arreglo
        int posicionEncontrada = -1;
        for (int j = 0; j < cantidadIds; j++) {
            if (strcmp(idsGuardadas[j], idBuscada) == 0) {
                posicionEncontrada = j;
                break;
            }
        }

        if (posicionEncontrada != -1) {
            // Resta el voto que se elimina
            votos--; 

            FILE *temporal = fopen(nombreTemporal, "w");
            fprintf(temporal, "%d\n", votos);
            fprintf(temporal, "%s\n", nombreCandidato);

            // Vuelve a escribir todas las IDs, menos la que se elimino
            for (int j = 0; j < cantidadIds; j++) {
                if (j != posicionEncontrada) {
                    fprintf(temporal, "%s\n", idsGuardadas[j]);
                }
            }

            fclose(temporal);

            remove(nombreArchivo);
            rename(nombreTemporal, nombreArchivo);

            encontrado = 1;
            
            system("cls");
            crearBorde(2,1,118,25);
            gotoxy(38, 12);	
            printf("VOTO DE %s ELIMINADO CORRECTAMENTE", idBuscada);
            sleep(2);           
            borrarVoto();
        }
    }

    if (!encontrado) {
        system("cls");
        crearBorde(2,1,118,25);
        gotoxy(43, 12);	
        printf("ESA ID NO HA EMITIDO NINGUN VOTO");               
        sleep(2);
        // Pide otra ID
        borrarVoto(); 
    }
}

int verificarBaneo(char *idBuscada) {
    FILE *archivo = fopen("Baneados.txt", "r");
    char idGuardada[100];

    if (archivo == NULL) {
        return 0; // Todavia no se ha baneado a nadie
    }

    while (fscanf(archivo, "%s", idGuardada) == 1) {
        if (strcmp(idGuardada, idBuscada) == 0) {
            fclose(archivo);
            return 1;
        }
    }

    fclose(archivo);
    return 0;
}

void banearUsuario() {
    if (comprobarVotacionActiva() == 0) {
        crearBorde(2, 1, 118, 25);
        gotoxy(24, 12);	
        printf("NO HAY VOTACIONES ACTIVAS, HABILITE LA VOTACION Y VUELVA A INTENTARLO");               
        sleep(2);
        return;
    }

    char idBanear[100];
    FILE *archivoInfo = fopen("ElectionInfo.txt", "r");

    if (archivoInfo == NULL) {
        crearBorde(2,1,118,25);
        gotoxy(44, 12);	
        printf("NO SE HA GENERADO UNA VOTACION");
        sleep(2);
        return;
    }

    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(42, 3);
    printf("INGRESE LOS DATOS DEL VOTO A BORRAR");
    gotoxy(82, 23);
    printf("0 PARA VOLVER AL MENU PRINCIPAL");

    gotoxy(5, 6);
    printf("INGRESE LA ID QUE DESEA BANEAR: ");
    scanf("%s", idBanear);

    if (strcmp(idBanear, "0") == 0) {
        return;
    }

    if (!comprobarID(idBanear)) {
        system("cls");
        crearBorde(2,1,118,25);
        gotoxy(41, 12);	
        printf("ID INVALIDA. INGRESE UNA ID VALIDA!");
        sleep(2);
        // Vuelve a pedir otra ID
        banearUsuario();
    }

    // Se borran los votos de la ID baneada en caso de haber votado
    int seLimpiaronVotos = quitarVotoDeId(idBanear, contarCandidatos());

    if (verificarBaneo(idBanear)) {
        system("cls");
        crearBorde(2,1,118,25);
        if (seLimpiaronVotos) {
            gotoxy(28, 12);	
            printf("ESA ID YA SE ENCONTRABA BANEADA. SE ELIMINARON LOS VOTOS QUE TENIA");
        } else {
            gotoxy(43, 12);	
            printf("ESA ID YA SE ENCUENTRA BANEADA");
        }
        sleep(2);
        // Vuelve a pedir otra ID
        banearUsuario();
        return;
    }

    FILE *archivoBaneados = fopen("Baneados.txt", "a");
    fprintf(archivoBaneados, "%s\n", idBanear);
    fclose(archivoBaneados);

    system("cls");
    crearBorde(2,1,118,25);
    gotoxy(42, 12);	
    printf("USUARIO BANEADO CORRECTAMENTE");
    sleep(2);

    if (seLimpiaronVotos) {
        system("cls");
        crearBorde(2,1,118,25);
        gotoxy(41, 12);	
        printf("SE HAN ELIMINADO LOS VOTOS DE ESA ID");
        sleep(2);
    }

    // Vuelve a pedir otra ID para banear
    banearUsuario();
}

void adminMenu() {
    int opcAdmin, flagSalida = 1;
 
    const char *tituloPrograma = "ADMINISTRADOR DE VOTACIONES", *nombreOpciones[]={"CREAR VOTACION", "CONTINUAR VOTACION", "BORRAR VOTOS", "BANEAR USUARIO", "ESTADO VOTACION", "RESULTADOS - TERMINAR VOTACION", "CERRAR SESION"};
    int cantidadOpciones = sizeof(nombreOpciones) / sizeof(nombreOpciones[0]);

    do
    {
        opcAdmin = crearMenu(tituloPrograma, nombreOpciones, cantidadOpciones, 1);

        switch(opcAdmin)
        {
            case 1:
                system("cls");
                crearVotacion();
                break;
            case 2:
                // Continua la votacion
                system("cls");
                continuarVotacion();
                break;
            case 3:
                // Borra votos ilegales
                system("cls");
                borrarVoto();
                break;
            case 4:
                // Banear usuario
                system("cls");
                banearUsuario();
                break;
            case 5:
                // Estado de votacion
                system("cls");
                verificarEstadoVotacion();
                break;
            case 6:
                // Resultados de votacion
                system("cls");
                mostrarResultados();
                break;
            case 7:
                // Cerrar sesion
                system("cls");
                crearBorde(2,1,118,25);

                gotoxy (45,12);	
                printf("CERRANDO SESION, POR FAVOR ESPERE...\n");               
                sleep(1);

                system("cls");
                flagSalida = 0;
                break;
        }
    } while (flagSalida);
}

void adminVerification()
{
    char username[50];
    char password[50];
    int i = 0;
    char tecla;

    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(50, 3);
    printf("INGRESE SUS CREDENCIALES");

    gotoxy(5, 6);
    printf("INGRESE SU USUARIO: ");
    scanf("%s", username);

    gotoxy(5, 8);
    printf("INGRESE SU CONTRASE%cA: ", 165);

    while (1) {
        tecla = getch();

        if (tecla == '\r') { // Enter
            password[i] = '\0';
            printf("\n");
            break;
        }

        if (tecla == '\b') { // Backspace
            if (i > 0) {
                i--;
                printf("\b \b"); // borra el asterisco visualmente
            }
            continue;
        }

        if (i < sizeof(password) - 1) {
            password[i] = tecla;
            printf("*"); // mostramos * en vez de la tecla real
            i++;
        }
    }

    if (strcmp(username, usr[0]) == 0 && strcmp(password, pass[0]) == 0) 
    {
        system("cls");
        crearBorde(2, 1, 118, 25);

        gotoxy(42,12);	
        printf("ACCESO CONCEDIDO. BIENVENIDO!");
        sleep(3);
        adminMenu();
    } 
    else 
    {
        system("cls");
        crearBorde(2, 1, 118, 25);

        gotoxy(34, 12);	
        printf("ACCESO DENEGADO. USUARIO O CONTRASE%cA INCORRECTOS.", 165);
        gotoxy(44, 14);
        printf("POR FAVOR, INTENTE NUEVAMENTE.");
        sleep(3);
        adminVerification();
    }
}

void registrarVoto(int numeroCandidato, char *idVotante) {
    char nombreArchivo[100], nombreTemporal[100];
    int votos;
    char nombreCandidato[100];
    char idGuardada[100];

    sprintf(nombreArchivo, "Candidato%d.txt", numeroCandidato);
    sprintf(nombreTemporal, "Candidato%dTemp.txt", numeroCandidato);

    FILE *original = fopen(nombreArchivo, "r");
    FILE *temporal = fopen(nombreTemporal, "w");

    if (original == NULL || temporal == NULL) {
        crearBorde(2, 1, 118, 25);

        gotoxy(32,12);	
        printf("OCURRIO UN ERROR AL REGISTRAR SU VOTO, VUELVA A INTENTAR");
        sleep(3);
        return;
    }

    fscanf(original, "%d", &votos);
    fscanf(original, "%s", nombreCandidato);
    // Sumar el nuevo voto
    votos++; 

    fprintf(temporal, "%d\n", votos);
    fprintf(temporal, "%s\n", nombreCandidato);

    // Copia las IDs de votantes que ya estaban guardadas
    while (fscanf(original, "%s", idGuardada) == 1) {
        fprintf(temporal, "%s\n", idGuardada);
    }

    // Agrega la ID del nuevo votante al final
    fprintf(temporal, "%s\n", idVotante);

    fclose(original);
    fclose(temporal);

    remove(nombreArchivo);
    rename(nombreTemporal, nombreArchivo);

    crearBorde(2, 1, 118, 25);

    gotoxy(38,12);	
    printf("SU VOTO HA SIDO REGISTRADO EXITOSAMENTE!!");
    sleep(3);
}

// Reivsa si la ID ya ha sido utilizada para votar a alguno de los candidatos
int verificarVoto(char *idBuscada, int numeroCandidatos) {
    for (int i = 1; i <= numeroCandidatos; i++) {
        char nombreArchivo[100];
        char nombreCandidato[100];
        char idGuardada[100];
        int votos;

        sprintf(nombreArchivo, "Candidato%d.txt", i);
        FILE *archivo = fopen(nombreArchivo, "r");

        if (archivo == NULL) {
            continue;
        }

        fscanf(archivo, "%d", &votos);
        fscanf(archivo, "%s", nombreCandidato);

        while (fscanf(archivo, "%s", idGuardada) == 1) {
            if (strcmp(idGuardada, idBuscada) == 0) {
                fclose(archivo);
                return 1;
            }
        }

        fclose(archivo);
    }

    return 0;
}

void studentMenu() {
    char idUser[100];
    int numeroCandidatos = contarCandidatos(), estadoEleccion = comprobarVotacionActiva();

    FILE *archivoInfo = fopen("ElectionInfo.txt", "r");

    if (archivoInfo == NULL) {
        crearBorde(2, 1, 118, 25);
        gotoxy(34, 12);
        printf("NO HAY NINGUNA ELECCION ACTIVA EN ESTE MOMENTO.");
        sleep(2);
        return;
    }

    system("cls");
    crearBorde(2, 1, 118, 25);
    gotoxy(46, 3);
    printf("INGRESE SUS DATOS PARA VOTAR");
    gotoxy(82, 23);
    printf("0 PARA VOLVER AL MENU PRINCIPAL");

    gotoxy(5, 6);
    printf("INGRESE SU ID: ");
    scanf("%s", idUser);
    // Regresar al menu principal
    if (strcmp(idUser, "0") == 0) {
        return;
    }

    if (!comprobarID(idUser)) {
        system("cls");
        crearBorde(2, 1, 118, 25);

        gotoxy(32, 12);
        printf("ID INVALIDA. VERIFIQUE LOS DATOS E INTENTE NUEVAMENTE.");
        sleep(2);
        studentMenu();
        return;
    }

    if (estadoEleccion == 0) {
        system("cls");
        crearBorde(2, 1, 118, 25);

        gotoxy(34, 12);
        printf("LA VOTACION SE ENCUENTRA CERRADA EN ESTE MOMENTO.");
        sleep(2);
        return;
    }
    
    // Chequea si la ID del usuario se encuentra baneada
    if (verificarBaneo(idUser)) {
        system("cls");
        crearBorde(2, 1, 118, 25);

        gotoxy(43, 12);
        printf("ESTA ID SE ENCUENTRA BANEADA.\n");
        sleep(3);
        return;
    }

    // LEER EL ARCHIVO DE USUARIOS PARA VERIFICAR SI EL ID EXISTE Y SI PUEDE VOTAR
    if (verificarVoto(idUser, numeroCandidatos))
    {
        system("cls");
        crearBorde(2, 1, 118, 25);

        gotoxy(43,12);	
        printf("USTED YA HA EMERGIDO SU VOTO!");
        sleep(3);
        return;
    } 

    int opcionesMenu, flagSalida = 1;
    
    const char *tituloPrograma = "VOTE POR SU CANDIDATO DESEADO";
    char bufferNombre[500][100];
    char *nombreOpciones[500];

    for (int i = 0; i < 500; i++) {
        nombreOpciones[i] = bufferNombre[i];
    }

    for (int i = 0; i < numeroCandidatos; i++) {
        char nombreArchivo[100];
        sprintf(nombreArchivo, "Candidato%d.txt", i + 1);
        FILE *archivo = fopen(nombreArchivo, "r");

        if (archivo == NULL) {
//            printf("Error al abrir el archivo del candidato %d.\n", i);
            continue;
        }

        fscanf(archivo, "%*d ");
        fgets(nombreOpciones[i], 100, archivo); // Leer el nombre del candidato
        nombreOpciones[i][strcspn(nombreOpciones[i], "\n")] = '\0';
        fclose(archivo);
    }

    for (int j = 0; j < numeroCandidatos; j++) {
        int longitud = strlen(nombreOpciones[j]);
        for(int k = 0; k < longitud; k++) {
            nombreOpciones[j][k] = toupper(nombreOpciones[j][k]);
        }
    }

    do
    {
        opcionesMenu = crearMenu(tituloPrograma, (const char **)nombreOpciones, numeroCandidatos, 10);

        if (opcionesMenu >= 1 && opcionesMenu <= numeroCandidatos) {
            system("cls");
            registrarVoto(opcionesMenu, idUser);
            flagSalida = 0;
        }
    } while (flagSalida);       

    studentMenu();
}

void creacionPrograma()
{
    int opcionesMenu, flagSalida = 1;
 
    const char *tituloPrograma = "SISTEMA DE VOTACIONES", *nombreOpciones[]={"ESTUDIANTES", "ADMIN", "SALIR"};
    int cantidadOpciones = sizeof(nombreOpciones) / sizeof(nombreOpciones[0]);

    do
    {
        opcionesMenu = crearMenu(tituloPrograma, nombreOpciones, cantidadOpciones, 0);

        switch(opcionesMenu)
        {
            case 1:
                system("cls");
                studentMenu();
                break;
            case 2:
                system("cls");
                adminVerification();
                break;
            case 3:
                system("cls");
                crearBorde(2,1,118,25);

                gotoxy (45,12);	
                printf("GRACIAS POR PREFERIRNOS <3\n");               
                sleep(2);

                system("cls");
                flagSalida = 0;
                break;
        }
    } while (flagSalida);
}