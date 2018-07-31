# Bassino
Bassino nasce come una miglioria casalinga per implementare dei sistemi di sicurezza ad una bicicletta cercando di 
avere un approccio tranquillo con essa, tentando di far un minimo fronte ai mezzi inquinanti.

# Realizzazione
## Materiale
Di seguito il materiale utilizzato per la realizzazione del circuito, incluse le librerie utilizzate:

1 Arduino UNO r3
3 Breadboard
Jumperwire e cavetti
1 Sensore DHT11
2 Sensori ultrasuoni Hc-sr04
2 led rossi
4 led gialli
2 Mini interruttori (Pulsanti)
Un caricabatteria portatile per cellulare (PowerBank)

Librerie:
CapacitiveSensor (per la gestione del sensore capacitivo)
DHT (per la gestione del sensore di temperatura)

## Caricamento del codice
Dopo aver creato il ciruito bisognerà utilizzare l'IDE di Arduino, scaricabile cliccando [qui](https://www.arduino.cc/en/Main/Software).
Scaricare la libreria DHT da "Sketch->Include Library->Manage Libraries" all'interno dell'IDE e cercare "DHT sensor library", 
in seguito scaricarla.
Scaricare la libreria "CapacitiveSensor" da [arduino.cc/capacitive](http://playground.arduino.cc/Main/CapacitiveSensor) e in seguito
decomprimerlo e aggiungerlo alla cartella degli Skretch.
Ora sarà possibile copiare ed incollare il codice presente nella cartella "Progetto Arduino" qui sopra.
Collegare l'Arduino con il cavo in dotazione al pc e premere il pulsante in alto a sinistra per poter 
compilare e caricare il tutto.

Per maggior informazioni consultare la documentazione completa e il codice sorgente presenti nel progetto.


