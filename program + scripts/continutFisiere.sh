#!/bin/bash

#cerem fisierul dorit
file_path=$(zenity --file-selection --title="Selectați fișierul")

# Verificam daca apasa ok sau cancel
if [[ -n "$file_path" ]]; then
    #furam informatiile
    file_content=$(cat "$file_path")

    # Afisam informatiile cu zenity
    zenity --text-info --title="Informații despre fișier" --no-markup --filename="$file_path" --width=800 --height=800 --ok-label="OK"
fi

