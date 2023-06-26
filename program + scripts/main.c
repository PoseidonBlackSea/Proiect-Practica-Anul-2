#include <gtk/gtk.h>

void on_Exit_clicked(GtkButton *button, gpointer user_data) {
    // Închide fereastra
    gtk_widget_destroy(GTK_WIDGET(user_data));
}

void on_Utilizatori_clicked(GtkButton *button, gpointer user_data) {
	system("./utilizatori.sh &");
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
    //5.Exit
    GtkWidget *exit_button = GTK_WIDGET(gtk_builder_get_object(builder, "Exit"));
    g_signal_connect(exit_button, "clicked", G_CALLBACK(on_Exit_clicked), window);
    //
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    gtk_widget_show(window);
    
    gtk_main();
    
    return 0;
}

