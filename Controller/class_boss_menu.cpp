
#include <iostream>
#include <stdlib.h>
#include <string>
#include <FL/Fl.H> 
#include <FL/Fl_Window.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Choice.H>
#include <Fl/Fl_Box.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Scroll.H>

/////////////////////////////////////////
//////BOSS MENU STUFF///////////////////
///////////////////////////////////////

/**************STUFF FROM Boss_class CLASS  MODIFIED**************/

using namespace std;

//bool authenticate_user(string username, string password, string person_type);

class Boss_class: public Fl_Window
{
	
	public:
	Boss_class(); 
	void show_main_window() {this->show();}
	void hide_main_window() {this->hide();}
	string person_type;
	private:
  /*  
    	void B_menu_func();
	Fl_Window* B_menu_win;	
	Fl_Button* BOSS_create_customer;
	Fl_Button* BOSS_create_SA;
	Fl_Button* BOSS_menu_back_b;
	Fl_Button* BOSS_raise_stuff_b;
	Fl_Button* BOSS_give_raise_button;
		
	void BOSS_create_SA_func();
	void BOSS_create_C_func();
	
	// CU VIEW CATALOG WINDOW STUFF
	
	void view_catalog_func();
	
	// BOSS making SA stuff
	
	Fl_Window* create_SA_window;
	Fl_Input* new_SA_name_input;
	Fl_Input* new_SA_pass_input;
	Fl_Button* create_SA_b;
	Fl_Button* create_SA_back_b;
	

	// BOSS making Customer stuff
	
	Fl_Window* BOSS_create_c_win;
	Fl_Input* BOSS_CC_name_input;
	Fl_Input* BOSS_CC_phone_input;
	Fl_Input* BOSS_CC_email_input;
	Fl_Input* BOSS_CC_pass_input;
	Fl_Button* BOSS_CC_button;
	Fl_Button* BOSS_CC_cancel_button;
	

	
	// BOSS RAISES AND SHOP STATISTICS
	void raise_stuff_func();
	
	// BOSS gives raise
	
	void give_raise_func();
	
	Fl_Window* give_raise_window;
	Fl_Multiline_Output* SA_list;
	Fl_Button* give_raise_back;
	Fl_Button* give_raise_enter;
	Fl_Button* give_raise_info;
	Fl_Int_Input* give_raise_index;
	
	
	
	
	// MENU to ask if returning customer or new
	void ask_if_new_func();
	
	Fl_Window* ask_if_new_win;
	Fl_Button* new_c_button;
	Fl_Button* returning_c_button;
	
   */
           

	
		
	// MAIN MENU
	Fl_Button* main_button1; // Authenticates PW for Manager, then his menu	
	Fl_Button* main_button2; // sth else
	Fl_Button* main_button3; // Custoemr
	Fl_Button* main_button4;


	// MAIN Menu CALLBACKS
	static void main_b1_cb(Fl_Widget*, void*);
	inline void main_b1_cb_i();
	static void main_b2_cb(Fl_Widget*, void*);
	inline void main_b2_cb_i();
	static void main_b3_cb(Fl_Widget* w, void* v);
    inline void main_b3_cb_i();
	static void main_b4_cb(Fl_Widget* w, void* v);
	inline void main_b4_cb_i();
	
	// UNPW MENU // UNPW = UserName PassWord
	
	void unpw_menu_func();
	
	static void unpw_login_cb(Fl_Widget*, void*);
	inline void unpw_login_cb_i();
	static void unpw_cancel_cb(Fl_Widget*, void*);
	inline void unpw_cancel_cb_i();
	
	const char* username;
	const char* password;
	
	Fl_Window* unpw_menu_window;
	Fl_Input* username_input;
	Fl_Input* password_input;
	
	// PM Menu Stuff
	
	void PM_menu_func();
	//void PM_menu_show();
	//void PM_menu_hide();
	Fl_Window* PM_mainmenu_window;
	Fl_Button* PM_add_component_button;
	Fl_Button* PM_add_model_button;
	Fl_Button* PM_menu_back_button;
	
