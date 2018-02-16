#pragma once
#include "Program.h"
#include "C:\Program Files\MySQL\MySQL Server 5.7\include\mysql.h"

namespace gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	
	/// <summary>
	/// Podsumowanie informacji o logowanie
	/// </summary>
	public ref class logowanie : public System::Windows::Forms::Form
	{
	public:
		logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnLogIn;
	protected:

	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtUser;
	private: System::Windows::Forms::TextBox^  txtPassword;

	protected:


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnLogIn
			// 
			this->btnLogIn->Location = System::Drawing::Point(45, 160);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(75, 23);
			this->btnLogIn->TabIndex = 0;
			this->btnLogIn->Text = L"Log In";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &logowanie::btnLogIn_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(172, 160);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &logowanie::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"User:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(172, 58);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 20);
			this->txtUser->TabIndex = 4;
			this->txtUser->Text = L"admin";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(172, 98);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(100, 20);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->Text = L"123";
			// 
			// logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogIn);
			this->Name = L"logowanie";
			this->Text = L"logowanie";
			this->Load += gcnew System::EventHandler(this, &logowanie::logowanie_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

private: System::Void btnLogIn_Click(System::Object^  sender, System::EventArgs^  e)
{
	String^ konfig = L"server=localhost;user=root;database=world;port=3306;password=lolpop123!@#;";	//ustawienie stringa do wstawienia przy polaczeniu
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfig);	//wstawienie stringa  i ustanowienie polaczenia
	MySqlCommand^ zapytanie = gcnew MySqlCommand("select iduser from gabinet.tbl_user where user_name='"+txtUser->Text+"' and password_1= password('"+txtPassword->Text+"');", laczBaze);
	MySqlDataReader^ odczytanie;
	try
	{
		laczBaze->Open();
		odczytanie = zapytanie->ExecuteReader();


			if (odczytanie->Read()){
				int userid = odczytanie->GetInt32(0);
				this->Hide();
				Program^ program = gcnew Program(userid);
				program->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("bledna  nazwa uzytkownika lub niepoprawne haslo");
			}
	}
	catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	
	laczBaze->Close();

	
}


private: System::Void logowanie_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
