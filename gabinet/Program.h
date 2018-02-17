#pragma once

namespace gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int userid;	

	private: System::Windows::Forms::CheckBox^  chbWWorker;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dgUser;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtWLogin;
	private: System::Windows::Forms::TextBox^  txtWSurname;
	private: System::Windows::Forms::TextBox^  txtWName;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnWSearch;
	private: System::Windows::Forms::TextBox^  txtWSearch;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnCPapply;
	private: System::Windows::Forms::TextBox^  txtCPnewpassword2;
	private: System::Windows::Forms::TextBox^  txtCPnewpassword1;
	private: System::Windows::Forms::TextBox^  txtCPoldpassword;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  btnWDeleteUser;
	private: System::Windows::Forms::Button^  btnWModifyUser;
	private: System::Windows::Forms::Button^  btnWAddUser;
	private: System::Windows::Forms::GroupBox^  gbGodziny;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtP6k;

	private: System::Windows::Forms::TextBox^  txtP6p;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtP5k;

	private: System::Windows::Forms::TextBox^  txtP5p;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txtP4k;

	private: System::Windows::Forms::TextBox^  txtP4p;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtP3k;

	private: System::Windows::Forms::TextBox^  txtP3p;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtP2k;

	private: System::Windows::Forms::TextBox^  txtP2p;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtP1k;
	private: System::Windows::Forms::TextBox^  txtP1p;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  txtUSzukaj;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  btnUModyfikuj;
	private: System::Windows::Forms::Button^  btnUUsun;


	private: System::Windows::Forms::Button^  btnUDodaj;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  txtUCena;
	private: System::Windows::Forms::TextBox^  txtUCzas;
	private: System::Windows::Forms::TextBox^  txtUOpis;



	private: System::Windows::Forms::TextBox^  txtUNazwa;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::DataGridView^  dgUslugi;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  txtPUImie;
	private: System::Windows::Forms::TextBox^  txtPUNazwisko;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::DataGridView^  dgPUUslugiNowe;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::DataGridView^  dgPUUslugi;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::DataGridView^  dgPUPracownik;
	private: System::Windows::Forms::Button^  btnPUSzukaj;
	private: System::Windows::Forms::TextBox^  txtPUSzukaj;
private: System::Windows::Forms::TabPage^  tabControl5;

private: System::Windows::Forms::Button^  btnKDodaj;
private: System::Windows::Forms::Button^  btnKModyfikuj;
private: System::Windows::Forms::Button^  btnKUsun;

private: System::Windows::Forms::GroupBox^  gbKlienci;

private: System::Windows::Forms::MaskedTextBox^  txtKKod;
private: System::Windows::Forms::TextBox^  txtKMiejscowosc;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;

private: System::Windows::Forms::TextBox^  txtKUlica;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  txtKTelefon;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::TextBox^  txtKEmail;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  txtKNazwisko;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  txtKImie;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::DataGridView^  dgKlienci;



private: System::Windows::Forms::Button^  btnKSzukaj;
private: System::Windows::Forms::TextBox^  txtKSzukaj;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Button^  btnRModyfikacja;

private: System::Windows::Forms::Button^  btnRUsun;
private: System::Windows::Forms::Button^  btnRDodaj;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  txtRTerminW;

private: System::Windows::Forms::TextBox^  txtRUslugatW;
private: System::Windows::Forms::TextBox^  txtRKlientW;



private: System::Windows::Forms::DataGridView^  dgRPracownik;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  txtRPracownik;
private: System::Windows::Forms::Button^  btnRPracownik;
private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
private: System::Windows::Forms::GroupBox^  gbRGodziny;

