#!/bin/bash

# Informatii utilizatori
users_info=$(cat /etc/passwd)

# setam dimensiunea GUI ului
width=500
height=800

# afisam informatiile
zenity --text-info --title "Informații Utilizatori" --width="$width" --height="$height" --filename=/dev/stdin <<< "$(while IFS=':' read -r username x uid gid gecos home shell; do
    echo "Utilizatorul \"$username\" are următoarele informații:"
    echo "Nume utilizator: $username"
    echo "UID: $uid"
    echo "GID: $gid"
    echo "Informații GECOS: $gecos"
    echo "Director home: $home"
    echo "Shell implicit: $shell"
    echo ""
done <<< "$users_info")"

