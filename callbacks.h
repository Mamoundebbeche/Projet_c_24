#include <gtk/gtk.h>


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_add_parking_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_combo_status_editing_done           (GtkCellEditable *celleditable,
                                        gpointer         user_data);

void
on_comboboxentry1_editing_done         (GtkCellEditable *celleditable,
                                        gpointer         user_data);

void
on_button_update_parking_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button6_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_refresh_stats_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_Gestion_des_Parkings_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_gestion_services_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_exiit_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button12_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_zone_A_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_zone_b_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_zone_c_clicked                      (GtkButton       *button,
                                        gpointer         user_data);

void
on_horaire_1_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_horaire_2_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_horaire_3_clicked                   (GtkButton       *button,
                                        gpointer         user_data);