	void PM_add_component_menu();
	
	// Add and Back buttons
	static void PM_add_component_button_cb(Fl_Widget*, void*);
	inline void PM_add_component_button_cb_i();	
	static void PM_add_model_button_cb(Fl_Widget*, void*);
	inline void PM_add_model_button_cb_i();
	static void PM_menu_back_button_cb(Fl_Widget*,void*);
	inline void PM_menu_back_button_cb_i();
	
	// These call the ADD_ALL_func(string) function, with the correct component as arg
	
	static void PM_ACM_addArm_cb(Fl_Widget*,void*);
	inline void PM_ACM_addArm_cb_i();
	static void PM_ACM_addHead_cb(Fl_Widget*, void*);
	inline void PM_ACM_addHead_cb_i();
	static void PM_ACM_addLoc_cb(Fl_Widget*, void*);
	inline void PM_ACM_addLoc_cb_i();
	static void PM_ACM_addBattery_cb(Fl_Widget*, void*);
	inline void PM_ACM_addBattery_cb_i();
	static void PM_ACM_addTorso_cb(Fl_Widget*, void*);
	inline void PM_ACM_addTorso_cb_i();

	// ADD-COMPONENT MENU

	Fl_Window* PM_ACM; // ACM = ADD COMPONENT MENU
	Fl_Button* PM_ACM_addHead;
	Fl_Button* PM_ACM_addArm;
	Fl_Button* PM_ACM_addTorso;
	Fl_Button* PM_ACM_add_battery;
	Fl_Button* PM_ACM_add_locomotor;
	Fl_Button* PM_ACM_back_button;
	
	static void PM_ACM_back_button_cb(Fl_Widget* w, void* v);
	inline void PM_ACM_back_button_cb_i();
	
	// SA MENU
	void SA_menu_func();
	
	Fl_Window* SA_mainmenu_window;
	Fl_Button* SA_CRO_button; 
	
	static void SA_process_order_cb(Fl_Widget*,void*);
	inline void SA_process_order_cb_i();
	
	// SA process customer order - Choosing the order
	
	void SA_process_order_func();
	Fl_Window* SA_process_order_win;
	Fl_Button* process_order_back;
	Fl_Multiline_Output* order_list;
	Fl_Int_Input* get_index;
	Fl_Button* process_order_enter;
	Fl_Button* SA_process_order;
	Fl_Button* process_order_info;
	
	
	static void process_order_info_cb(Fl_Widget*, void*);
	inline void process_order_info_cb_i();
	static void process_order_back_cb(Fl_Widget*,void*);
	inline void process_order_back_cb_i();
	static void process_order_enter_cb(Fl_Widget*, void*);
	inline void process_order_enter_cb_i();
	
	// SA order info window
	void order_info_func(int);
	Fl_Window* SA_order_info_win;
	Fl_Multiline_Output* order_info_box;
	
	// ADD COMPONENT ALL WINDOW
	void ADD_ALL_func(string);
	string current_component;
	Fl_Window* ADD_ALL_window;
	
	// From Robot_Part
	Fl_Input *ADD_ALL_name_input;
	Fl_Input* ADD_ALL_cost_input;
	Fl_Input* ADD_ALL_description_input;
	Fl_Input* ADD_ALL_image_input;
	Fl_Input* ADD_ALL_weight_input;
	Fl_Input* ADD_ALL_model_num_input;
	
	// From classes of individual components
	Fl_Input* ADD_ALL_power_input;
	Fl_Input* ADD_ALL_max_arm_power_input;
	Fl_Input* ADD_ALL_power_available_input;
	Fl_Input* ADD_ALL_max_energy_input;
	Fl_Input* ADD_ALL_max_loc_power_input;
	Fl_Input* ADD_ALL_max_speed_input;
	Fl_Input* ADD_ALL_max_arms_input;
	Fl_Input* ADD_ALL_max_battery_compartments_input;
	
