#include "logowanie1.h"
#include "Program.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	gabinet::logowanie form;
	Application::Run(%form);
		return 0;

}


