#include  <stdio.h>   //direttiva del processore per caricare in memoria la libreria <std.io>

void menu ();         //funzioni void che non restituiscono
void moltiplica ();   //nessun risultato
void dividi ();       //infatti sono prive
void ins_string();    //del valore di ritorno


int main ()           /*funzione principale di ogni programma dalla quale
                      il processore parte a leggere le istruzioniall'esecuzione*/
{
 char scelta = '\0';   //variabile per l'inserimento dei caratteri
 menu ();
 scanf ("%c", &scelta); /*funzione per leggere l'input da tastiera
                        input di tipo char assegnato alla variabile scelta */
 switch (scelta)        //istruzione condizionaleper la scelta multipla del menu
      {
       case 'A':        //prima scelta del programma
               moltiplica();
               break;   //istruzione per uscire dal set eseguito
       case 'B':
               dividi();
               break;
       case 'C':
               ins_string();
               break;
       default:   //blocco di istruzione in caso di mancata assunzione dei valori di (scelta)
              printf ("\nInserire A, B o C\n");
              break;
      }
 return 0;               //valore di ritorno di int main()
}


void menu ()            //funzione per la stampa a video del menu principale
{
 printf ("Benvenuto, sono un assistente digitale;\n");  //funzioni
 printf ("posso aiutarti a sbrigare alcuni compiti\n"); //stampa a video
 printf ("Come posso aiutarti?\n");                     //con caratteri speciali
 printf ("\nA >> moltiplicare due numeri\n");           //\n
 printf ("B >> Dividere due numeri\n");                 //per le selezioni
 printf ("C >> Inserire una stringa\n");                //del menu
}

void moltiplica ()       //funzione per l'operazione moltiplicazione
{
 short int a;            //variabili int di tipo short equivalente a due byte
 short int b;
 short int prodotto;

 printf ("Inscerisci il primo fattore: ");
 scanf ("%d", &a);       //funzione per l'input da tastiera per inserire un valore numerico

 printf ("\nInserisci il secondo fattore: ");
 scanf ("%d", &b);

 prodotto = a * b;

 printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}

void dividi ()           //funzione per l'operazione divisione
{
 int a;                  //variabili int
 int b;
 int divisione;

 printf ("Inserisci il numeratore:");
 scanf ("%d", &a);

 printf ("\nInserisci il denumeratore:");
 scanf ("%d", &b);

 divisione = a % b;

 printf ("La divisione tra %d e %d e': %d", a,b,divisione);
}

void ins_string ()        //funzione per l'inserimento di una stringa
{
 char stringa[10];
 printf ("Inserisci la stringa: ");
 scanf ("%s", &stringa);
}