private: System::Windows::Forms::DataGridView^  dgRUslugi;
private: System::Windows::Forms::DataGridView^  dgRKlient;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  txtRUslugi;
private: System::Windows::Forms::Button^  btnRUsluga;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  txtRKlient;
private: System::Windows::Forms::Button^  btnRKlient;




	public:
		String^ konfig = L"server=localhost;user=root;database=world;port=3306;password=lolpop123!@#;";	//ustawienie stringa do wstawienia przy polaczeniu
		Program(int user)
		{
			InitializeComponent();
			userid = user;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->btnRModyfikacja = (gcnew System::Windows::Forms::Button());
			this->btnRUsun = (gcnew System::Windows::Forms::Button());
			this->btnRDodaj = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->txtRTerminW = (gcnew System::Windows::Forms::TextBox());
			this->txtRUslugatW = (gcnew System::Windows::Forms::TextBox());
			this->txtRKlientW = (gcnew System::Windows::Forms::TextBox());
			this->dgRPracownik = (gcnew System::Windows::Forms::DataGridView());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->txtRPracownik = (gcnew System::Windows::Forms::TextBox());
			this->btnRPracownik = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->gbRGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->dgRUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->dgRKlient = (gcnew System::Windows::Forms::DataGridView());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->txtRUslugi = (gcnew System::Windows::Forms::TextBox());
			this->btnRUsluga = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtRKlient = (gcnew System::Windows::Forms::TextBox());
			this->btnRKlient = (gcnew System::Windows::Forms::Button());
			this->tabControl5 = (gcnew System::Windows::Forms::TabPage());
			this->btnKDodaj = (gcnew System::Windows::Forms::Button());
			this->btnKModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnKUsun = (gcnew System::Windows::Forms::Button());
			this->gbKlienci = (gcnew System::Windows::Forms::GroupBox());
			this->txtKKod = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtKMiejscowosc = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtKUlica = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->txtKTelefon = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtKEmail = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtKNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtKImie = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->dgKlienci = (gcnew System::Windows::Forms::DataGridView());
			this->btnKSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtKSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->txtPUImie = (gcnew System::Windows::Forms::TextBox());
			this->txtPUNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dgPUUslugiNowe = (gcnew System::Windows::Forms::DataGridView());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dgPUUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dgPUPracownik = (gcnew System::Windows::Forms::DataGridView());
			this->btnPUSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtPUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnUModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnUUsun = (gcnew System::Windows::Forms::Button());
			this->btnUDodaj = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtUCena = (gcnew System::Windows::Forms::TextBox());
			this->txtUCzas = (gcnew System::Windows::Forms::TextBox());
			this->txtUOpis = (gcnew System::Windows::Forms::TextBox());
			this->txtUNazwa = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dgUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gbGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtP6k = (gcnew System::Windows::Forms::TextBox());
			this->txtP6p = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtP5k = (gcnew System::Windows::Forms::TextBox());
			this->txtP5p = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtP4k = (gcnew System::Windows::Forms::TextBox());
			this->txtP4p = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtP3k = (gcnew System::Windows::Forms::TextBox());
			this->txtP3p = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtP2k = (gcnew System::Windows::Forms::TextBox());
			this->txtP2p = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtP1k = (gcnew System::Windows::Forms::TextBox());
			this->txtP1p = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnWDeleteUser = (gcnew System::Windows::Forms::Button());
			this->btnWModifyUser = (gcnew System::Windows::Forms::Button());
			this->btnWAddUser = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chbWWorker = (gcnew System::Windows::Forms::CheckBox());
			this->txtWLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtWSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtWName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnWSearch = (gcnew System::Windows::Forms::Button());
			this->txtWSearch = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgUser = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCPapply = (gcnew System::Windows::Forms::Button());
			this->txtCPnewpassword2 = (gcnew System::Windows::Forms::TextBox());
			this->txtCPnewpassword1 = (gcnew System::Windows::Forms::TextBox());
			this->txtCPoldpassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRPracownik))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRUslugi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRKlient))->BeginInit();
			this->tabControl5->SuspendLayout();
			this->gbKlienci->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKlienci))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugiNowe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUPracownik))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUslugi))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->gbGodziny->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUser))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabControl5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1201, 631);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->btnRModyfikacja);
			this->tabPage5->Controls->Add(this->btnRUsun);
			this->tabPage5->Controls->Add(this->btnRDodaj);
			this->tabPage5->Controls->Add(this->label38);
			this->tabPage5->Controls->Add(this->label37);
			this->tabPage5->Controls->Add(this->label36);
			this->tabPage5->Controls->Add(this->txtRTerminW);
			this->tabPage5->Controls->Add(this->txtRUslugatW);
			this->tabPage5->Controls->Add(this->txtRKlientW);
			this->tabPage5->Controls->Add(this->dgRPracownik);
			this->tabPage5->Controls->Add(this->label35);
			this->tabPage5->Controls->Add(this->txtRPracownik);
			this->tabPage5->Controls->Add(this->btnRPracownik);
			this->tabPage5->Controls->Add(this->monthCalendar1);
			this->tabPage5->Controls->Add(this->gbRGodziny);
			this->tabPage5->Controls->Add(this->dgRUslugi);
			this->tabPage5->Controls->Add(this->dgRKlient);
			this->tabPage5->Controls->Add(this->label34);
			this->tabPage5->Controls->Add(this->txtRUslugi);
			this->tabPage5->Controls->Add(this->btnRUsluga);
			this->tabPage5->Controls->Add(this->label31);
			this->tabPage5->Controls->Add(this->txtRKlient);
			this->tabPage5->Controls->Add(this->btnRKlient);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1193, 605);
			this->tabPage5->TabIndex = 5;
			this->tabPage5->Text = L"Reservations";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// btnRModyfikacja
			// 
			this->btnRModyfikacja->Enabled = false;
			this->btnRModyfikacja->Location = System::Drawing::Point(429, 390);
			this->btnRModyfikacja->Name = L"btnRModyfikacja";
			this->btnRModyfikacja->Size = System::Drawing::Size(134, 23);
			this->btnRModyfikacja->TabIndex = 22;
			this->btnRModyfikacja->Text = L"Modify";
			this->btnRModyfikacja->UseVisualStyleBackColor = true;
			this->btnRModyfikacja->Click += gcnew System::EventHandler(this, &Program::bntRModyfikacja_Click);
			// 
			// btnRUsun
			// 
			this->btnRUsun->Enabled = false;
			this->btnRUsun->Location = System::Drawing::Point(295, 390);
			this->btnRUsun->Name = L"btnRUsun";
			this->btnRUsun->Size = System::Drawing::Size(127, 23);
			this->btnRUsun->TabIndex = 21;
			this->btnRUsun->Text = L"Remove";
			this->btnRUsun->UseVisualStyleBackColor = true;
			this->btnRUsun->Click += gcnew System::EventHandler(this, &Program::btnRUsun_Click);
			// 
			// btnRDodaj
			// 
			this->btnRDodaj->Location = System::Drawing::Point(295, 349);
			this->btnRDodaj->Name = L"btnRDodaj";
			this->btnRDodaj->Size = System::Drawing::Size(268, 23);
			this->btnRDodaj->TabIndex = 20;
			this->btnRDodaj->Text = L"Add";
			this->btnRDodaj->UseVisualStyleBackColor = true;
			this->btnRDodaj->Click += gcnew System::EventHandler(this, &Program::btnRDodaj_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(292, 315);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(30, 13);
			this->label38->TabIndex = 19;
			this->label38->Text = L"Time";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(292, 289);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(43, 13);
			this->label37->TabIndex = 18;
			this->label37->Text = L"Service";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(292, 263);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(33, 13);
			this->label36->TabIndex = 17;
			this->label36->Text = L"Client";
			// 
			// txtRTerminW
			// 
			this->txtRTerminW->Location = System::Drawing::Point(393, 312);
			this->txtRTerminW->Name = L"txtRTerminW";
			this->txtRTerminW->Size = System::Drawing::Size(170, 20);
			this->txtRTerminW->TabIndex = 16;
			// 
			// txtRUslugatW
			// 
			this->txtRUslugatW->Location = System::Drawing::Point(393, 286);
			this->txtRUslugatW->Name = L"txtRUslugatW";
			this->txtRUslugatW->Size = System::Drawing::Size(170, 20);
			this->txtRUslugatW->TabIndex = 15;
			// 
			// txtRKlientW
			// 
			this->txtRKlientW->Location = System::Drawing::Point(393, 260);
			this->txtRKlientW->Name = L"txtRKlientW";
			this->txtRKlientW->Size = System::Drawing::Size(170, 20);
			this->txtRKlientW->TabIndex = 14;
			// 
			// dgRPracownik
			// 
			this->dgRPracownik->AllowUserToAddRows = false;
			this->dgRPracownik->AllowUserToOrderColumns = true;
			this->dgRPracownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRPracownik->Location = System::Drawing::Point(668, 71);
			this->dgRPracownik->Name = L"dgRPracownik";
			this->dgRPracownik->Size = System::Drawing::Size(482, 130);
			this->dgRPracownik->TabIndex = 13;
			this->dgRPracownik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRPracownik_CellClick);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(611, 45);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(53, 13);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Employee";
			// 
			// txtRPracownik
			// 
			this->txtRPracownik->Location = System::Drawing::Point(678, 42);
			this->txtRPracownik->Name = L"txtRPracownik";
			this->txtRPracownik->Size = System::Drawing::Size(99, 20);
			this->txtRPracownik->TabIndex = 11;
			// 
			// btnRPracownik
			// 
			this->btnRPracownik->Location = System::Drawing::Point(799, 42);
			this->btnRPracownik->Name = L"btnRPracownik";
			this->btnRPracownik->Size = System::Drawing::Size(74, 23);
			this->btnRPracownik->TabIndex = 10;
			this->btnRPracownik->Text = L"Search";
			this->btnRPracownik->UseVisualStyleBackColor = true;
			this->btnRPracownik->Click += gcnew System::EventHandler(this, &Program::btnRPracownik_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Enabled = false;
			this->monthCalendar1->Location = System::Drawing::Point(295, 45);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 9;
			this->monthCalendar1->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Program::monthCalendar1_DateSelected);
			// 
			// gbRGodziny
			// 
			this->gbRGodziny->Location = System::Drawing::Point(33, 37);
			this->gbRGodziny->Name = L"gbRGodziny";
			this->gbRGodziny->Size = System::Drawing::Size(224, 519);
			this->gbRGodziny->TabIndex = 8;
			this->gbRGodziny->TabStop = false;
			this->gbRGodziny->Text = L"Time";
			// 
			// dgRUslugi
			// 
			this->dgRUslugi->AllowUserToAddRows = false;
			this->dgRUslugi->AllowUserToOrderColumns = true;
			this->dgRUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRUslugi->Location = System::Drawing::Point(668, 431);
			this->dgRUslugi->Name = L"dgRUslugi";
			this->dgRUslugi->Size = System::Drawing::Size(482, 136);
			this->dgRUslugi->TabIndex = 7;
			this->dgRUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRUslugi_CellClick);
			// 
			// dgRKlient
			// 
			this->dgRKlient->AllowUserToAddRows = false;
			this->dgRKlient->AllowUserToOrderColumns = true;
			this->dgRKlient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRKlient->Location = System::Drawing::Point(668, 247);
			this->dgRKlient->Name = L"dgRKlient";
			this->dgRKlient->Size = System::Drawing::Size(482, 136);
			this->dgRKlient->TabIndex = 6;
			this->dgRKlient->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRKlient_CellClick);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(611, 403);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(43, 13);
			this->label34->TabIndex = 5;
			this->label34->Text = L"Service";
			// 
			// txtRUslugi
			// 
			this->txtRUslugi->Location = System::Drawing::Point(678, 400);
			this->txtRUslugi->Name = L"txtRUslugi";
			this->txtRUslugi->Size = System::Drawing::Size(99, 20);
			this->txtRUslugi->TabIndex = 4;
			// 
			// btnRUsluga
			// 
			this->btnRUsluga->Location = System::Drawing::Point(799, 400);
			this->btnRUsluga->Name = L"btnRUsluga";
			this->btnRUsluga->Size = System::Drawing::Size(74, 23);
			this->btnRUsluga->TabIndex = 3;
			this->btnRUsluga->Text = L"Search";
			this->btnRUsluga->UseVisualStyleBackColor = true;
			this->btnRUsluga->Click += gcnew System::EventHandler(this, &Program::txtRUsluga_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(611, 221);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(33, 13);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Client";
			// 
			// txtRKlient
			// 
			this->txtRKlient->Location = System::Drawing::Point(678, 218);
			this->txtRKlient->Name = L"txtRKlient";
			this->txtRKlient->Size = System::Drawing::Size(99, 20);
			this->txtRKlient->TabIndex = 1;
			// 
			// btnRKlient
			// 
			this->btnRKlient->Location = System::Drawing::Point(799, 218);
			this->btnRKlient->Name = L"btnRKlient";
			this->btnRKlient->Size = System::Drawing::Size(74, 23);
			this->btnRKlient->TabIndex = 0;
			this->btnRKlient->Text = L"Search";
			this->btnRKlient->UseVisualStyleBackColor = true;
			this->btnRKlient->Click += gcnew System::EventHandler(this, &Program::btnRKlient_Click);
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->btnKDodaj);
			this->tabControl5->Controls->Add(this->btnKModyfikuj);
			this->tabControl5->Controls->Add(this->btnKUsun);
			this->tabControl5->Controls->Add(this->gbKlienci);
			this->tabControl5->Controls->Add(this->dgKlienci);
			this->tabControl5->Controls->Add(this->btnKSzukaj);
			this->tabControl5->Controls->Add(this->txtKSzukaj);
			this->tabControl5->Controls->Add(this->label25);
			this->tabControl5->Location = System::Drawing::Point(4, 4);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->Padding = System::Windows::Forms::Padding(3);
			this->tabControl5->Size = System::Drawing::Size(1193, 605);
			this->tabControl5->TabIndex = 4;
			this->tabControl5->Text = L"Clients";
			this->tabControl5->UseVisualStyleBackColor = true;
			// 
			// btnKDodaj
			// 
			this->btnKDodaj->Location = System::Drawing::Point(54, 566);
			this->btnKDodaj->Name = L"btnKDodaj";
			this->btnKDodaj->Size = System::Drawing::Size(75, 23);
			this->btnKDodaj->TabIndex = 7;
			this->btnKDodaj->Text = L"Add";
			this->btnKDodaj->UseVisualStyleBackColor = true;
			this->btnKDodaj->Click += gcnew System::EventHandler(this, &Program::btnKDodaj_Click);
			// 
			// btnKModyfikuj
			// 
			this->btnKModyfikuj->Location = System::Drawing::Point(177, 566);
			this->btnKModyfikuj->Name = L"btnKModyfikuj";
			this->btnKModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnKModyfikuj->TabIndex = 6;
			this->btnKModyfikuj->Text = L"Modify";
			this->btnKModyfikuj->UseVisualStyleBackColor = true;
			this->btnKModyfikuj->Visible = false;
			this->btnKModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnKModyfikuj_Click);
			// 
			// btnKUsun
			// 
			this->btnKUsun->Location = System::Drawing::Point(291, 566);
			this->btnKUsun->Name = L"btnKUsun";
			this->btnKUsun->Size = System::Drawing::Size(75, 23);
			this->btnKUsun->TabIndex = 5;
			this->btnKUsun->Text = L"Remove";
			this->btnKUsun->UseVisualStyleBackColor = true;
			this->btnKUsun->Visible = false;
			this->btnKUsun->Click += gcnew System::EventHandler(this, &Program::btnKUsun_Click);
			// 
			// gbKlienci
			// 
			this->gbKlienci->Controls->Add(this->txtKKod);
			this->gbKlienci->Controls->Add(this->txtKMiejscowosc);
			this->gbKlienci->Controls->Add(this->label33);
			this->gbKlienci->Controls->Add(this->label32);
			this->gbKlienci->Controls->Add(this->txtKUlica);
			this->gbKlienci->Controls->Add(this->label30);
			this->gbKlienci->Controls->Add(this->txtKTelefon);
			this->gbKlienci->Controls->Add(this->label29);
			this->gbKlienci->Controls->Add(this->txtKEmail);
			this->gbKlienci->Controls->Add(this->label28);
			this->gbKlienci->Controls->Add(this->txtKNazwisko);
			this->gbKlienci->Controls->Add(this->label27);
			this->gbKlienci->Controls->Add(this->txtKImie);
			this->gbKlienci->Controls->Add(this->label26);
			this->gbKlienci->Location = System::Drawing::Point(21, 396);
			this->gbKlienci->Name = L"gbKlienci";
			this->gbKlienci->Size = System::Drawing::Size(632, 164);
			this->gbKlienci->TabIndex = 4;
			this->gbKlienci->TabStop = false;
			this->gbKlienci->Text = L"Modify clients data";
			// 
			// txtKKod
			// 
			this->txtKKod->Location = System::Drawing::Point(357, 85);
			this->txtKKod->Mask = L"00-999";
			this->txtKKod->Name = L"txtKKod";
			this->txtKKod->Size = System::Drawing::Size(100, 20);
			this->txtKKod->TabIndex = 17;
			// 
			// txtKMiejscowosc
			// 
			this->txtKMiejscowosc->Location = System::Drawing::Point(357, 115);
			this->txtKMiejscowosc->Name = L"txtKMiejscowosc";
			this->txtKMiejscowosc->Size = System::Drawing::Size(120, 20);
			this->txtKMiejscowosc->TabIndex = 16;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(283, 118);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 13);
			this->label33->TabIndex = 15;
			this->label33->Text = L"City";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(283, 88);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(63, 13);
			this->label32->TabIndex = 13;
			this->label32->Text = L"Postal code";
			// 
			// txtKUlica
			// 
			this->txtKUlica->Location = System::Drawing::Point(357, 25);
			this->txtKUlica->Name = L"txtKUlica";
			this->txtKUlica->Size = System::Drawing::Size(120, 20);
			this->txtKUlica->TabIndex = 10;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(283, 28);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(35, 13);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Street";
			// 
			// txtKTelefon
			// 
			this->txtKTelefon->Location = System::Drawing::Point(125, 115);
			this->txtKTelefon->Name = L"txtKTelefon";
			this->txtKTelefon->Size = System::Drawing::Size(120, 20);
			this->txtKTelefon->TabIndex = 8;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(19, 118);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(76, 13);
			this->label29->TabIndex = 7;
			this->label29->Text = L"Phone number";
			// 
			// txtKEmail
			// 
			this->txtKEmail->Location = System::Drawing::Point(125, 85);
			this->txtKEmail->Name = L"txtKEmail";
			this->txtKEmail->Size = System::Drawing::Size(120, 20);
			this->txtKEmail->TabIndex = 6;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(19, 88);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 13);
			this->label28->TabIndex = 5;
			this->label28->Text = L"e-mail";
			// 
			// txtKNazwisko
			// 
			this->txtKNazwisko->Location = System::Drawing::Point(125, 55);
			this->txtKNazwisko->Name = L"txtKNazwisko";
			this->txtKNazwisko->Size = System::Drawing::Size(120, 20);
			this->txtKNazwisko->TabIndex = 4;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(19, 58);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(49, 13);
			this->label27->TabIndex = 3;
			this->label27->Text = L"Surname";
			// 
			// txtKImie
			// 
			this->txtKImie->Location = System::Drawing::Point(125, 25);
			this->txtKImie->Name = L"txtKImie";
			this->txtKImie->Size = System::Drawing::Size(120, 20);
			this->txtKImie->TabIndex = 2;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(19, 28);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(35, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Name";
			// 
			// dgKlienci
			// 
			this->dgKlienci->AllowUserToAddRows = false;
			this->dgKlienci->AllowUserToOrderColumns = true;
			this->dgKlienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgKlienci->Location = System::Drawing::Point(20, 82);
			this->dgKlienci->Name = L"dgKlienci";
			this->dgKlienci->Size = System::Drawing::Size(817, 293);
			this->dgKlienci->TabIndex = 3;
			this->dgKlienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgKlienci_CellClick);
			// 
			// btnKSzukaj
			// 
			this->btnKSzukaj->Location = System::Drawing::Point(239, 19);
			this->btnKSzukaj->Name = L"btnKSzukaj";
			this->btnKSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnKSzukaj->TabIndex = 2;
			this->btnKSzukaj->Text = L"Search";
			this->btnKSzukaj->UseVisualStyleBackColor = true;
			this->btnKSzukaj->Click += gcnew System::EventHandler(this, &Program::btnKSzukaj_Click);
			// 
			// txtKSzukaj
			// 
			this->txtKSzukaj->Location = System::Drawing::Point(93, 21);
			this->txtKSzukaj->Name = L"txtKSzukaj";
			this->txtKSzukaj->Size = System::Drawing::Size(120, 20);
			this->txtKSzukaj->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(40, 24);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(36, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Client:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->txtPUImie);
			this->tabPage4->Controls->Add(this->txtPUNazwisko);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->dgPUUslugiNowe);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->dgPUUslugi);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->dgPUPracownik);
			this->tabPage4->Controls->Add(this->btnPUSzukaj);
			this->tabPage4->Controls->Add(this->txtPUSzukaj);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1193, 605);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Eployee - Services";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// txtPUImie
			// 
			this->txtPUImie->Location = System::Drawing::Point(145, 84);
			this->txtPUImie->Name = L"txtPUImie";
			this->txtPUImie->Size = System::Drawing::Size(128, 20);
			this->txtPUImie->TabIndex = 12;
			// 
			// txtPUNazwisko
			// 
			this->txtPUNazwisko->Location = System::Drawing::Point(145, 124);
			this->txtPUNazwisko->Name = L"txtPUNazwisko";
			this->txtPUNazwisko->Size = System::Drawing::Size(128, 20);
			this->txtPUNazwisko->TabIndex = 11;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(27, 84);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(35, 13);
			this->label24->TabIndex = 10;
			this->label24->Text = L"Name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(27, 127);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 13);
			this->label23->TabIndex = 9;
			this->label23->Text = L"Surname";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 217);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(122, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Add to emplyee services";
			// 
			// dgPUUslugiNowe
			// 
			this->dgPUUslugiNowe->AllowUserToAddRows = false;
			this->dgPUUslugiNowe->AllowUserToOrderColumns = true;
			this->dgPUUslugiNowe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUUslugiNowe->Location = System::Drawing::Point(18, 233);
			this->dgPUUslugiNowe->Name = L"dgPUUslugiNowe";
			this->dgPUUslugiNowe->Size = System::Drawing::Size(503, 157);
			this->dgPUUslugiNowe->TabIndex = 7;
			this->dgPUUslugiNowe->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUUslugiNowe_CellClick);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(632, 217);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(178, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Services performed by the employee";
			// 
			// dgPUUslugi
			// 
			this->dgPUUslugi->AllowUserToAddRows = false;
			this->dgPUUslugi->AllowUserToOrderColumns = true;
			this->dgPUUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUUslugi->Location = System::Drawing::Point(635, 233);
			this->dgPUUslugi->Name = L"dgPUUslugi";
			this->dgPUUslugi->Size = System::Drawing::Size(534, 157);
			this->dgPUUslugi->TabIndex = 5;
			this->dgPUUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUUslugi_CellClick);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(632, 26);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Emplyee";
			// 
			// dgPUPracownik
			// 
			this->dgPUPracownik->AllowUserToAddRows = false;
			this->dgPUPracownik->AllowUserToOrderColumns = true;
			this->dgPUPracownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUPracownik->Location = System::Drawing::Point(632, 42);
			this->dgPUPracownik->Name = L"dgPUPracownik";
			this->dgPUPracownik->Size = System::Drawing::Size(534, 157);
			this->dgPUPracownik->TabIndex = 3;
			this->dgPUPracownik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUPracownik_CellClick);
			// 
			// btnPUSzukaj
			// 
			this->btnPUSzukaj->Location = System::Drawing::Point(294, 42);
			this->btnPUSzukaj->Name = L"btnPUSzukaj";
			this->btnPUSzukaj->Size = System::Drawing::Size(103, 23);
			this->btnPUSzukaj->TabIndex = 2;
			this->btnPUSzukaj->Text = L"Serach";
			this->btnPUSzukaj->UseVisualStyleBackColor = true;
			this->btnPUSzukaj->Click += gcnew System::EventHandler(this, &Program::btnPUSzukaj_Click);
			// 
			// txtPUSzukaj
			// 
			this->txtPUSzukaj->Location = System::Drawing::Point(145, 42);
			this->txtPUSzukaj->Name = L"txtPUSzukaj";
			this->txtPUSzukaj->Size = System::Drawing::Size(128, 20);
			this->txtPUSzukaj->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(27, 42);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Emplyee";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnUModyfikuj);
			this->tabPage3->Controls->Add(this->btnUUsun);
			this->tabPage3->Controls->Add(this->btnUDodaj);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->dgUslugi);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->txtUSzukaj);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1193, 605);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Services";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnUModyfikuj
			// 
			this->btnUModyfikuj->Enabled = false;
			this->btnUModyfikuj->Location = System::Drawing::Point(159, 553);
			this->btnUModyfikuj->Name = L"btnUModyfikuj";
			this->btnUModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnUModyfikuj->TabIndex = 7;
			this->btnUModyfikuj->Text = L"Modify";
			this->btnUModyfikuj->UseVisualStyleBackColor = true;
			this->btnUModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnUModyfikuj_Click);
			// 
			// btnUUsun
			// 
			this->btnUUsun->Enabled = false;
			this->btnUUsun->Location = System::Drawing::Point(23, 553);
			this->btnUUsun->Name = L"btnUUsun";
			this->btnUUsun->Size = System::Drawing::Size(75, 23);
			this->btnUUsun->TabIndex = 6;
			this->btnUUsun->Text = L"Remove";
			this->btnUUsun->UseVisualStyleBackColor = true;
			this->btnUUsun->Click += gcnew System::EventHandler(this, &Program::btnUUsun_Click);
			// 
			// btnUDodaj
			// 
			this->btnUDodaj->Location = System::Drawing::Point(299, 553);
			this->btnUDodaj->Name = L"btnUDodaj";
			this->btnUDodaj->Size = System::Drawing::Size(75, 23);
			this->btnUDodaj->TabIndex = 5;
			this->btnUDodaj->Text = L"Add";
			this->btnUDodaj->UseVisualStyleBackColor = true;
			this->btnUDodaj->Click += gcnew System::EventHandler(this, &Program::btnUDodaj_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtUCena);
			this->groupBox3->Controls->Add(this->txtUCzas);
			this->groupBox3->Controls->Add(this->txtUOpis);
			this->groupBox3->Controls->Add(this->txtUNazwa);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Location = System::Drawing::Point(23, 107);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(395, 422);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Services:";
			// 
			// txtUCena
			// 
			this->txtUCena->Location = System::Drawing::Point(232, 68);
			this->txtUCena->Name = L"txtUCena";
			this->txtUCena->Size = System::Drawing::Size(119, 20);
			this->txtUCena->TabIndex = 7;
			// 
			// txtUCzas
			// 
			this->txtUCzas->Location = System::Drawing::Point(232, 108);
			this->txtUCzas->Name = L"txtUCzas";
			this->txtUCzas->Size = System::Drawing::Size(119, 20);
			this->txtUCzas->TabIndex = 6;
			// 
			// txtUOpis
			// 
			this->txtUOpis->Location = System::Drawing::Point(9, 182);
			this->txtUOpis->Multiline = true;
			this->txtUOpis->Name = L"txtUOpis";
			this->txtUOpis->Size = System::Drawing::Size(342, 134);
			this->txtUOpis->TabIndex = 5;
			// 
			// txtUNazwa
			// 
			this->txtUNazwa->Location = System::Drawing::Point(176, 25);
			this->txtUNazwa->Name = L"txtUNazwa";
			this->txtUNazwa->Size = System::Drawing::Size(175, 20);
			this->txtUNazwa->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 152);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 13);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Description";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 111);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(102, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Total time of service";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 68);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(31, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Price";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 28);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Name";
			// 
			// dgUslugi
			// 
			this->dgUslugi->AllowUserToAddRows = false;
			this->dgUslugi->AllowUserToOrderColumns = true;
			this->dgUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUslugi->Location = System::Drawing::Point(634, 29);
			this->dgUslugi->Name = L"dgUslugi";
			this->dgUslugi->Size = System::Drawing::Size(533, 501);
			this->dgUslugi->TabIndex = 3;
			this->dgUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUslugi_CellClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(311, 28);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Program::button5_Click);
			// 
			// txtUSzukaj
			// 
			this->txtUSzukaj->Location = System::Drawing::Point(69, 28);
			this->txtUSzukaj->Name = L"txtUSzukaj";
			this->txtUSzukaj->Size = System::Drawing::Size(200, 20);
			this->txtUSzukaj->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 29);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Service:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gbGodziny);
			this->tabPage2->Controls->Add(this->btnWDeleteUser);
			this->tabPage2->Controls->Add(this->btnWModifyUser);
			this->tabPage2->Controls->Add(this->btnWAddUser);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->btnWSearch);
			this->tabPage2->Controls->Add(this->txtWSearch);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->dgUser);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1193, 605);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Employees";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// gbGodziny
			// 
			this->gbGodziny->Controls->Add(this->groupBox4);
			this->gbGodziny->Controls->Add(this->txtP6k);
			this->gbGodziny->Controls->Add(this->txtP6p);
			this->gbGodziny->Controls->Add(this->label13);
			this->gbGodziny->Controls->Add(this->txtP5k);
			this->gbGodziny->Controls->Add(this->txtP5p);
			this->gbGodziny->Controls->Add(this->label12);
			this->gbGodziny->Controls->Add(this->txtP4k);
			this->gbGodziny->Controls->Add(this->txtP4p);
			this->gbGodziny->Controls->Add(this->label11);
			this->gbGodziny->Controls->Add(this->txtP3k);
			this->gbGodziny->Controls->Add(this->txtP3p);
			this->gbGodziny->Controls->Add(this->label10);
			this->gbGodziny->Controls->Add(this->txtP2k);
			this->gbGodziny->Controls->Add(this->txtP2p);
			this->gbGodziny->Controls->Add(this->label9);
			this->gbGodziny->Controls->Add(this->txtP1k);
			this->gbGodziny->Controls->Add(this->txtP1p);
			this->gbGodziny->Controls->Add(this->label8);
			this->gbGodziny->Location = System::Drawing::Point(21, 257);
			this->gbGodziny->Name = L"gbGodziny";
			this->gbGodziny->Size = System::Drawing::Size(1108, 239);
			this->gbGodziny->TabIndex = 9;
			this->gbGodziny->TabStop = false;
			this->gbGodziny->Text = L"Godziny pracy";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Location = System::Drawing::Point(427, 44);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(155, 143);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Use pre-defined values";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(37, 105);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10-18";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Program::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(37, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9-17";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Program::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8-16";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7-15";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// txtP6k
			// 
			this->txtP6k->Location = System::Drawing::Point(224, 174);
			this->txtP6k->Name = L"txtP6k";
			this->txtP6k->Size = System::Drawing::Size(100, 20);
			this->txtP6k->TabIndex = 17;
			// 
			// txtP6p
			// 
			this->txtP6p->Location = System::Drawing::Point(96, 174);
			this->txtP6p->Name = L"txtP6p";
			this->txtP6p->Size = System::Drawing::Size(100, 20);
			this->txtP6p->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 174);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Saturday";
			// 
			// txtP5k
			// 
			this->txtP5k->Location = System::Drawing::Point(224, 148);
			this->txtP5k->Name = L"txtP5k";
			this->txtP5k->Size = System::Drawing::Size(100, 20);
			this->txtP5k->TabIndex = 14;
			// 
			// txtP5p
			// 
			this->txtP5p->Location = System::Drawing::Point(96, 148);
			this->txtP5p->Name = L"txtP5p";
			this->txtP5p->Size = System::Drawing::Size(100, 20);
			this->txtP5p->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 148);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Friday";
			// 
			// txtP4k
			// 
			this->txtP4k->Location = System::Drawing::Point(224, 122);
			this->txtP4k->Name = L"txtP4k";
			this->txtP4k->Size = System::Drawing::Size(100, 20);
			this->txtP4k->TabIndex = 11;
			// 
			// txtP4p
			// 
			this->txtP4p->Location = System::Drawing::Point(96, 122);
			this->txtP4p->Name = L"txtP4p";
			this->txtP4p->Size = System::Drawing::Size(100, 20);
			this->txtP4p->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 122);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Thursday";
			// 
			// txtP3k
			// 
			this->txtP3k->Location = System::Drawing::Point(224, 96);
			this->txtP3k->Name = L"txtP3k";
			this->txtP3k->Size = System::Drawing::Size(100, 20);
			this->txtP3k->TabIndex = 8;
			// 
			// txtP3p
			// 
			this->txtP3p->Location = System::Drawing::Point(96, 96);
			this->txtP3p->Name = L"txtP3p";
			this->txtP3p->Size = System::Drawing::Size(100, 20);
			this->txtP3p->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Wednesday";
			// 
			// txtP2k
			// 
			this->txtP2k->Location = System::Drawing::Point(224, 70);
			this->txtP2k->Name = L"txtP2k";
			this->txtP2k->Size = System::Drawing::Size(100, 20);
			this->txtP2k->TabIndex = 5;
			// 
			// txtP2p
			// 
			this->txtP2p->Location = System::Drawing::Point(96, 70);
			this->txtP2p->Name = L"txtP2p";
			this->txtP2p->Size = System::Drawing::Size(100, 20);
			this->txtP2p->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Tuesday";
			// 
			// txtP1k
			// 
			this->txtP1k->Location = System::Drawing::Point(224, 44);
			this->txtP1k->Name = L"txtP1k";
			this->txtP1k->Size = System::Drawing::Size(100, 20);
			this->txtP1k->TabIndex = 2;
			// 
			// txtP1p
			// 
			this->txtP1p->Location = System::Drawing::Point(96, 44);
			this->txtP1p->Name = L"txtP1p";
			this->txtP1p->Size = System::Drawing::Size(100, 20);
			this->txtP1p->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Monday";
			// 
			// btnWDeleteUser
			// 
			this->btnWDeleteUser->Enabled = false;
			this->btnWDeleteUser->Location = System::Drawing::Point(34, 526);
			this->btnWDeleteUser->Name = L"btnWDeleteUser";
			this->btnWDeleteUser->Size = System::Drawing::Size(75, 23);
			this->btnWDeleteUser->TabIndex = 8;
			this->btnWDeleteUser->Text = L"Delete";
			this->btnWDeleteUser->UseVisualStyleBackColor = true;
			this->btnWDeleteUser->Click += gcnew System::EventHandler(this, &Program::btnWDeleteUser_Click);
			// 
			// btnWModifyUser
			// 
			this->btnWModifyUser->Enabled = false;
			this->btnWModifyUser->Location = System::Drawing::Point(136, 526);
			this->btnWModifyUser->Name = L"btnWModifyUser";
			this->btnWModifyUser->Size = System::Drawing::Size(75, 23);
			this->btnWModifyUser->TabIndex = 7;
			this->btnWModifyUser->Text = L"Modify";
			this->btnWModifyUser->UseVisualStyleBackColor = true;
			this->btnWModifyUser->Click += gcnew System::EventHandler(this, &Program::btnWModifyUser_Click);
			// 
			// btnWAddUser
			// 
			this->btnWAddUser->Location = System::Drawing::Point(239, 526);
			this->btnWAddUser->Name = L"btnWAddUser";
			this->btnWAddUser->Size = System::Drawing::Size(75, 23);
			this->btnWAddUser->TabIndex = 6;
			this->btnWAddUser->Text = L"Add";
			this->btnWAddUser->UseVisualStyleBackColor = true;
			this->btnWAddUser->Click += gcnew System::EventHandler(this, &Program::btnWAddUser_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chbWWorker);
			this->groupBox2->Controls->Add(this->txtWLogin);
			this->groupBox2->Controls->Add(this->txtWSurname);
			this->groupBox2->Controls->Add(this->txtWName);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(21, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(412, 163);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edit user data";
			// 
			// chbWWorker
			// 
			this->chbWWorker->AutoSize = true;
			this->chbWWorker->Location = System::Drawing::Point(224, 20);
			this->chbWWorker->Name = L"chbWWorker";
			this->chbWWorker->Size = System::Drawing::Size(72, 17);
			this->chbWWorker->TabIndex = 6;
			this->chbWWorker->Text = L"Employee";
			this->chbWWorker->UseVisualStyleBackColor = true;
			this->chbWWorker->CheckedChanged += gcnew System::EventHandler(this, &Program::chbWWorker_CheckedChanged);
			// 
			// txtWLogin
			// 
			this->txtWLogin->Location = System::Drawing::Point(82, 107);
			this->txtWLogin->Name = L"txtWLogin";
			this->txtWLogin->Size = System::Drawing::Size(100, 20);
			this->txtWLogin->TabIndex = 5;
			// 
			// txtWSurname
			// 
			this->txtWSurname->Location = System::Drawing::Point(82, 59);
			this->txtWSurname->Name = L"txtWSurname";
			this->txtWSurname->Size = System::Drawing::Size(100, 20);
			this->txtWSurname->TabIndex = 4;
			// 
			// txtWName
			// 
			this->txtWName->Location = System::Drawing::Point(82, 17);
			this->txtWName->Name = L"txtWName";
			this->txtWName->Size = System::Drawing::Size(100, 20);
			this->txtWName->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Login:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Surname:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Name:";
			// 
			// btnWSearch
			// 
			this->btnWSearch->Location = System::Drawing::Point(358, 17);
			this->btnWSearch->Name = L"btnWSearch";
			this->btnWSearch->Size = System::Drawing::Size(75, 23);
			this->btnWSearch->TabIndex = 3;
			this->btnWSearch->Text = L"Search";
			this->btnWSearch->UseVisualStyleBackColor = true;
			this->btnWSearch->Click += gcnew System::EventHandler(this, &Program::btnWSearch_Click);
			// 
			// txtWSearch
			// 
			this->txtWSearch->Location = System::Drawing::Point(103, 14);
			this->txtWSearch->Name = L"txtWSearch";
			this->txtWSearch->Size = System::Drawing::Size(100, 20);
			this->txtWSearch->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Employees";
			this->label4->Click += gcnew System::EventHandler(this, &Program::label4_Click);
			// 
			// dgUser
			// 
			this->dgUser->AllowUserToAddRows = false;
			this->dgUser->AllowUserToOrderColumns = true;
			this->dgUser->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUser->Location = System::Drawing::Point(448, 6);
			this->dgUser->Name = L"dgUser";
			this->dgUser->Size = System::Drawing::Size(681, 231);
			this->dgUser->TabIndex = 0;
			this->dgUser->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUser_CellClick);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1193, 605);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Change Password";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Program::tabPage1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnCPapply);
			this->groupBox1->Controls->Add(this->txtCPnewpassword2);
			this->groupBox1->Controls->Add(this->txtCPnewpassword1);
			this->groupBox1->Controls->Add(this->txtCPoldpassword);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(296, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(323, 185);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Change Password";
			// 
			// btnCPapply
			// 
			this->btnCPapply->Enabled = false;
			this->btnCPapply->Location = System::Drawing::Point(184, 147);
			this->btnCPapply->Name = L"btnCPapply";
			this->btnCPapply->Size = System::Drawing::Size(75, 23);
			this->btnCPapply->TabIndex = 6;
			this->btnCPapply->Text = L"Apply";
			this->btnCPapply->UseVisualStyleBackColor = true;
			this->btnCPapply->Click += gcnew System::EventHandler(this, &Program::btnCPapply_Click);
			// 
			// txtCPnewpassword2
			// 
			this->txtCPnewpassword2->Location = System::Drawing::Point(184, 107);
			this->txtCPnewpassword2->Name = L"txtCPnewpassword2";
			this->txtCPnewpassword2->Size = System::Drawing::Size(100, 20);
			this->txtCPnewpassword2->TabIndex = 5;
			this->txtCPnewpassword2->TextChanged += gcnew System::EventHandler(this, &Program::txtCPnewpassword2_TextChanged);
			// 
			// txtCPnewpassword1
			// 
			this->txtCPnewpassword1->Location = System::Drawing::Point(184, 66);
			this->txtCPnewpassword1->Name = L"txtCPnewpassword1";
			this->txtCPnewpassword1->Size = System::Drawing::Size(100, 20);
			this->txtCPnewpassword1->TabIndex = 4;
			// 
			// txtCPoldpassword
			// 
			this->txtCPoldpassword->Location = System::Drawing::Point(184, 28);
			this->txtCPoldpassword->Name = L"txtCPoldpassword";
			this->txtCPoldpassword->Size = System::Drawing::Size(100, 20);
			this->txtCPoldpassword->TabIndex = 3;
			this->txtCPoldpassword->TextChanged += gcnew System::EventHandler(this, &Program::txtCPoldpassword_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Re-enter Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"New Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Old Password";
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 753);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRPracownik))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRUslugi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRKlient))->EndInit();
			this->tabControl5->ResumeLayout(false);
			this->tabControl5->PerformLayout();
			this->gbKlienci->ResumeLayout(false);
			this->gbKlienci->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKlienci))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugiNowe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUPracownik))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUslugi))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->gbGodziny->ResumeLayout(false);
			this->gbGodziny->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUser))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//deklaracja zmiennych
		int id_rekordu; // wybranie rekordu na ktorym pracujemy - zmienna dla wszystkich siatek
		int worker_type;
		int id_usluga;  //wybranie uslugi
		int id_klient;   //wybranie klienta
		int id_pracownik;   /* wybranie pracownika*/
		String^ data_w; //wybranie daty
		String^ godzina_w; // wybranie godziny
		int id_wizyty; //wybranie wizytyy
	private: System::Void Program_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: Void btnCPapply_show() {
		// sprawdzenie czy pola nie sa puste i czy sie zgadzaja (zmiana hasla)
		if(txtCPoldpassword->Text != "" && txtCPnewpassword1->Text != "" && txtCPnewpassword2->Text == txtCPnewpassword1->Text)
		{
			btnCPapply->Enabled = true;
		}
		else {
			btnCPapply->Enabled = false;
		}
	}
	
	private: System::Void txtCPoldpassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		//wywo³anie funkcji dla przycisku
		btnCPapply_show();

	}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {

	btnCPapply_show();
}
private: System::Void txtCPnewpassword2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	btnCPapply_show();
}
private: System::Void btnCPapply_Click(System::Object^  sender, System::EventArgs^  e) {
	//zmiana hasla
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
	MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE gabinet.tbl_user SET password_1 = password('"+txtCPnewpassword1->Text+"') WHERE iduser = "+userid+" AND password_1 = password('"+txtCPoldpassword->Text+"');", laczBaze);

	try {
		laczBaze->Open();
		if (zapytanie->ExecuteNonQuery()) {
			MessageBox::Show("Password changed.");
		}
		else {
			MessageBox::Show("Wrong password.");
		}
		laczBaze->Close();

	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}

}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: Void pokazsiatke() {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT iduser, user_name AS login, name_1 , surname_1, worker FROM gabinet.tbl_user ;", laczBaze);
	try
	{
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);
		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		dgUser->DataSource = zrodlo;
		laczBaze->Close();

	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);

	}
}

		private: void szukaj_pracownikow(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
			MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT iduser, user_name AS login, name_1 , surname_1, worker FROM gabinet.tbl_user where concat(name_1, ' ' , surname_1, user_name) like '%" + pole->Text + "%';", laczBaze);
			try
			{
				MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
				moja->SelectCommand = zapytanie;
				DataTable^ tabela = gcnew DataTable();
				moja->Fill(tabela);
				BindingSource^ zrodlo = gcnew BindingSource();
				zrodlo->DataSource = tabela;
				siatka->DataSource = zrodlo;
				laczBaze->Close();

			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);

			}
			

		}

