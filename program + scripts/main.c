#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;
    
    gtk_init(&argc, &argv);
    
    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "/home/poseidon/Desktop/Proiect-Practica-Anul-2/GUI Interfata Glade/Glade-Meniu.glade", NULL);
    
    window = GTK_WIDGET(gtk_builder_get_object(builder, "Meniu"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    gtk_widget_show(window);
    
    gtk_main();
    
    return 0;
}

