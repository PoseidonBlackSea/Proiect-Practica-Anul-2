#!/bin/bash

# Selectam primul fisier
file1=$(zenity --file-selection --title="Selectați primul fișier")

# verificam
if [[ -z "$file1" ]]; then
	zenity --error --text="Nu ați selectat niciun fișier."
	exit 1
fi

# Selectam al doilea fisier
file2=$(zenity --file-selection --title="Selectați al doilea fișier")

# Verificam
if [[ -z "$file2" ]]; then
	zenity --error --text="Nu ați selectat niciun fișier."
	exit 1
fi

# Verificam daca fisierele sunt identice
if diff -q "$file1" "$file2" >/dev/null; then
	zenity --info --text="Fișierele sunt identice."
	exit 0
else
	# Calculam folosid diff si afisam cu Zenity
    	differences=$(diff --side-by-side --width=200 "$file1" "$file2")
    	zenity --text-info --title="Diferențe" --width=1200 --height=800 --filename=<(echo "$differences")
fi

exit 0

