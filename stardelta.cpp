#include "stardelta.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	circuitsmyform::stardelta form;
	Application::Run(% form);
}