	Fl_Button* ADD_ALL_create_button;
	Fl_Button* ADD_ALL_cancel_button;
	
	static void ADD_ALL_create_button_cb(Fl_Widget*,void*);
	inline void ADD_ALL_create_button_cb_i();
	static void ADD_ALL_cancel_button_cb(Fl_Widget*,void*);
	inline void ADD_ALL_cancel_button_cb_i();
	
	// CUSTOMER MENU
	void CU_menu_func();
	
	Fl_Window* CU_menu_win;
	
	Fl_Button* CU_order_button;
	static void CU_order_button_cb(Fl_Widget*, void*);
	inline void CU_order_button_cb_i();


       /********view_order menu*******/
         void CU_view_order_func();
         
        Fl_Window* CU_view_order_window;
	Fl_Scroll* view_scroll;
        /***************/

	Fl_Button* CU_view_order_button;
        static void CU_view_order_button_cb(Fl_Widget*, void*);
        inline void CU_view_order_button_cb_i();


	
	Fl_Button* CU_menu_back_button;
	static void CU_menu_back_button_cb(Fl_Widget*,void*);
	inline void CU_menu_back_button_cb_i();
	
	Fl_Button* CU_menu_catalog_button;
	static void CU_menu_catalog_button_cb(Fl_Widget*,void*);
	inline void CU_menu_catalog_button_cb_i();
	
	// CU CREATE ORDER MENU
	void CU_order_menu_func();
	Fl_Window* CU_order_menu;
	Fl_Int_Input* CU_order_model;
	Fl_Input* CU_del_date;
	Fl_Input* CU_add_comments;
	
	Fl_Button* CU_order_cancel_button;
	static void CU_order_cancel_button_cb(Fl_Widget*, void*);
	inline void CU_order_cancel_button_cb_i();
	Fl_Button* CU_create_order_button;
	static void CU_order_create_button_cb(Fl_Widget*, void*);
	inline void CU_order_create_button_cb_i();
	
	// BOSS main menu
	void B_menu_func();
	Fl_Window* B_menu_win;
	
	Fl_Button* BOSS_create_customer;
	Fl_Button* BOSS_create_SA;
	Fl_Button* BOSS_menu_back_b;
	Fl_Button* BOSS_raise_stuff_b;
	Fl_Button* BOSS_give_raise_button;
	
	static void BOSS_raise_stuff_b_cb(Fl_Widget*, void*);
	inline void BOSS_raise_stuff_b_cb_i();
	static void BOSS_create_customer_cb(Fl_Widget*, void*);
	inline void BOSS_create_customer_cb_i();
	static void BOSS_create_SA_cb(Fl_Widget*, void*);
	inline void BOSS_create_SA_cb_i();
	static void BOSS_menu_back_b_cb(Fl_Widget*, void*);
	inline void BOSS_menu_back_b_cb_i();
	static void BOSS_give_raise_cb(Fl_Widget*, void*);
	inline void BOSS_give_raise_cb_i();

	
	void BOSS_create_SA_func();
	void BOSS_create_C_func();
	
	// CU VIEW CATALOG WINDOW STUFF
	
	void view_catalog_func();
	
	// BOSS making SA stuff
	
	Fl_Window* create_SA_window;
	Fl_Input* new_SA_name_input;
	Fl_Input* new_SA_pass_input;
	Fl_Button* create_SA_b;
	Fl_Button* create_SA_back_b;
	
	static void create_SA_b_cb(Fl_Widget* w, void* v);
	inline void create_SA_b_cb_i();
	static void create_SA_back_b_cb(Fl_Widget*, void*);
	inline void create_SA_back_b_cb_i();
	
	// BOSS making Customer stuff
	