private: System::Void btnWSearch_Click(System::Object^  sender, System::EventArgs^  e){
	szukaj_pracownikow(txtWSearch, dgUser);
	dgUser->Columns[0]->Visible = false;
}
private: System::Void dgUser_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgUser->Rows[e->RowIndex]->Cells[0]->Value);

		txtWName->Text = dgUser->Rows[e->RowIndex]->Cells["name_1"]->Value->ToString();
		txtWSurname->Text = dgUser->Rows[e->RowIndex]->Cells["surname_1"]->Value->ToString();
		txtWLogin->Text = dgUser->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
		chbWWorker->Checked = Convert::ToBoolean(dgUser->Rows[e->RowIndex]->Cells["worker"]->Value);

		btnWModifyUser->Enabled = true;
		btnWDeleteUser->Enabled = true;

		if (chbWWorker->Checked) {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
			MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM gabinet.godziny WHERE uzytkownik_id=" + id_rekordu + ";", laczBaze);
			MySqlDataReader^ dane;
			try {
				laczBaze->Open();
				dane = zapytanie->ExecuteReader();
				while (dane->Read()) {
					txtP1p->Text = dane->GetString("pon_od");
					txtP1k->Text = dane->GetString("pon_do");
					txtP2k->Text = dane->GetString("wt_do");
					txtP2p->Text = dane->GetString("wt_od");
					txtP3p->Text = dane->GetString("sr_od");
					txtP3k->Text = dane->GetString("sr_do");
					txtP4p->Text = dane->GetString("czw_od");
					txtP4k->Text = dane->GetString("czw_do");
					txtP5p->Text = dane->GetString("pt_od");
					txtP5k->Text = dane->GetString("pt_do");
					txtP6p->Text = dane->GetString("sob_od");
					txtP6k->Text = dane->GetString("sob_do");
				}
				laczBaze->Close();

			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);

			}
		}
	}
}
private: System::Void btnWAddUser_Click(System::Object^  sender, System::EventArgs^  e) {
	//dodawanie uzytkownika do bazy
	if (txtWName->Text->Length < 3 || txtWSurname->Text->Length < 4 || txtWLogin->Text->Length <= 5) {
		MessageBox::Show("Fill in all the forms!");
	}
	else {
		
		uzytkownik_typ();

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try{
			
			polecenie->CommandText = "insert into gabinet.tbl_user set name_1='"+txtWName->Text+"', surname_1='"+txtWSurname->Text+"' , user_name='"+txtWLogin->Text+"', password_1=password('"+txtWLogin->Text+"'), worker = "+worker_type+"; " ;
			polecenie->ExecuteNonQuery();
			if (chbWWorker->Checked) {
				polecenie->CommandText = "insert into gabinet.godziny set uzytkownik_id=last_insert_id(), pon_od = '" + txtP1p->Text + "' , pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od= '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', czw_od = '" + txtP4p->Text + "', czw_do= '" + txtP4k->Text + "' , pt_od= '" + txtP5p->Text + "', pt_do= '" + txtP5k->Text + "', sob_od = '" + txtP6p->Text + "', sob_do= '" + txtP6k->Text + "' ; ";
				polecenie->ExecuteNonQuery();
			};
			transakcja->Commit();
			MessageBox::Show("Emplyee "+txtWLogin->Text+" has been added !");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}
	pokazsiatke();

}
private: Void uzytkownik_typ() {
			 if (chbWWorker->Checked) {
				 worker_type = 1;
			 }
			 else {
				 worker_type = 0;
			 }
		 }
private: System::Void btnWModifyUser_Click(System::Object^  sender, System::EventArgs^  e) {
	//modyfikacja danych uzytkownika

	if (txtWName->Text->Length < 3 || txtWSurname->Text->Length < 4 || txtWLogin->Text->Length <=3) {
		MessageBox::Show("Fill in all the forms!");
	}
	else {
		
		uzytkownik_typ();
	
		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;

		try {
			polecenie -> CommandText = "SELECT * FROM gabinet.godziny WHERE uzytkownik_id = "+ id_rekordu +" ;";
			MySqlDataReader^ wynik = polecenie->ExecuteReader();
			bool rezultat = wynik->HasRows;
			wynik->Close();

			polecenie->CommandText = "UPDATE gabinet.tbl_user SET name_1='" + txtWName->Text + "', surname_1='" + txtWSurname->Text + "' , user_name='" + txtWLogin->Text + "',  worker = " + worker_type + " WHERE iduser="+id_rekordu+"; ";
			polecenie->ExecuteNonQuery();

			if (rezultat == true && chbWWorker->Checked == true) {
				polecenie->CommandText = "UPDATE gabinet.godziny SET pon_od = '" + txtP1p->Text + "' , pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od= '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', czw_od = '" + txtP4p->Text + "', czw_do= '" + txtP4k->Text + "' , pt_od= '" + txtP5p->Text + "', pt_do= '" + txtP5k->Text + "', sob_od = '" + txtP6p->Text + "', sob_do= '" + txtP6k->Text + "' WHERE uzytkownik_id="+id_rekordu+"; ";
				polecenie->ExecuteNonQuery();
			}
			else if(rezultat == false && chbWWorker->Checked/*i tak sie wyokona nwett bez true bo wszystko nie 0 to 1*/){
				polecenie->CommandText = "insert into gabinet.godziny set uzytkownik_id="+id_rekordu+", pon_od = '" + txtP1p->Text + "' , pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od= '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', czw_od = '" + txtP4p->Text + "', czw_do= '" + txtP4k->Text + "' , pt_od= '" + txtP5p->Text + "', pt_do= '" + txtP5k->Text + "', sob_od = '" + txtP6p->Text + "', sob_do= '" + txtP6k->Text + "' ; ";
				polecenie->ExecuteNonQuery();

			}
			
			transakcja->Commit();
			MessageBox::Show("Emplyees' ("+txtWLogin->Text+") data was modified !");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}

	pokazsiatke();
}
		 private: Void wyczysc(Control^ zbior) {
			 for each(Control^ element in zbior->Controls)
			 {
				 if (element->GetType() == TextBox::typeid || element->GetType()==MaskedTextBox::typeid) {
					 element->Text = "";
				 }
			 }
		 }
				




private: System::Void btnWDeleteUser_Click(System::Object^  sender, System::EventArgs^  e) {

	//usuwanie uzytkownika

	if (id_rekordu==1) {
		MessageBox::Show("You can't remove the administrator!");
	}
	else {

		uzytkownik_typ();

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {
			//bardzo fajny kod pod spodem - pytanie plus odpowiedz przez okienko !!!
			if (MessageBox::Show("Are you sure?", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				

				polecenie->CommandText = "DELETE FROM gabinet.godziny WHERE uzytkownik_id=" + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();

				polecenie->CommandText = "DELETE FROM gabinet.tbl_user WHERE iduser=" + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				MessageBox::Show("Employee  "+txtWLogin->Text+" has been removed." );

			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}

	wyczysc(groupBox2);

	/*
	txtWLogin->Text = "";
	txtWName-> Text = "";
	txtWSurname->Text = "";*/
	chbWWorker -> Checked = false;
	pokazsiatke();

}

private: System::Void chbWWorker_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chbWWorker->Checked) {
		gbGodziny->Visible = true;
	}
	else {
		gbGodziny->Visible = false;
	}
	wyczysc(gbGodziny);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	czas_pracy(7);
	}
	private: void czas_pracy(int czasStart) {
		array<TextBox^> ^czas_start = { txtP1p, txtP2p, txtP3p, txtP4p, txtP5p, txtP6p };
		array<TextBox^> ^czas_stop = { txtP1k, txtP2k, txtP3k, txtP4k, txtP5k, txtP6k };
		for (int i = 0; i <= 5; i++) {
			czas_start[i]->Text = czasStart + ":00";
			czas_stop[i]->Text = czasStart + 8 + ":00";
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	czas_pracy(8);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	czas_pracy(9);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	czas_pracy(10);
}
private: void pokaz_uslugi(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM gabinet.uslugi WHERE nazwa LIKE '%" + pole->Text + "%' ORDER BY nazwa;", laczBaze);
			 try
			 {
				 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
				 moja->SelectCommand = zapytanie;
				 DataTable^ tabela = gcnew DataTable();
				 moja->Fill(tabela);
				 BindingSource^ zrodlo = gcnew BindingSource();
				 zrodlo->DataSource = tabela;
				 siatka->DataSource = zrodlo;
				 laczBaze->Close();

			 }
			 catch (Exception^ komunikat) {
				 MessageBox::Show(komunikat->Message);

			 }
			 siatka->Columns[0]->Visible = false;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	pokaz_uslugi(txtUSzukaj, dgUslugi);

}

private: System::Void btnUDodaj_Click(System::Object^  sender, System::EventArgs^  e) {	
	//dodawanie uslug do bazy
	if (txtUNazwa->Text->Length < 3 || txtUCena->Text->Length < 1 || txtUCzas->Text->Length < 5) {
		MessageBox::Show("Data is missing Fill in all the forms!");
	}
	else {

		uzytkownik_typ();
		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {
			String^ cena = txtUCena->Text->Replace(",", ".");
			polecenie->CommandText = "INSERT INTO gabinet.uslugi SET nazwa = '"+txtUNazwa->Text+"', cena = '"+cena+"', czas = '"+txtUCzas->Text+"', opis = '" + txtUOpis->Text + "' ; ";
			polecenie->ExecuteNonQuery();
			
			transakcja->Commit();
			MessageBox::Show("Service was sucsesfully!");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}
	pokaz_uslugi(txtUSzukaj, dgUslugi);
}
private: System::Void dgUslugi_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//wybranie uslugi
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgUslugi->Rows[e->RowIndex]->Cells[0]->Value);
		txtUNazwa->Text = dgUslugi->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
		txtUCena->Text = dgUslugi->Rows[e->RowIndex]->Cells["cena"]->Value->ToString();
		txtUCzas->Text = dgUslugi->Rows[e->RowIndex]->Cells["czas"]->Value->ToString();
		txtUOpis->Text = dgUslugi->Rows[e->RowIndex]->Cells["opis"]->Value->ToString();
		this->btnUModyfikuj->Enabled = true;
		this->btnUUsun->Enabled = true;


	}
}
private: System::Void btnUModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
	//modyfikacja informacji o usludze

	if (txtUNazwa->Text->Length < 3 || txtUCena->Text->Length < 1 || txtUCzas->Text->Length < 5) {
		MessageBox::Show("usupelnij dane!");
	}
	else {

		uzytkownik_typ();

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;

		try {
			String^ cena = txtUCena->Text->Replace(",", ".");

			polecenie->CommandText = "UPDATE gabinet.uslugi SET nazwa='" + txtUNazwa->Text + "', cena='" + cena + "' , czas='" + txtUCzas->Text + "',  opis = '" + txtUOpis->Text + "' WHERE uslugi_id=" + id_rekordu + "; ";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Informations about " + txtUNazwa->Text + " has been modified! ");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}

	pokaz_uslugi(txtUSzukaj, dgUslugi);

}
private: System::Void btnUUsun_Click(System::Object^  sender, System::EventArgs^  e) {

	//usuwanie uzytkownika

		

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {
			//bardzo fajny kod pod spodem - pytanie plus odpowiedz przez okienko !!!
			if (MessageBox::Show("Are you sure you want to remove this service?", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				
				polecenie->CommandText = "DELETE FROM gabinet.uslugi WHERE uslugi_id=" + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				MessageBox::Show("Service " + txtUNazwa->Text + "has been removed");

			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
		wyczysc(groupBox3);
		pokaz_uslugi(txtUSzukaj, dgUslugi);
}
private: System::Void btnPUSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj_pracownikow(txtPUSzukaj, dgPUPracownik);
	dgPUPracownik->Columns[0]->Visible = false;

}

		 private: void pokaz_uslugi() {
			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uslugi.uslugi_id, uslugi.nazwa, uslugi.cena, uslugi.czas FROM gabinet.uslugi, gabinet.uzytkownik_usluga WHERE uslugi.uslugi_id = uzytkownik_usluga.uslugi_id AND uzytkownik_usluga.uzytkownik_id = " + id_rekordu + " ORDER BY nazwa;", laczBaze);
			 try
			 {
				 MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
				 moja->SelectCommand = zapytanie;
				 DataTable^ tabela = gcnew DataTable();
				 moja->Fill(tabela);
				 BindingSource^ zrodlo = gcnew BindingSource();
				 zrodlo->DataSource = tabela;
				 dgPUUslugi->DataSource = zrodlo;
				 laczBaze->Close();

			 }
			 catch (Exception^ komunikat) {
				 MessageBox::Show(komunikat->Message);
			 }
			 dgPUUslugi->Columns[0]->Visible = false;
		 }

private: System::Void dgPUPracownik_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//wyszukanie uslug ktore wykonuje pracownik
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgPUPracownik->Rows[e->RowIndex]->Cells[0]->Value);
		txtPUImie->Text = dgPUPracownik->Rows[e->RowIndex]->Cells["name_1"]->Value->ToString();
		txtPUNazwisko->Text = dgPUPracownik->Rows[e->RowIndex]->Cells["surname_1"]->Value->ToString();
		pokaz_uslugi();
		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^	zapytanie = gcnew MySqlCommand("SELECT * FROM gabinet.uslugi ORDER BY nazwa;", laczbaze);
		try
		{
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);
			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			dgPUUslugiNowe->DataSource = zrodlo;
			laczbaze->Close();

		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
		dgPUUslugiNowe->Columns[0]->Visible = false;
	}

}
private: System::Void dgPUUslugiNowe_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//dodanie nowej uslugi do uslug wykonywanych przez pracownika

	if (e->RowIndex >= 0) {
		id_usluga = Convert::ToInt32(dgPUUslugiNowe->Rows[e->RowIndex]->Cells[0]->Value);
		if (MessageBox::Show("Do you want to add new service to employees' services?", "Attention!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

			
			MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
			MySqlCommand^ polecenie = laczbaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczbaze->Open();
			transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);
			polecenie->Connection = laczbaze;
			polecenie->Transaction = transakcja;
			try {
				String^ cena = txtUCena->Text->Replace(",", ".");
				polecenie->CommandText = "INSERT INTO gabinet.uzytkownik_usluga SET uzytkownik_id="+id_rekordu+", uslugi_id="+id_usluga+"; ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				MessageBox::Show("Service has been added to this employee!");
				
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczbaze->Close();
			pokaz_uslugi();
		}

	}

}
private: System::Void dgPUUslugi_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//usuwanie uslugi z uslug wykonywanych przez pracownika

	if (e->RowIndex >= 0) {
		id_usluga = Convert::ToInt32(dgPUUslugi->Rows[e->RowIndex]->Cells[0]->Value);
		if (MessageBox::Show("Are you sure you want to remove this service out of emplyees' performed services?", "Warning!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {


			MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
			MySqlCommand^ polecenie = laczbaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczbaze->Open();
			transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);
			polecenie->Connection = laczbaze;
			polecenie->Transaction = transakcja;
			try {
				String^ cena = txtUCena->Text->Replace(",", ".");
				polecenie->CommandText = "DELETE FROM gabinet.uzytkownik_usluga WHERE uzytkownik_id=" + id_rekordu + " AND uslugi_id=" + id_usluga + "; ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				MessageBox::Show("Service was removed!");

			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczbaze->Close();
			pokaz_uslugi();
		}

	}


}


			private: void szukaj_klientow(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
				MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
				MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT* FROM gabinet.klienci where concat(imie, ' ', nazwisko, ' ' , miejscowosc) like '%" + pole->Text + "%';", laczBaze);
				try
				{
					MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
					moja->SelectCommand = zapytanie;
					DataTable^ tabela = gcnew DataTable();
					moja->Fill(tabela);
					BindingSource^ zrodlo = gcnew BindingSource();
					zrodlo->DataSource = tabela;
					siatka->DataSource = zrodlo;
					laczBaze->Close();

				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);

				}


			}
private: System::Void btnKSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	szukaj_klientow(txtKSzukaj, dgKlienci);
	dgKlienci->Columns[0]->Visible = false;
	dgKlienci->Columns["modyfikacja"]->Visible = false;
}
private: System::Void btnKDodaj_Click(System::Object^  sender, System::EventArgs^  e) {

	//dodawanie klienta do bazy
	if (txtKImie->Text->Length < 3 || txtKImie->Text->Length < 4 ) {
		MessageBox::Show("Fill in all the forms!");
	}
	else {

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {

			polecenie->CommandText = "insert into gabinet.klienci set imie='" + txtKImie->Text + "', nazwisko='" + txtKNazwisko->Text + "', email = '"+txtKEmail->Text+"', telefon = '"+txtKTelefon->Text+"', ulica = '"+txtKUlica->Text+"', miejscowosc = '"+txtKMiejscowosc->Text+"' , poczta='"+txtKKod->Text+"'; ";
			polecenie->ExecuteNonQuery();
			
			transakcja->Commit();
			MessageBox::Show("Client "+txtKImie->Text+" has been added to database.");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}
	szukaj_klientow(txtKSzukaj, dgKlienci);


}
private: System::Void dgKlienci_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	//wybor klienta
	if (e->RowIndex >= 0) {
		id_rekordu = Convert::ToInt32(dgKlienci->Rows[e->RowIndex]->Cells[0]->Value);
		txtKImie->Text = dgKlienci->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
		txtKNazwisko->Text = dgKlienci->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
		txtKEmail->Text = dgKlienci->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
		txtKTelefon->Text = dgKlienci->Rows[e->RowIndex]->Cells["telefon"]->Value->ToString();
		txtKUlica->Text = dgKlienci->Rows[e->RowIndex]->Cells["ulica"]->Value->ToString();
		txtKKod->Text = dgKlienci->Rows[e->RowIndex]->Cells["poczta"]->Value->ToString();
		txtKMiejscowosc->Text = dgKlienci->Rows[e->RowIndex]->Cells["miejscowosc"]->Value->ToString();

		btnKModyfikuj->Visible = true;
		btnKUsun->Visible = true;

	}
}
private: System::Void btnKModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {


	//modyfikacja danych  klienta 
	if (txtKImie->Text->Length < 3 || txtKImie->Text->Length < 4) {
		MessageBox::Show("Fill in all the forms!");
	}
	else {

		
		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {

			polecenie->CommandText = "UPDATE gabinet.klienci SET imie='" + txtKImie->Text + "', nazwisko='" + txtKNazwisko->Text + "', email = '" + txtKEmail->Text + "', telefon = '" + txtKTelefon->Text + "', ulica = '" + txtKUlica->Text + "', miejscowosc = '" + txtKMiejscowosc->Text + "' , poczta='" + txtKKod->Text + "'WHERE klienci_id = "+id_rekordu+"; ";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Clients " + txtKImie->Text + " data has been modified.");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	}
	szukaj_klientow(txtKSzukaj, dgKlienci);

}
private: System::Void btnKUsun_Click(System::Object^  sender, System::EventArgs^  e) {


	//usuwanie danych  klienta 
	

		uzytkownik_typ();

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {
			if (MessageBox::Show("Are you sure? " + txtKImie ->Text+ "?", "Warning!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				polecenie->CommandText = "DELETE FROM gabinet.klienci WHERE klienci_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				MessageBox::Show("Client " + txtKImie->Text + " removed! ");
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
	
	szukaj_klientow(txtKSzukaj, dgKlienci);
	wyczysc(gbKlienci);

}
private: System::Void txtRUsluga_Click(System::Object^  sender, System::EventArgs^  e) {
	pokaz_uslugi(txtRUslugi, dgRUslugi);

}
private: System::Void btnRKlient_Click(System::Object^  sender, System::EventArgs^  e) {

	szukaj_klientow(txtRKlient, dgRKlient);
	dgRKlient->Columns[0]->Visible = 0;
	dgRKlient->Columns["modyfikacja"]->Visible = false;

}
private: System::Void btnRPracownik_Click(System::Object^  sender, System::EventArgs^  e) {

	szukaj_pracownikow(txtRPracownik, dgRPracownik);
	dgRPracownik->Columns[0]->Visible = 1;
	

}
private: System::Void dgRUslugi_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//rezerwacja wybranie uslugi
	if (e->RowIndex >= 0) {
		txtRUslugatW->Text = dgRUslugi->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();  // pobiera z datagrid komorke nazwa zapisuje ja do stringa i wsadza do text boxa
		id_usluga = Convert::ToInt32(dgRUslugi->Rows[e->RowIndex]->Cells["uslugi_id"]->Value); // pobiera z datagrid komorke uslugi_id konwertije do int32 i zapisuje w id_usluga
	}

}
private: System::Void dgRKlient_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//rezerwacja wybranie klienta
	if (e->RowIndex >= 0) {
		txtRKlientW->Text = dgRKlient->Rows[e->RowIndex]->Cells["imie"]->Value->ToString() +"  "+ dgRKlient->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
		id_klient = Convert::ToInt32(dgRKlient->Rows[e->RowIndex]->Cells["klienci_id"]->Value);
	}

}


		 private: void pokaz_terminy() {
			 String^ czas;
			 int licznik = 0;
			 String^ praca_od;
			 String^ praca_do;
			 int godzina_start;
			 int godzina_stop;
			 String^ klient = "";
			 String^ usluga = "";

			 DateTime^ dzien_tygodnia = Convert::ToDateTime(data_w);
			 int dzien = Convert::ToInt16(dzien_tygodnia->DayOfWeek);

			 gbRGodziny->Controls->Clear();


			 if (id_rekordu >= 0) {

				 id_pracownik = Convert::ToInt32(dgRPracownik->Rows[id_rekordu]->Cells["iduser"]->Value);
			 }

			 switch (dzien) {
			 case 1:
				 praca_od = "pon_od";
				 praca_do = "pon_do";
				 break;
			 case 2:
				 praca_od = "wt_od";
				 praca_do = "wt_do";
				 break;
			 case 3:
				 praca_od = "sr_od";
				 praca_do = "sr_do";
				 break;
			 case 4:
				 praca_od = "czw_od";
				 praca_do = "czw_do";
				 break;
			 case 5:
				 praca_od = "pt_od";
				 praca_do = "pt_do";
				 break;
			 case 6:
				 praca_od = "sob_od";
				 praca_do = "sob_do";
				 break;
			 case 0:
				 MessageBox::Show("wybrany pracownik nie pracuje w niedziele");
				 praca_od = "pon_od";
				 praca_do = "pon_do";
				 break;
			 }

			 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);
			 laczBaze->Open();

			 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT date_format(" + praca_od + ", '%H') AS g_start, date_format(" + praca_do + ", '%H') AS g_stop FROM gabinet.godziny WHERE uzytkownik_id = " + id_pracownik + "", laczBaze);
			 MySqlDataReader^ dane;
			 dane = zapytanie->ExecuteReader();
			 dane->Read();

			 if (dane->HasRows) {

				 godzina_start = Convert::ToInt32(dane->GetInt32("g_start"));
				 godzina_stop = Convert::ToInt32(dane->GetInt32("g_stop"));

			 }
			 laczBaze->Close();
			 txtRTerminW->Clear();

			 for (int g = godzina_start; g < godzina_stop; g++)
			 {
				 for (int m = 0; m < 60; m += 30)
				 {
					 czas = data_w + " " + g + ":" + m + ":00";
					 DateTime^ godzina_r = Convert::ToDateTime(czas);
					 String^ godzina_r2 = godzina_r->ToString("yyyy-MM-dd HH:mm:ss");


					 laczBaze->Open();

					 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT  gabinet.wizyty.wizyty_id, date_format(gabinet.wizyty.rezerwacja_od, '%H:%i') AS ROd, date_format(gabinet.wizyty.rezerwacja_do, '%H:%i') AS RDo, gabinet.uslugi.nazwa, gabinet.klienci.nazwisko FROM gabinet.wizyty, gabinet.uslugi, gabinet.klienci WHERE gabinet.wizyty.rezerwacja_od = '" + godzina_r2 + "' AND gabinet.wizyty.iduser = " + id_pracownik + " AND gabinet.uslugi.uslugi_id = gabinet.wizyty.uslugi_id AND gabinet.klienci.klienci_id = gabinet.wizyty. klienci_id ", laczBaze);
					 MySqlDataReader^ dane;
					 dane = zapytanie->ExecuteReader();
					 dane->Read();

					 System::Windows::Forms::TextBox^ poleGodziny = gcnew System::Windows::Forms::TextBox();
					 gbRGodziny->Controls->Add(poleGodziny);
					 poleGodziny->Width = 100;
					 godzina_r = Convert::ToDateTime(godzina_r2);
					 poleGodziny->BackColor = System::Drawing::Color::White;
					 if (dane->HasRows) {
						 poleGodziny->BackColor = System::Drawing::Color::Red;
						 usluga = dane->GetString("nazwa");
						 klient = dane->GetString("nazwisko");
						 poleGodziny->Tag = dane->GetString("wizyty_id");


					 }
					 else {
						 usluga = "";
						 klient = "";

					 }

					 poleGodziny->Text = String::Format(godzina_r->ToShortTimeString() + " " + usluga + " " + klient);
					 poleGodziny->Click += gcnew System::EventHandler(this, &Program::pole_klik);
					 poleGodziny->Location = System::Drawing::Point(20, 50 + (25 * licznik));
					 licznik++;
					 laczBaze->Close();

				 }
			 }
}

private: System::Void dgRPracownik_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	monthCalendar1->Enabled = true;
	id_rekordu = e->RowIndex;
	pokaz_terminy();

}
private: void pole_klik(System::Object^  sender, System::EventArgs^  e)
{
	TextBox^ pole = safe_cast<TextBox^>(sender);
	godzina_w = pole->Text;
	txtRTerminW->Text = data_w + " " + godzina_w;

	id_wizyty = Convert::ToInt16(pole->Tag);	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);
	laczBaze->Open();

	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT CONCAT(gabinet.klienci.imie, ' ', gabinet.klienci.nazwisko) AS klient, gabinet.wizyty.klienci_id, gabinet.wizyty.iduser, gabinet.wizyty.uslugi_id, gabinet.uslugi.nazwa FROM gabinet.wizyty, gabinet.klienci, gabinet.uslugi WHERE gabinet.wizyty.wizyty_id = " + id_wizyty + " AND gabinet.klienci.klienci_id = gabinet.wizyty.klienci_id AND gabinet.uslugi.uslugi_id = gabinet.wizyty.uslugi_id;", laczBaze);
	MySqlDataReader^ dane;
	dane = zapytanie->ExecuteReader();
	dane->Read();

	if (dane->HasRows) {
		txtRKlientW->Text = dane->GetString("klient");
		txtRUslugatW->Text = dane->GetString("nazwa");

		id_usluga = dane->GetInt16("uslugi_id");
		id_klient = dane->GetInt16("klienci_id");
		id_pracownik = dane->GetInt16("iduser");
	}
	laczBaze->Close();
	if (pole->BackColor == System::Drawing::Color::Red) {
		btnRUsun->Enabled = true;
		btnRModyfikacja->Enabled = true;
	}
	else{
		btnRUsun->Enabled = 0;
		btnRModyfikacja->Enabled = 0;
	}
}

