# Proiect-Practica-Anul-2
CERINTA:
	Ansamblu de scripturi care rulate asupra unui VM linux pot verifica configurări ale mașinii virtuale. Util în crearea unui environment de învățare pentru studenți la materia Sisteme de Operare.
	Scripturile trebuie să implementeze “componente de testare” pentru diverse configurații:
		- utilizatori
		- acces fișiere, permisiuni
		- verificare conținut fișiere
		- diff-uri pe fișiere.

DESCRIERE:
	Interfata este creata in Glade fiind utilizata asupra cerintelor.
	Se folosesc limbajele bash (pentru functionalitati) si C (pentru interfata) impreuna cu Zenity
	
	Functionalitati:
		1. Informatii Utilizatori 
			Se afiseaza sub o interfata user friendly informatiile despre toti Utilizatorii din sistem 
		2. Informatii Fisiere si Permisiuni
			Afisam cu Zenity o casuta unde selectam ce fisier dorim din tot sistemul apoi apasand Ok ne afiseaza informatiile despre acesta (Numele, Permisiuni, Grup, Owner, Data Curenta).
			Daca nu selectam ne apare o casuta Nu ati selectat nici un fisier!
		3.Continut fisiere
			Cerem printr-o fereasta sa se selecteze un fisir, urmand sa-mi afiseze continutul acestuia prin intermediul unei fereste Zenity.
		4. Diffuri pe Fisiere
			Cerem sa se selecteze doua fisiere dupa care prin diff side-by-side verificam diferentele si le afisam prin Zenity
		5. Exit
			Apasand butonul Exit iesim din program.


	Pentru a rula programul trebuie urmati urmatorii pasi:
		$ gcc -o nume_program main.c `pkg-config --cflags --libs gtk+-3.0`
		$ ./nume_program
