#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    coursework::MyForm form;   //Project7 - name of your project
    Application::Run(% form);
 
}
