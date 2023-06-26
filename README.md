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

	Functionalitati:
		1. Informatii Utilizatori 
			Se afiseaza sub o interfata user friendly toate informatiile despre toti Utilizatorii din sistem 
			Utilizam Zenity si limbaj bash.
		2.
		3.
		4.
		5. Exit
			Apasand butonul Exit iesim din program.


	Pentru a rula programul trebuie urmati urmatorii pasi:
		$ gcc -o nume_program main.c `pkg-config --cflags --libs gtk+-3.0`
		$ ./nume_program
