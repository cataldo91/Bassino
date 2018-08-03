# Bassino
Bassino è un progetto amatoriale di making con l'intento di implementare sistemi di sicurezza, come le luci per indicare la frenata e le frecce per il cambio direzionale, oltre ad un contachilometri che terrà conto della velocità alla quale si sta viaggiando ed un sensore di temperatura che indicherà i gradi e umidità dell'aria. Lo scopo è quello di incentivare l'uso del mezzo ad emissioni zero per far fronte a quelli utilizzati quotidianamente. 
# Realizzazione
## Materiale
Di seguito il materiale utilizzato per la realizzazione del circuito, incluse le librerie utilizzate:  

1 Arduino UNO r3  
3 Breadboard  
Jumperwire e cavetti  
1 Sensore DHT11  
1 LCD 16x2   
2 Sensori ultrasuoni Hc-sr04  
2 led rossi  
4 led gialli  
2 Mini interruttori (Pulsanti)  
1 Caricabatteria portatile per cellulare (PowerBank)  
  
Librerie:  
CapacitiveSensor (per la gestione del sensore capacitivo)  
DHT (per la gestione del sensore di temperatura)  

## Caricamento del codice
Dopo aver creato il circuito bisognerà utilizzare l'IDE di Arduino, scaricabile cliccando [qui](https://www.arduino.cc/en/Main/Software).  
Scaricare la libreria DHT da "Sketch->Include Library->Manage Libraries" all'interno dell'IDE e cercare "DHT sensor library", 
in seguito scaricarla.  
Scaricare la libreria "CapacitiveSensor" da [arduino.cc/capacitive](http://playground.arduino.cc/Main/CapacitiveSensor) e in seguito
decomprimerlo e aggiungerlo alla cartella degli Sketch.  
Ora sarà possibile copiare ed incollare il codice presente nella cartella "Progetto Arduino" qui sopra.  
Collegare l'Arduino con il cavo in dotazione al pc e premere il pulsante in alto a sinistra per poter 
compilare e caricare il tutto.  
  
Per maggior informazioni consultare la documentazione completa e il codice sorgente presenti nel progetto.


