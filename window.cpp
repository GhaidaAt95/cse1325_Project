#include <stdio.h>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input_Choice.H>

void choice_cb(Fl_Widget *w, void *userdata) {
  // Show info about the picked item
  Fl_Input_Choice *choice = (Fl_Input_Choice*)w;
  const Fl_Menu_Item *item = choice->menubutton()->mvalue();
  
  if(item->label() == "choice->input()->value()")
  {
    printf("*** Arm Description ****:\n");


  }
//  printf("*** Arm Description ****:\n");
       printf("    item label()='%s'\n", item ? item->label() : "(No item)");
   
  printf("    item value()=%d\n", choice->menubutton()->value());
      printf("    input value()='%s'\n", choice->input()->value());
//  printf("    The user %s\n", choice->menubutton()->changed()
  //                                ? "picked a menu item"
    //                              : "typed text");

}
int main() {
  Fl_Double_Window win(400,200,"Choose Components");
  win.begin();
    Fl_Input_Choice choice(10,10,100,30);
    choice.callback(choice_cb, 0);
    choice.add("Arm");
    choice.add("Torso");
    choice.add("Locomotor");
    choice.add("Head");
    choice.add("Battery");
    
  win.end();
  win.show();
  return Fl::run();
}