private: System::Void monthCalendar1_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	data_w = String::Format(e->Start.ToShortDateString());
	txtRTerminW->Text = data_w;
	pokaz_terminy();


	
}
private: System::Void btnRDodaj_Click(System::Object^  sender, System::EventArgs^  e) {


	//dodawanie rezerwacji do bazy
	if (  id_klient<= 0 || id_usluga <= 0 || id_pracownik<= 0 || txtRTerminW->Text ->Length < 14 ) {
		MessageBox::Show("Fill in all the forms!");
	}
	else {

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {

			DateTime^ rezerwacja_od = Convert::ToDateTime(data_w + " " + godzina_w);
			
			String^ godz_od = rezerwacja_od->ToString("yyyy-MM-dd HH:mm:ss"); // datatime w sql oczekuje prawie wszystkiego tylko nie formatu gdzie data jest przedzielona kropkami
			
			polecenie->CommandText = "INSERT INTO gabinet.wizyty SET klienci_id="+id_klient+", uslugi_id="+id_usluga+", iduser="+id_pracownik+", rezerwacja_od= '"+ godz_od +"', rezerwacja_do='" + godz_od + "', status = 'OCZEKUJE'; ";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Reservation is set up!");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
		pokaz_terminy();
	}
	
}
private: System::Void bntRModyfikacja_Click(System::Object^  sender, System::EventArgs^  e) {


	//modyfikacja rezerwacji 
	if (id_klient <= 0 || id_usluga <= 0 || id_pracownik <= 0 || txtRTerminW->Text->Length < 14) {
		MessageBox::Show("Fill in all the forms!");
	}
	else {

		MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
		MySqlCommand^ polecenie = laczbaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczbaze->Open();
		transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczbaze;
		polecenie->Transaction = transakcja;
		try {


			polecenie->CommandText = "UPDATE gabinet.wizyty SET klienci_id=" + id_klient + ", uslugi_id=" + id_usluga + ", iduser=" + id_pracownik + ", status = 'OCZEKUJE' WHERE wizyty_id = "+id_wizyty+" ; ";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Reservation has been modified modified!");
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczbaze->Close();
		pokaz_terminy();
	}

}

private: System::Void btnRUsun_Click(System::Object^  sender, System::EventArgs^  e) {


	//usuwanie terminu rezerwacji


	uzytkownik_typ();

	MySqlConnection^ laczbaze = gcnew MySqlConnection(konfig);
	MySqlCommand^ polecenie = laczbaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczbaze->Open();
	transakcja = laczbaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczbaze;
	polecenie->Transaction = transakcja;
	try {
		if (MessageBox::Show("Are you sure? ", "Warning!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			polecenie->CommandText = "DELETE FROM gabinet.wizyty WHERE wizyty_id = " + id_wizyty + "; ";
			polecenie->ExecuteNonQuery();

			transakcja->Commit();
			MessageBox::Show("Reservation was removed!!! ");
		}
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
		transakcja->Rollback();

	}
	laczbaze->Close();
	pokaz_terminy();
}
};
}