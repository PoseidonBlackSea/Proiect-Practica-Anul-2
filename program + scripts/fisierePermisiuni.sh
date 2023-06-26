#!/bin/bash

# Fereasta numele fisierului
file_path=$(zenity --file-selection --title="Selectați fișierul")

# Verificam faca s-a selectat un fisier
if [ -z "$file_path" ]; then
    zenity --error --text="Nu ați selectat niciun fișier!"
    exit 1
fi

# Furam Informatiile despre fisier 
file_info=$(stat -c "Nume fișier: %n
 Dimensiune: %s bytes 
 Permisiuni: %A 
 Proprietar: %U 
 Grup: %G 
 Data ultimei modificări: %y" "$file_path" 2>/dev/null)

# Afisam informatiile
zenity --text-info --title "Informații Fisier și Permisiuni" --filename=<(echo "$file_info") --editable --width=500 --height=800 --ok-label="OK"

