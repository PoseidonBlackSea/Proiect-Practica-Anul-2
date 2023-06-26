#include <gtk/gtk.h>

void on_Exit_clicked(GtkButton *button, gpointer user_data) { //functie Exit
    	gtk_widget_destroy(GTK_WIDGET(user_data));
}

void on_Utilizatori_clicked(GtkButton *button, gpointer user_data) {	//functie Utilizatori
	system("./utilizatori.sh &");
}

void on_AccessFisierePermisiuni_clicked(GtkButton *button, gpointer user_data) { //functie Permisiuni
	system("./fisierePermisiuni.sh &");
}

void on_verificare_continut_fisiere_clicked(GtkButton *button, gpointer user_data) {
	system("./continutFisiere.sh &");
}

void on_diff_uri_pe_fisiere_clicked(GtkButton *button, gpointer user_data) {
	system("./diffuri.sh &");
}

int main(int argc, char *argv[]) {
   	 GtkBuilder *builder;
   	 GtkWidget *window;
    
   	 gtk_init(&argc, &argv);
    
  	  builder = gtk_builder_new();
   	 gtk_builder_add_from_file(builder, "/home/poseidon/Desktop/Proiect-Practica-Anul-2/GUI Interfata Glade/Glade-Meniu.glade", NULL);
    
   	 window = GTK_WIDGET(gtk_builder_get_object(builder, "Meniu"));
    
   	 //1.Utilizatori
   	 GtkWidget *utilizatori_button = GTK_WIDGET(gtk_builder_get_object(builder, "Utilizatori"));
   	 g_signal_connect(utilizatori_button, "clicked", G_CALLBACK(on_Utilizatori_clicked), NULL);
    
   	 //2.Fisiere & Permisiuni
  	  GtkWidget *permisiuni_button = GTK_WIDGET(gtk_builder_get_object(builder, "Access fisiere, Permisiuni"));
  	  g_signal_connect(permisiuni_button, "clicked", G_CALLBACK(on_AccessFisierePermisiuni_clicked), NULL);
    
   	 //3. Continut Fisiere
   	 GtkWidget *continut_button = GTK_WIDGET(gtk_builder_get_object(builder, "verificare continut fisiere"));
   	 g_signal_connect(continut_button, "clicked", G_CALLBACK(on_verificare_continut_fisiere_clicked), NULL);
    
  	  //4. Diffuri pe Fisiere
  	  GtkWidget *diffuri_button = GTK_WIDGET(gtk_builder_get_object(builder, "diff-uri pe fisiere"));
  	  g_signal_connect(diffuri_button, "clicked", G_CALLBACK(on_diff_uri_pe_fisiere_clicked), NULL);
    
  	  //5.Exit
  	  GtkWidget *exit_button = GTK_WIDGET(gtk_builder_get_object(builder, "Exit"));
  	  g_signal_connect(exit_button, "clicked", G_CALLBACK(on_Exit_clicked), window);
   	 //
    
  	  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
  	  gtk_widget_show(window);
    
  	  gtk_main();
    
   	 return 0;
}