	Fl_Window* BOSS_create_c_win;
	Fl_Input* BOSS_CC_name_input;
	Fl_Input* BOSS_CC_phone_input;
	Fl_Input* BOSS_CC_email_input;
	Fl_Input* BOSS_CC_pass_input;
	Fl_Button* BOSS_CC_button;
	Fl_Button* BOSS_CC_cancel_button;
	
	static void BOSS_CC_button_cb(Fl_Widget*,void*);
	inline void BOSS_CC_button_cb_i();
	static void BOSS_CC_cancel_button_cb(Fl_Widget*,void*);
	inline void BOSS_CC_cancel_button_cb_i();
	
	// BOSS RAISES AND SHOP STATISTICS
	void raise_stuff_func();
	
	// BOSS gives raise
	
	void give_raise_func();
	
	Fl_Window* give_raise_window;
	Fl_Multiline_Output* SA_list;
	Fl_Button* give_raise_back;
	Fl_Button* give_raise_enter;
	Fl_Button* give_raise_info;
	Fl_Int_Input* give_raise_index;
	
	static void give_raise_back_cb(Fl_Widget*, void*);
	inline void give_raise_back_callback_i();
	static void give_raise_enter_cb(Fl_Widget*, void*);
	inline void give_raise_enter_callback_i();
	static void give_raise_info_cb(Fl_Widget*, void*);
	inline void give_raise_info_callback_i();
	
	
	
	// MENU to ask if returning customer or new
	void ask_if_new_func();
	
	Fl_Window* ask_if_new_win;
	Fl_Button* new_c_button;
	Fl_Button* returning_c_button;
	
	static void new_c_button_cb(Fl_Widget* w, void* v);
	inline void new_c_button_cb_i();
	static void returning_c_button_cb(Fl_Widget* w, void* v);
	inline void returning_c_button_cb_i();
	
	// CREATE USER MENU
	void create_user_func();
	Fl_Window* create_user_win;
	Fl_Input* new_user_name;
	Fl_Input* new_user_phone;
	Fl_Input* new_user_email;
	Fl_Input* new_user_password;
	
	Fl_Button* create_user_button;
	static void create_user_button_cb(Fl_Widget* w, void* v);
	inline void create_user_button_cb_i();
	
	Fl_Button* cancel_create_user_button;
	static void cancel_create_user_button_cb(Fl_Widget* w, void* v);
	inline void cancel_create_user_button_cb_i();
	
	// PM - ADD MODEL - AM
	
	void add_model_func();
	Fl_Double_Window* AM_win;
	Fl_Input* AM_name;
	Fl_Input* AM_number;
	Fl_Choice* AM_menu;
	Fl_Button* AM_back;
	Fl_Int_Input* AM_index;
	Fl_Button* AM_ADD;
	Fl_Button* AM_show;
	Fl_Text_Display* AM_disp;
	Fl_Text_Buffer* AM_buff;
	
	static void AM_back_cb(Fl_Widget*,void*);
	inline void AM_back_cb_i();
	
	
};


/***********************************/

void Boss_class::B_menu_func() {
	
	hide_main_window();
	B_menu_win = new Fl_Window(500,500,"Bossy Wossy");
	
	BOSS_create_customer = new Fl_Button(20,20,200,50,"Create Customer");
	BOSS_create_customer->callback(BOSS_create_customer_cb, this);
	BOSS_create_SA = new Fl_Button(20,90,200,50,"Create Sales Associate");
	BOSS_create_SA->callback(BOSS_create_SA_cb, this);
	BOSS_raise_stuff_b = new Fl_Button(20,160,200,50, "Stats and raises");
	BOSS_raise_stuff_b->callback(BOSS_raise_stuff_b_cb, this);
	
	BOSS_give_raise_button = new Fl_Button(20, 230, 200, 50, "Give Raise");
	BOSS_give_raise_button->callback(BOSS_give_raise_cb, this);
	
	
	BOSS_menu_back_b = new Fl_Button(10,400,100,50,"Back");
	BOSS_menu_back_b->callback(BOSS_menu_back_b_cb, this);
	B_menu_win->show();

}

