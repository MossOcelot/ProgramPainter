#include "MyForm.h"
using namespace ProgramPainter;

[STAThreadAttribute]
int Main(array<System::String^>^ args)
{
	Application::EnableVisualStyles(); // Enabling Windows XP visual effects before any controls are created
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	Application::Run(gcnew MyForm());
	return 0;
}
