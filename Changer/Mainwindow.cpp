#include "Mainwindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Mainwindow(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Mercury::Mainwindow mainwindow;
	Application::Run(%mainwindow);
}