void Boss_class::BOSS_give_raise_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->BOSS_give_raise_cb_i();	
}
void Boss_class::BOSS_give_raise_cb_i() {
	B_menu_win->hide();
	give_raise_func();
}

void Boss_class::BOSS_create_customer_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->BOSS_create_customer_cb_i();	
}
void Boss_class::BOSS_create_customer_cb_i() {
	B_menu_win->hide();
	BOSS_create_C_func();
}

void Boss_class::BOSS_create_SA_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->BOSS_create_SA_cb_i();	
}
void Boss_class::BOSS_create_SA_cb_i() {
	B_menu_win->hide();
	BOSS_create_SA_func();
}

void Boss_class::BOSS_menu_back_b_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->BOSS_menu_back_b_cb_i();
}
void Boss_class::BOSS_menu_back_b_cb_i() {
	B_menu_win->hide();
	raise_stuff_func();
}

void Boss_class::BOSS_raise_stuff_b_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->BOSS_menu_back_b_cb_i();
}
void Boss_class::BOSS_raise_stuff_b_cb_i() {
	B_menu_win->hide();
	raise_stuff_func();
}

// CREATE SA WINDOW

void Boss_class::create_SA_b_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->create_SA_b_cb_i();	
}
void Boss_class::create_SA_b_cb_i() {
	cout << "DO STUFF TO CREATE SA HERE!" << endl;	
	B_menu_win->show();
	create_SA_window->hide();
}

void Boss_class::create_SA_back_b_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->create_SA_back_b_cb_i();	
}
void Boss_class::create_SA_back_b_cb_i() { 
	create_SA_window->hide();
	B_menu_win->show();
}

void Boss_class::BOSS_create_SA_func() {
	
	create_SA_window = new Fl_Window(500,500,"Create Sales Associate");
	
	new_SA_name_input = new Fl_Input(110,25,250,30,"Name ");
	new_SA_pass_input = new Fl_Input(110,75,250,30,"Password ");
	
	create_SA_b = new Fl_Button(20,450,100,40, "Create ");
	create_SA_b->callback(create_SA_b_cb, this);
	create_SA_back_b = new Fl_Button(140,450,100,40, "Back ");
	create_SA_back_b->callback(create_SA_back_b_cb, this);
	create_SA_window->show();

}

// CREATE CUSTOMER STUFF

void Boss_class::BOSS_create_C_func() {

	BOSS_create_c_win = new Fl_Window(500,500,"Create Customer");
	
	BOSS_CC_name_input = new Fl_Input(110,25,250,30,"Name ");
	BOSS_CC_phone_input = new Fl_Input(110,75,250,30,"Phone ");
	BOSS_CC_email_input = new Fl_Input(110,125,250,30,"Email ");
	BOSS_CC_pass_input = new Fl_Input(110,175,250,30,"Password ");
	
	BOSS_CC_button = new Fl_Button(20,450,100,40,"Create ");
	BOSS_CC_button->callback(BOSS_CC_button_cb, this);
	BOSS_CC_cancel_button = new Fl_Button(140,450,100,40,"Cancel ");
	BOSS_CC_cancel_button->callback(BOSS_CC_cancel_button_cb, this);
	
	BOSS_create_c_win->show();
	
}

void Boss_class::BOSS_CC_button_cb(Fl_Widget* w,void* v) {
	((Boss_class*)v)->BOSS_CC_button_cb_i();	
}
void Boss_class::BOSS_CC_button_cb_i() {
	cout << "CREATE CUSTOMER STUFF GOES HERE!" << endl;
	BOSS_create_c_win->hide();
	B_menu_win->show();
}

void Boss_class::BOSS_CC_cancel_button_cb(Fl_Widget* w,void* v) {
	((Boss_class*)v)->BOSS_CC_cancel_button_cb_i();	
}
void Boss_class::BOSS_CC_cancel_button_cb_i() {
	BOSS_create_c_win->hide();
	B_menu_win->show();
}


