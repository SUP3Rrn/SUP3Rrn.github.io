int main() {
printf("Ora ti farò una domanda! Sei pronto/a?\n");

 char nome[50];
 char risposta[4];
                    
 printf("Qual è il tuo nome?\n");
                            
 scanf("%s", nome);
                                    
printf("Ciao, %s!\n", nome);

printf("Come stai?\n");

scanf("%s", risposta);

if (strcmp(risposta, "bene") == 0) {
// Se la risposta è "bene"
printf("Ah, mi fa piacere che stai bene!\n");
}
else if (strcmp(risposta, "male") == 0) {

printf("Ah, mi dispiace che stai male :( \n");
}
else {
// Se la risposta è diversa da "bene" o "male"
printf("Non ho capito, ma spero che tu stia bene!\n");
}

return 0;
}