// JUNU raises and statistics and stuff

//
// Show how to change submenu names and menu item names
//    Click on Edit -> Change to change the contents of the Edit menu.
//
void Change_CB(Fl_Widget *w, void *) {
    Fl_Menu_Bar *menu = (Fl_Menu_Bar*)w;
    Fl_Menu_Item *p;
    // Change submenu name
    p = (Fl_Menu_Item*)menu->find_item("Print_shop_Status/Process");
    if ( p ) p->label("Still_Processing");
    // Change item name
    p = (Fl_Menu_Item*)menu->find_item("Print_Shop_Status/Still_Processing");
    if ( p ) p->label("Processing_Done");
}
void Default_Password_CB(Fl_Widget *, void *) 
{
    exit(0);
}

void Add_Name_CB(Fl_Widget *, void *) 
{
    exit(0);
}

//void Sales_Associate_Decision_CB(Fl_Widget *, void *) 
//{
//    exit(0);
//}

void Give_Raise_CB(Fl_Widget *, void *) 
{
    exit(0);
}

void No_Raise_CB(Fl_Widget *, void *) 
{
    exit(0);
}



void Boss_class::raise_stuff_func() {
    Fl_Window *win = new Fl_Window(500,200);
    Fl_Menu_Bar *menu = new Fl_Menu_Bar(0,0,600,25);
    menu->add("Hire_Sales_Associate/Default Password",FL_CTRL+'h' ,Default_Password_CB);
    menu->add("Hire_Sales_Associate/Add_Name", FL_CTRL+'a', Add_Name_CB);

   // menu->add("Check_Raise_Request/Sales_Associate_Decision", FL_CTRL+'c', Sales_Associate_Decision_CB);
    menu->add("Check_Raise_Request/Sales_Associate_Decision/Give_Raise", FL_CTRL+'G', Give_Raise_CB);   
    menu->add("Check_Raise_Request/Sales_Associate_Decision/No__Raise", FL_CTRL+'N', No_Raise_CB);
   

    

  
    menu->add("Print_Shop_Status/Still_Processing");
    menu->add("Print_Shop_Status/Processing_Done");
    win->end();
    win->show();
    
}
    
// Window for giving raises

void Boss_class::give_raise_func() {

	give_raise_window = new Fl_Window(500,500,"Give Raise");
								
    give_raise_back = new Fl_Button(60,450,100,40,"Back");
	give_raise_back->callback(give_raise_back_cb, this);
	
	give_raise_enter = new Fl_Button(420,450,70,40,"Enter");
	give_raise_enter->callback(give_raise_enter_cb, this);
	
	give_raise_info = new Fl_Button(420,400,70,40,"Info");
	give_raise_info->callback(give_raise_info_cb, this);
	
	give_raise_index = new Fl_Int_Input(330,450, 70,40,"Index");
	
	// Text box at top
	
	SA_list = new Fl_Multiline_Output(0,0,500,400);
	string SAs = "SA 1\nSA 2\nSA 3";
	const char* out_SAs = SAs.c_str();
	SA_list->value(out_SAs);
	
	
	give_raise_window->show();					  
	
}

 void Boss_class::give_raise_back_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->give_raise_back_callback_i();	
}
void Boss_class::give_raise_back_callback_i() {
	give_raise_window->hide();
	B_menu_win->show();
}

void Boss_class::give_raise_enter_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->give_raise_enter_callback_i();	
}
void Boss_class::give_raise_enter_callback_i() {
	give_raise_window->hide();
	B_menu_win->show();
	cout << "DO STUFF FOR APPROVING OR REJECTING RAISE HERE" << endl;
}

void Boss_class::give_raise_info_cb(Fl_Widget* w, void* v) {
	((Boss_class*)v)->give_raise_info_callback_i();	
}
void Boss_class::give_raise_info_callback_i() {
	give_raise_window->hide();
	B_menu_win->show();
	cout << "Tis isn't right" << endl;
}





	
	
