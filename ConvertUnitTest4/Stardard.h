#pragma once
#include <string.h>
#include <cmath>
#include "MyClass.h"
#using <System.dll>
#using <System.Net.dll>
#using <System.Net.Http.dll>
namespace Stardard_mode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Http;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Stardard : public System::Windows::Forms::Form
	{
	private:
		String^ selectedValueLength1;
		String^ selectedValueLength2;
		length^ myLength = gcnew length();
		volume^ myVolume = gcnew volume();
		area^ myArea = gcnew area();
		speed^ mySpeed = gcnew speed();
		weightAndMass^ myWeight = gcnew weightAndMass();
		Number^ myNumber = gcnew Number("Hexa");
		double numberProgrammer1;
		double numberProgrammer2;
		String^ Type = "Hexa";
		String^ operatorProgrammer;
		double myValue;
		String^ state = "positive";
		String^ selectedValueVolume1;
		String^ selectedValueVolume2;
		String^ selectedValueArea1;
		String^ selectedValueArea2;
		String^ selectedValueWeight1;
		String^ selectedValueWeight2;
		String^ selectedValueSpeed1;
		String^ selectedValueSpeed2;
		String^ selectedKeyAPI1;
		String^ selectedKeyAPI2;
		double StardardCalculation;
		double num1;
		double result = 0.0;
		bool calculated = false;
		double API_value_1;
		double API_value_2;
		String^ operation = "";
		array<double>^ memory_result_stardard = gcnew array<double>(7);
		Uri^ apiUrl;
		HttpClient^ client;
		HttpResponseMessage^ response;
	private: System::Windows::Forms::TextBox^ txtHistoryStardard;
	private: System::Windows::Forms::TextBox^ txtMode;
	private: System::Windows::Forms::Panel^ VolumePanel;
	private: System::Windows::Forms::Button^ btn9_Volume;
	private: System::Windows::Forms::Button^ btn8_Volume;
	private: System::Windows::Forms::Button^ btn7_Volume;
	private: System::Windows::Forms::Button^ btn6_Volume;
	private: System::Windows::Forms::Button^ btn5_Volume;
	private: System::Windows::Forms::Button^ btn4_Volume;
	private: System::Windows::Forms::Button^ btn3_Volume;
	private: System::Windows::Forms::Button^ btn2_Volume;
	private: System::Windows::Forms::Button^ btn1_Volume;
	private: System::Windows::Forms::Button^ btnPoint_Volume;
	private: System::Windows::Forms::Button^ btn0_Volume;
	private: System::Windows::Forms::Button^ btnDel_Volume;
	private: System::Windows::Forms::Button^ btnCE_Volume;
	private: System::Windows::Forms::ComboBox^ cbbOutputVolume;
	private: System::Windows::Forms::TextBox^ txtOutputVolume;
	private: System::Windows::Forms::ComboBox^ cbbInputVolume;
	private: System::Windows::Forms::TextBox^ txtInputVolume;
	private: System::Windows::Forms::Button^ btnSwapVolume;
	private: System::Windows::Forms::Panel^ LengthPanel;
	private: System::Windows::Forms::Button^ btnSwapLength;
	private: System::Windows::Forms::Button^ btn9Length;
	private: System::Windows::Forms::Button^ btn8Length;
	private: System::Windows::Forms::Button^ btn7Length;
	private: System::Windows::Forms::Button^ btn6Length;
	private: System::Windows::Forms::Button^ btn5Length;
	private: System::Windows::Forms::Button^ btn4Length;
	private: System::Windows::Forms::Button^ btn3Length;
	private: System::Windows::Forms::Button^ btn2Length;
	private: System::Windows::Forms::Button^ btn1Length;
	private: System::Windows::Forms::Button^ btnPointLength;
	private: System::Windows::Forms::Button^ btn0Length;
	private: System::Windows::Forms::Button^ btnDelLength;
	private: System::Windows::Forms::Button^ btnCELength;
	private: System::Windows::Forms::ComboBox^ cbbOutputLength;
	private: System::Windows::Forms::TextBox^ txtOutputLength;
	private: System::Windows::Forms::ComboBox^ cbbInputLength;
	private: System::Windows::Forms::TextBox^ txtInputLength;
private: System::Windows::Forms::Panel^ WeightPanel;
private: System::Windows::Forms::Button^ btnSwapWeight;
private: System::Windows::Forms::Button^ btn9Weight;
private: System::Windows::Forms::Button^ btn8Weight;
private: System::Windows::Forms::Button^ btn7Weight;
private: System::Windows::Forms::Button^ btn6Weight;
private: System::Windows::Forms::Button^ btn5Weight;
private: System::Windows::Forms::Button^ btn4Weight;
private: System::Windows::Forms::Button^ btn3Weight;
private: System::Windows::Forms::Button^ btn2Weight;
private: System::Windows::Forms::Button^ btn1Weight;
private: System::Windows::Forms::Button^ btnPointWeight;
private: System::Windows::Forms::Button^ btn0Weight;
private: System::Windows::Forms::Button^ btnDelWeight;
private: System::Windows::Forms::Button^ btnCEWeight;
private: System::Windows::Forms::ComboBox^ cbbOutputWeight;
private: System::Windows::Forms::TextBox^ txtOutputWeight;
private: System::Windows::Forms::ComboBox^ cbbInputWeight;
private: System::Windows::Forms::TextBox^ txtInputWeight;
private: System::Windows::Forms::Panel^ AreaPanel;
private: System::Windows::Forms::Button^ btnSwapArea;
private: System::Windows::Forms::Button^ btn9Area;
private: System::Windows::Forms::Button^ btn8Area;
private: System::Windows::Forms::Button^ btn7Area;
private: System::Windows::Forms::Button^ btn6Area;
private: System::Windows::Forms::Button^ btn5Area;
private: System::Windows::Forms::Button^ btn4Area;
private: System::Windows::Forms::Button^ btn3Area;
private: System::Windows::Forms::Button^ btn2Area;
private: System::Windows::Forms::Button^ btn1Area;
private: System::Windows::Forms::Button^ btnPointArea;
private: System::Windows::Forms::Button^ btn0Area;
private: System::Windows::Forms::Button^ btnDelArea;
private: System::Windows::Forms::Button^ btnCEArea;
private: System::Windows::Forms::ComboBox^ cbbOutputArea;
private: System::Windows::Forms::TextBox^ txtOutputArea;
private: System::Windows::Forms::ComboBox^ cbbInputArea;
private: System::Windows::Forms::TextBox^ txtInputArea;
private: System::Windows::Forms::Panel^ SpeedPanel;
private: System::Windows::Forms::Button^ btnSwapSpeed;
private: System::Windows::Forms::Button^ btn9Speed;
private: System::Windows::Forms::Button^ btn8Speed;
private: System::Windows::Forms::Button^ btn7Speed;
private: System::Windows::Forms::Button^ btn6Speed;
private: System::Windows::Forms::Button^ btn5Speed;
private: System::Windows::Forms::Button^ btn4Speed;
private: System::Windows::Forms::Button^ btn3Speed;
private: System::Windows::Forms::Button^ btn2Speed;
private: System::Windows::Forms::Button^ btn1Speed;
private: System::Windows::Forms::Button^ btnPointSpeed;
private: System::Windows::Forms::Button^ btn0Speed;
private: System::Windows::Forms::Button^ btnDelSpeed;
private: System::Windows::Forms::Button^ btnCESpeed;
private: System::Windows::Forms::ComboBox^ cbbOutputSpeed;
private: System::Windows::Forms::TextBox^ txtOutputSpeed;
private: System::Windows::Forms::ComboBox^ cbbInputSpeed;
private: System::Windows::Forms::TextBox^ txtInputSpeed;
private: System::Windows::Forms::Panel^ CurrencyPanel;
private: System::Windows::Forms::Button^ btnSwapCurrency;
private: System::Windows::Forms::Button^ btn9Currency;
private: System::Windows::Forms::Button^ btn8Currency;
private: System::Windows::Forms::Button^ btn7Currency;
private: System::Windows::Forms::Button^ btn6Currency;
private: System::Windows::Forms::Button^ btn5Currency;
private: System::Windows::Forms::Button^ btn4Currency;
private: System::Windows::Forms::Button^ btn3Currency;
private: System::Windows::Forms::Button^ btn2Currency;
private: System::Windows::Forms::Button^ btn1Currency;
private: System::Windows::Forms::Button^ btnPointCurrency;
private: System::Windows::Forms::Button^ btn0Currency;
private: System::Windows::Forms::Button^ btnDelCurrency;
private: System::Windows::Forms::Button^ btnCECurrency;
private: System::Windows::Forms::ComboBox^ cbbOutputCurrency;
private: System::Windows::Forms::TextBox^ txtOutputCurrency;
private: System::Windows::Forms::ComboBox^ cbbInputCurrency;
private: System::Windows::Forms::Panel^ ProgramPanel;

private: System::Windows::Forms::TextBox^ txtOctal;
private: System::Windows::Forms::TextBox^ txtHexa;
private: System::Windows::Forms::TextBox^ txtBinary;
private: System::Windows::Forms::TextBox^ txtResultProgrammer;
private: System::Windows::Forms::TextBox^ txtDecimal;
private: System::Windows::Forms::Button^ btnEqualProgrammer;

private: System::Windows::Forms::Button^ btnDevideProgrammer;

private: System::Windows::Forms::Button^ btnMultiProgrammer;

private: System::Windows::Forms::Button^ btnSubtractProgrammer;


private: System::Windows::Forms::Button^ btnDelProgrammer;
private: System::Windows::Forms::Button^ btnPlusProgrammer;



private: System::Windows::Forms::Button^ btn3Programmer;

private: System::Windows::Forms::Button^ btn6Programmer;

private: System::Windows::Forms::Button^ btn9Programmer;

private: System::Windows::Forms::Button^ btnCEProgrammer;
private: System::Windows::Forms::Button^ btn0Programmer;



private: System::Windows::Forms::Button^ btn2Programmer;




private: System::Windows::Forms::Button^ btn5Programmer;

private: System::Windows::Forms::Button^ btn8Programmer;

private: System::Windows::Forms::Button^ btnShiftRight;




private: System::Windows::Forms::Button^ btn1Programmer;

private: System::Windows::Forms::Button^ btn4Programmer;

private: System::Windows::Forms::Button^ btn7Programmer;

private: System::Windows::Forms::Button^ btnShiftLeft;


private: System::Windows::Forms::Button^ btnFProgrammer;

private: System::Windows::Forms::Button^ btnEProgrammer;

private: System::Windows::Forms::Button^ btnDProgrammer;

private: System::Windows::Forms::Button^ btnCProgrammer;

private: System::Windows::Forms::Button^ btnBProgrammer;

private: System::Windows::Forms::Button^ btnAProgrammer;
private: System::Windows::Forms::Button^ btnPositiveNegativeProgrammer;

private: System::Windows::Forms::Button^ btnPointProgrammer;
private: System::Windows::Forms::Button^ btnREV3;


private: System::Windows::Forms::Button^ btnREV2;

private: System::Windows::Forms::Button^ btnREV1;
private: System::Windows::Forms::RadioButton^ btnChooseBinary;
private: System::Windows::Forms::RadioButton^ btnChooseDecimal;
private: System::Windows::Forms::RadioButton^ btnChooseOctal;
private: System::Windows::Forms::Panel^ ScientificPanel_;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ btnC__Scientific;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ btnDel__Scientific;
private: System::Windows::Forms::TextBox^ txtDisplay;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ btnPlus__Scientific;
private: System::Windows::Forms::Button^ btn9__Scientific;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ btn8__Scientific;
private: System::Windows::Forms::Button^ btn4__Scientific;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ btn7__Scientific;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;

private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;





private: System::Windows::Forms::RadioButton^ btnChooseHexa;
private: System::Windows::Forms::TextBox^ txtInputProgrammer;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::ListBox^ listBox1;




private: System::Windows::Forms::TextBox^ txtInputCurrency;
	public:
		Stardard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Stardard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ stardardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programmerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dateCalculationToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ MenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stardard_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ scientific_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ programmer_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ date_calculation_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ converterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ currency_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ volume_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ length_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ weight_and_mass_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ area_mode;
	private: System::Windows::Forms::ToolStripMenuItem^ speed_mode;
	private: System::Windows::Forms::Panel^ StardardPanel;
	private: System::Windows::Forms::TextBox^ txtResultStardard;
	private: System::Windows::Forms::Button^ btnMS_Stardard;
	private: System::Windows::Forms::Button^ btnMSub_Stardard;
	private: System::Windows::Forms::Button^ btnMPlus_Stardard;
	private: System::Windows::Forms::Button^ btnMR_Stardard;
	private: System::Windows::Forms::Button^ btnMC_Stardard;
	private: System::Windows::Forms::Button^ btnDelete_Stardard;
	private: System::Windows::Forms::Button^ btnC_Stardard;
	private: System::Windows::Forms::Button^ btnCE_Stardard;
	private: System::Windows::Forms::Button^ btnPercent_Stardard;
	private: System::Windows::Forms::Button^ btnEqual_Stardard;
	private: System::Windows::Forms::Button^ btnPoint_Stardard;
	private: System::Windows::Forms::Button^ btnNumber0_Stardard;
	private: System::Windows::Forms::Button^ btnPositiveNegative_Stardard;
	private: System::Windows::Forms::Button^ btnPlus_Stardard;
	private: System::Windows::Forms::Button^ btnNumber3_Stardard;
	private: System::Windows::Forms::Button^ btnNumber2_Stardard;
	private: System::Windows::Forms::Button^ btnNumber1_Stardard;
	private: System::Windows::Forms::Button^ btnSubtract_Stardard;
	private: System::Windows::Forms::Button^ btnNumber6_Stardard;
	private: System::Windows::Forms::Button^ btnNumber5_Stardard;
	private: System::Windows::Forms::Button^ btnNumber4_Stardard;
	private: System::Windows::Forms::Button^ btnMulti_Stardard;
	private: System::Windows::Forms::Button^ btnNumber9_Stardard;
	private: System::Windows::Forms::Button^ btnNumber8_Stardard;
	private: System::Windows::Forms::Button^ btnNumber7_Stardard;
	private: System::Windows::Forms::Button^ btnDevide_Stardard;
	private: System::Windows::Forms::Button^ btnSqrt_Stardard;
	private: System::Windows::Forms::Button^ btnSquare_Stardard;
	private: System::Windows::Forms::Button^ btnInverse_Stardard;
private: System::Windows::Forms::TextBox^ txtResultStardard1;
protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->stardardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programmerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->MenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stardard_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientific_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programmer_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->converterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->currency_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->volume_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->length_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->weight_and_mass_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->area_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->speed_mode = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StardardPanel = (gcnew System::Windows::Forms::Panel());
			this->txtHistoryStardard = (gcnew System::Windows::Forms::TextBox());
			this->txtResultStardard1 = (gcnew System::Windows::Forms::TextBox());
			this->btnEqual_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnPoint_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber0_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnPositiveNegative_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnPlus_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber3_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber2_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber1_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnSubtract_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber6_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber5_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber4_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnMulti_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber9_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber8_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnNumber7_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnDevide_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnSqrt_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnSquare_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnInverse_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnDelete_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnC_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnCE_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnPercent_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnMS_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnMSub_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnMPlus_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnMR_Stardard = (gcnew System::Windows::Forms::Button());
			this->btnMC_Stardard = (gcnew System::Windows::Forms::Button());
			this->txtResultStardard = (gcnew System::Windows::Forms::TextBox());
			this->ProgramPanel = (gcnew System::Windows::Forms::Panel());
			this->txtInputProgrammer = (gcnew System::Windows::Forms::TextBox());
			this->btnChooseDecimal = (gcnew System::Windows::Forms::RadioButton());
			this->btnChooseOctal = (gcnew System::Windows::Forms::RadioButton());
			this->btnChooseHexa = (gcnew System::Windows::Forms::RadioButton());
			this->btnChooseBinary = (gcnew System::Windows::Forms::RadioButton());
			this->btnPositiveNegativeProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnEqualProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnDevideProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnMultiProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnSubtractProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnDelProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnPlusProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnPointProgrammer = (gcnew System::Windows::Forms::Button());
			this->btn3Programmer = (gcnew System::Windows::Forms::Button());
			this->btn6Programmer = (gcnew System::Windows::Forms::Button());
			this->btn9Programmer = (gcnew System::Windows::Forms::Button());
			this->btnCEProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnREV3 = (gcnew System::Windows::Forms::Button());
			this->btn0Programmer = (gcnew System::Windows::Forms::Button());
			this->btn2Programmer = (gcnew System::Windows::Forms::Button());
			this->btn5Programmer = (gcnew System::Windows::Forms::Button());
			this->btn8Programmer = (gcnew System::Windows::Forms::Button());
			this->btnShiftRight = (gcnew System::Windows::Forms::Button());
			this->btnREV2 = (gcnew System::Windows::Forms::Button());
			this->btn1Programmer = (gcnew System::Windows::Forms::Button());
			this->btn4Programmer = (gcnew System::Windows::Forms::Button());
			this->btn7Programmer = (gcnew System::Windows::Forms::Button());
			this->btnShiftLeft = (gcnew System::Windows::Forms::Button());
			this->btnREV1 = (gcnew System::Windows::Forms::Button());
			this->btnFProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnEProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnDProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnCProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnBProgrammer = (gcnew System::Windows::Forms::Button());
			this->btnAProgrammer = (gcnew System::Windows::Forms::Button());
			this->txtDecimal = (gcnew System::Windows::Forms::TextBox());
			this->txtOctal = (gcnew System::Windows::Forms::TextBox());
			this->txtHexa = (gcnew System::Windows::Forms::TextBox());
			this->txtBinary = (gcnew System::Windows::Forms::TextBox());
			this->txtResultProgrammer = (gcnew System::Windows::Forms::TextBox());
			this->CurrencyPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSwapCurrency = (gcnew System::Windows::Forms::Button());
			this->btn9Currency = (gcnew System::Windows::Forms::Button());
			this->btn8Currency = (gcnew System::Windows::Forms::Button());
			this->btn7Currency = (gcnew System::Windows::Forms::Button());
			this->btn6Currency = (gcnew System::Windows::Forms::Button());
			this->btn5Currency = (gcnew System::Windows::Forms::Button());
			this->btn4Currency = (gcnew System::Windows::Forms::Button());
			this->btn3Currency = (gcnew System::Windows::Forms::Button());
			this->btn2Currency = (gcnew System::Windows::Forms::Button());
			this->btn1Currency = (gcnew System::Windows::Forms::Button());
			this->btnPointCurrency = (gcnew System::Windows::Forms::Button());
			this->btn0Currency = (gcnew System::Windows::Forms::Button());
			this->btnDelCurrency = (gcnew System::Windows::Forms::Button());
			this->btnCECurrency = (gcnew System::Windows::Forms::Button());
			this->cbbOutputCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->txtOutputCurrency = (gcnew System::Windows::Forms::TextBox());
			this->cbbInputCurrency = (gcnew System::Windows::Forms::ComboBox());
			this->txtInputCurrency = (gcnew System::Windows::Forms::TextBox());
			this->AreaPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSwapArea = (gcnew System::Windows::Forms::Button());
			this->btn9Area = (gcnew System::Windows::Forms::Button());
			this->btn8Area = (gcnew System::Windows::Forms::Button());
			this->btn7Area = (gcnew System::Windows::Forms::Button());
			this->btn6Area = (gcnew System::Windows::Forms::Button());
			this->btn5Area = (gcnew System::Windows::Forms::Button());
			this->btn4Area = (gcnew System::Windows::Forms::Button());
			this->btn3Area = (gcnew System::Windows::Forms::Button());
			this->btn2Area = (gcnew System::Windows::Forms::Button());
			this->btn1Area = (gcnew System::Windows::Forms::Button());
			this->btnPointArea = (gcnew System::Windows::Forms::Button());
			this->btn0Area = (gcnew System::Windows::Forms::Button());
			this->btnDelArea = (gcnew System::Windows::Forms::Button());
			this->btnCEArea = (gcnew System::Windows::Forms::Button());
			this->cbbOutputArea = (gcnew System::Windows::Forms::ComboBox());
			this->txtOutputArea = (gcnew System::Windows::Forms::TextBox());
			this->cbbInputArea = (gcnew System::Windows::Forms::ComboBox());
			this->txtInputArea = (gcnew System::Windows::Forms::TextBox());
			this->WeightPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSwapWeight = (gcnew System::Windows::Forms::Button());
			this->btn9Weight = (gcnew System::Windows::Forms::Button());
			this->btn8Weight = (gcnew System::Windows::Forms::Button());
			this->btn7Weight = (gcnew System::Windows::Forms::Button());
			this->btn6Weight = (gcnew System::Windows::Forms::Button());
			this->btn5Weight = (gcnew System::Windows::Forms::Button());
			this->btn4Weight = (gcnew System::Windows::Forms::Button());
			this->btn3Weight = (gcnew System::Windows::Forms::Button());
			this->btn2Weight = (gcnew System::Windows::Forms::Button());
			this->btn1Weight = (gcnew System::Windows::Forms::Button());
			this->btnPointWeight = (gcnew System::Windows::Forms::Button());
			this->btn0Weight = (gcnew System::Windows::Forms::Button());
			this->btnDelWeight = (gcnew System::Windows::Forms::Button());
			this->btnCEWeight = (gcnew System::Windows::Forms::Button());
			this->cbbOutputWeight = (gcnew System::Windows::Forms::ComboBox());
			this->txtOutputWeight = (gcnew System::Windows::Forms::TextBox());
			this->cbbInputWeight = (gcnew System::Windows::Forms::ComboBox());
			this->txtInputWeight = (gcnew System::Windows::Forms::TextBox());
			this->txtMode = (gcnew System::Windows::Forms::TextBox());
			this->VolumePanel = (gcnew System::Windows::Forms::Panel());
			this->btnSwapVolume = (gcnew System::Windows::Forms::Button());
			this->btn9_Volume = (gcnew System::Windows::Forms::Button());
			this->btn8_Volume = (gcnew System::Windows::Forms::Button());
			this->btn7_Volume = (gcnew System::Windows::Forms::Button());
			this->btn6_Volume = (gcnew System::Windows::Forms::Button());
			this->btn5_Volume = (gcnew System::Windows::Forms::Button());
			this->btn4_Volume = (gcnew System::Windows::Forms::Button());
			this->btn3_Volume = (gcnew System::Windows::Forms::Button());
			this->btn2_Volume = (gcnew System::Windows::Forms::Button());
			this->btn1_Volume = (gcnew System::Windows::Forms::Button());
			this->btnPoint_Volume = (gcnew System::Windows::Forms::Button());
			this->btn0_Volume = (gcnew System::Windows::Forms::Button());
			this->btnDel_Volume = (gcnew System::Windows::Forms::Button());
			this->btnCE_Volume = (gcnew System::Windows::Forms::Button());
			this->cbbOutputVolume = (gcnew System::Windows::Forms::ComboBox());
			this->txtOutputVolume = (gcnew System::Windows::Forms::TextBox());
			this->cbbInputVolume = (gcnew System::Windows::Forms::ComboBox());
			this->txtInputVolume = (gcnew System::Windows::Forms::TextBox());
			this->LengthPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSwapLength = (gcnew System::Windows::Forms::Button());
			this->btn9Length = (gcnew System::Windows::Forms::Button());
			this->btn8Length = (gcnew System::Windows::Forms::Button());
			this->btn7Length = (gcnew System::Windows::Forms::Button());
			this->btn6Length = (gcnew System::Windows::Forms::Button());
			this->btn5Length = (gcnew System::Windows::Forms::Button());
			this->btn4Length = (gcnew System::Windows::Forms::Button());
			this->btn3Length = (gcnew System::Windows::Forms::Button());
			this->btn2Length = (gcnew System::Windows::Forms::Button());
			this->btn1Length = (gcnew System::Windows::Forms::Button());
			this->btnPointLength = (gcnew System::Windows::Forms::Button());
			this->btn0Length = (gcnew System::Windows::Forms::Button());
			this->btnDelLength = (gcnew System::Windows::Forms::Button());
			this->btnCELength = (gcnew System::Windows::Forms::Button());
			this->cbbOutputLength = (gcnew System::Windows::Forms::ComboBox());
			this->txtOutputLength = (gcnew System::Windows::Forms::TextBox());
			this->cbbInputLength = (gcnew System::Windows::Forms::ComboBox());
			this->txtInputLength = (gcnew System::Windows::Forms::TextBox());
			this->SpeedPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSwapSpeed = (gcnew System::Windows::Forms::Button());
			this->btn9Speed = (gcnew System::Windows::Forms::Button());
			this->btn8Speed = (gcnew System::Windows::Forms::Button());
			this->btn7Speed = (gcnew System::Windows::Forms::Button());
			this->btn6Speed = (gcnew System::Windows::Forms::Button());
			this->btn5Speed = (gcnew System::Windows::Forms::Button());
			this->btn4Speed = (gcnew System::Windows::Forms::Button());
			this->btn3Speed = (gcnew System::Windows::Forms::Button());
			this->btn2Speed = (gcnew System::Windows::Forms::Button());
			this->btn1Speed = (gcnew System::Windows::Forms::Button());
			this->btnPointSpeed = (gcnew System::Windows::Forms::Button());
			this->btn0Speed = (gcnew System::Windows::Forms::Button());
			this->btnDelSpeed = (gcnew System::Windows::Forms::Button());
			this->btnCESpeed = (gcnew System::Windows::Forms::Button());
			this->cbbOutputSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->txtOutputSpeed = (gcnew System::Windows::Forms::TextBox());
			this->cbbInputSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->txtInputSpeed = (gcnew System::Windows::Forms::TextBox());
			this->ScientificPanel_ = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->btnC__Scientific = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnDel__Scientific = (gcnew System::Windows::Forms::Button());
			this->btnPlus__Scientific = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn9__Scientific = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn8__Scientific = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->btn4__Scientific = (gcnew System::Windows::Forms::Button());
			this->btn7__Scientific = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->StardardPanel->SuspendLayout();
			this->ProgramPanel->SuspendLayout();
			this->CurrencyPanel->SuspendLayout();
			this->AreaPanel->SuspendLayout();
			this->WeightPanel->SuspendLayout();
			this->VolumePanel->SuspendLayout();
			this->LengthPanel->SuspendLayout();
			this->SpeedPanel->SuspendLayout();
			this->ScientificPanel_->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(212, 28);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(211, 24);
			this->toolStripMenuItem1->Text = L"toolStripMenuItem1";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->stardardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->programmerToolStripMenuItem, this->dateCalculationToolStripMenuItem
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(187, 100);
			// 
			// stardardToolStripMenuItem
			// 
			this->stardardToolStripMenuItem->Name = L"stardardToolStripMenuItem";
			this->stardardToolStripMenuItem->Size = System::Drawing::Size(186, 24);
			this->stardardToolStripMenuItem->Text = L"Stardard";
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(186, 24);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			// 
			// programmerToolStripMenuItem
			// 
			this->programmerToolStripMenuItem->Name = L"programmerToolStripMenuItem";
			this->programmerToolStripMenuItem->Size = System::Drawing::Size(186, 24);
			this->programmerToolStripMenuItem->Text = L"Programmer";
			// 
			// dateCalculationToolStripMenuItem
			// 
			this->dateCalculationToolStripMenuItem->Name = L"dateCalculationToolStripMenuItem";
			this->dateCalculationToolStripMenuItem->Size = System::Drawing::Size(186, 24);
			this->dateCalculationToolStripMenuItem->Text = L"Date calculation";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->MenuItem, this->converterToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1120, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MenuItem
			// 
			this->MenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->stardard_mode,
					this->scientific_mode, this->programmer_mode
			});
			this->MenuItem->Name = L"MenuItem";
			this->MenuItem->Size = System::Drawing::Size(90, 24);
			this->MenuItem->Text = L"Calculator";
			// 
			// stardard_mode
			// 
			this->stardard_mode->Name = L"stardard_mode";
			this->stardard_mode->Size = System::Drawing::Size(175, 26);
			this->stardard_mode->Text = L"Stardard";
			this->stardard_mode->Click += gcnew System::EventHandler(this, &Stardard::stardardToolStripMenuItem1_Click);
			// 
			// scientific_mode
			// 
			this->scientific_mode->Name = L"scientific_mode";
			this->scientific_mode->Size = System::Drawing::Size(175, 26);
			this->scientific_mode->Text = L"Scientific";
			this->scientific_mode->Click += gcnew System::EventHandler(this, &Stardard::scientific_mode_Click);
			// 
			// programmer_mode
			// 
			this->programmer_mode->Name = L"programmer_mode";
			this->programmer_mode->Size = System::Drawing::Size(175, 26);
			this->programmer_mode->Text = L"Programmer";
			this->programmer_mode->Click += gcnew System::EventHandler(this, &Stardard::programmer_mode_Click);
			// 
			// converterToolStripMenuItem
			// 
			this->converterToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->currency_mode,
					this->volume_mode, this->length_mode, this->weight_and_mass_mode, this->area_mode, this->speed_mode
			});
			this->converterToolStripMenuItem->Name = L"converterToolStripMenuItem";
			this->converterToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->converterToolStripMenuItem->Text = L"Converter";
			// 
			// currency_mode
			// 
			this->currency_mode->Name = L"currency_mode";
			this->currency_mode->Size = System::Drawing::Size(205, 26);
			this->currency_mode->Text = L"Currency";
			this->currency_mode->Click += gcnew System::EventHandler(this, &Stardard::currency_mode_Click);
			// 
			// volume_mode
			// 
			this->volume_mode->Name = L"volume_mode";
			this->volume_mode->Size = System::Drawing::Size(205, 26);
			this->volume_mode->Text = L"Volume";
			this->volume_mode->Click += gcnew System::EventHandler(this, &Stardard::volume_mode_Click);
			// 
			// length_mode
			// 
			this->length_mode->Name = L"length_mode";
			this->length_mode->Size = System::Drawing::Size(205, 26);
			this->length_mode->Text = L"Length";
			this->length_mode->Click += gcnew System::EventHandler(this, &Stardard::length_mode_Click);
			// 
			// weight_and_mass_mode
			// 
			this->weight_and_mass_mode->Name = L"weight_and_mass_mode";
			this->weight_and_mass_mode->Size = System::Drawing::Size(205, 26);
			this->weight_and_mass_mode->Text = L"Weight and mass";
			this->weight_and_mass_mode->Click += gcnew System::EventHandler(this, &Stardard::weight_and_mass_mode_Click);
			// 
			// area_mode
			// 
			this->area_mode->Name = L"area_mode";
			this->area_mode->Size = System::Drawing::Size(205, 26);
			this->area_mode->Text = L"Area";
			this->area_mode->Click += gcnew System::EventHandler(this, &Stardard::area_mode_Click);
			// 
			// speed_mode
			// 
			this->speed_mode->Name = L"speed_mode";
			this->speed_mode->Size = System::Drawing::Size(205, 26);
			this->speed_mode->Text = L"Speed";
			this->speed_mode->Click += gcnew System::EventHandler(this, &Stardard::speed_mode_Click);
			// 
			// StardardPanel
			// 
			this->StardardPanel->Controls->Add(this->txtHistoryStardard);
			this->StardardPanel->Controls->Add(this->txtResultStardard1);
			this->StardardPanel->Controls->Add(this->btnEqual_Stardard);
			this->StardardPanel->Controls->Add(this->btnPoint_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber0_Stardard);
			this->StardardPanel->Controls->Add(this->btnPositiveNegative_Stardard);
			this->StardardPanel->Controls->Add(this->btnPlus_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber3_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber2_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber1_Stardard);
			this->StardardPanel->Controls->Add(this->btnSubtract_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber6_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber5_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber4_Stardard);
			this->StardardPanel->Controls->Add(this->btnMulti_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber9_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber8_Stardard);
			this->StardardPanel->Controls->Add(this->btnNumber7_Stardard);
			this->StardardPanel->Controls->Add(this->btnDevide_Stardard);
			this->StardardPanel->Controls->Add(this->btnSqrt_Stardard);
			this->StardardPanel->Controls->Add(this->btnSquare_Stardard);
			this->StardardPanel->Controls->Add(this->btnInverse_Stardard);
			this->StardardPanel->Controls->Add(this->btnDelete_Stardard);
			this->StardardPanel->Controls->Add(this->btnC_Stardard);
			this->StardardPanel->Controls->Add(this->btnCE_Stardard);
			this->StardardPanel->Controls->Add(this->btnPercent_Stardard);
			this->StardardPanel->Controls->Add(this->btnMS_Stardard);
			this->StardardPanel->Controls->Add(this->btnMSub_Stardard);
			this->StardardPanel->Controls->Add(this->btnMPlus_Stardard);
			this->StardardPanel->Controls->Add(this->btnMR_Stardard);
			this->StardardPanel->Controls->Add(this->btnMC_Stardard);
			this->StardardPanel->Controls->Add(this->txtResultStardard);
			this->StardardPanel->Location = System::Drawing::Point(194, 31);
			this->StardardPanel->Name = L"StardardPanel";
			this->StardardPanel->Size = System::Drawing::Size(499, 407);
			this->StardardPanel->TabIndex = 3;
			// 
			// txtHistoryStardard
			// 
			this->txtHistoryStardard->Location = System::Drawing::Point(354, 3);
			this->txtHistoryStardard->Multiline = true;
			this->txtHistoryStardard->Name = L"txtHistoryStardard";
			this->txtHistoryStardard->Size = System::Drawing::Size(142, 401);
			this->txtHistoryStardard->TabIndex = 32;
			this->txtHistoryStardard->Text = L"History";
			// 
			// txtResultStardard1
			// 
			this->txtResultStardard1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtResultStardard1->Location = System::Drawing::Point(3, 42);
			this->txtResultStardard1->Multiline = true;
			this->txtResultStardard1->Name = L"txtResultStardard1";
			this->txtResultStardard1->Size = System::Drawing::Size(313, 31);
			this->txtResultStardard1->TabIndex = 31;
			// 
			// btnEqual_Stardard
			// 
			this->btnEqual_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqual_Stardard->Location = System::Drawing::Point(237, 357);
			this->btnEqual_Stardard->Name = L"btnEqual_Stardard";
			this->btnEqual_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnEqual_Stardard->TabIndex = 30;
			this->btnEqual_Stardard->Text = L"=";
			this->btnEqual_Stardard->UseVisualStyleBackColor = true;
			this->btnEqual_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnEqual_Stardard_Click);
			// 
			// btnPoint_Stardard
			// 
			this->btnPoint_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPoint_Stardard->Location = System::Drawing::Point(159, 357);
			this->btnPoint_Stardard->Name = L"btnPoint_Stardard";
			this->btnPoint_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnPoint_Stardard->TabIndex = 29;
			this->btnPoint_Stardard->Text = L".";
			this->btnPoint_Stardard->UseVisualStyleBackColor = true;
			this->btnPoint_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnPoint_Stardard_Click);
			// 
			// btnNumber0_Stardard
			// 
			this->btnNumber0_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber0_Stardard->Location = System::Drawing::Point(81, 357);
			this->btnNumber0_Stardard->Name = L"btnNumber0_Stardard";
			this->btnNumber0_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber0_Stardard->TabIndex = 28;
			this->btnNumber0_Stardard->Text = L"0";
			this->btnNumber0_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber0_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber0_Stardard_Click);
			// 
			// btnPositiveNegative_Stardard
			// 
			this->btnPositiveNegative_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPositiveNegative_Stardard->Location = System::Drawing::Point(3, 357);
			this->btnPositiveNegative_Stardard->Name = L"btnPositiveNegative_Stardard";
			this->btnPositiveNegative_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnPositiveNegative_Stardard->TabIndex = 27;
			this->btnPositiveNegative_Stardard->Text = L"+⁄-";
			this->btnPositiveNegative_Stardard->UseVisualStyleBackColor = true;
			this->btnPositiveNegative_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnPositiveNegative_Stardard_Click);
			// 
			// btnPlus_Stardard
			// 
			this->btnPlus_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus_Stardard->Location = System::Drawing::Point(237, 310);
			this->btnPlus_Stardard->Name = L"btnPlus_Stardard";
			this->btnPlus_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnPlus_Stardard->TabIndex = 26;
			this->btnPlus_Stardard->Text = L"+";
			this->btnPlus_Stardard->UseVisualStyleBackColor = true;
			this->btnPlus_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnPlus_Stardard_Click);
			// 
			// btnNumber3_Stardard
			// 
			this->btnNumber3_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber3_Stardard->Location = System::Drawing::Point(159, 310);
			this->btnNumber3_Stardard->Name = L"btnNumber3_Stardard";
			this->btnNumber3_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber3_Stardard->TabIndex = 25;
			this->btnNumber3_Stardard->Text = L"3";
			this->btnNumber3_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber3_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber3_Stardard_Click);
			// 
			// btnNumber2_Stardard
			// 
			this->btnNumber2_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber2_Stardard->Location = System::Drawing::Point(81, 310);
			this->btnNumber2_Stardard->Name = L"btnNumber2_Stardard";
			this->btnNumber2_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber2_Stardard->TabIndex = 24;
			this->btnNumber2_Stardard->Text = L"2";
			this->btnNumber2_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber2_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber2_Stardard_Click);
			// 
			// btnNumber1_Stardard
			// 
			this->btnNumber1_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber1_Stardard->Location = System::Drawing::Point(3, 310);
			this->btnNumber1_Stardard->Name = L"btnNumber1_Stardard";
			this->btnNumber1_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber1_Stardard->TabIndex = 23;
			this->btnNumber1_Stardard->Text = L"1";
			this->btnNumber1_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber1_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber1_Stardard_Click);
			// 
			// btnSubtract_Stardard
			// 
			this->btnSubtract_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract_Stardard->Location = System::Drawing::Point(237, 263);
			this->btnSubtract_Stardard->Name = L"btnSubtract_Stardard";
			this->btnSubtract_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnSubtract_Stardard->TabIndex = 22;
			this->btnSubtract_Stardard->Text = L"-";
			this->btnSubtract_Stardard->UseVisualStyleBackColor = true;
			this->btnSubtract_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnSubtract_Stardard_Click);
			// 
			// btnNumber6_Stardard
			// 
			this->btnNumber6_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber6_Stardard->Location = System::Drawing::Point(159, 263);
			this->btnNumber6_Stardard->Name = L"btnNumber6_Stardard";
			this->btnNumber6_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber6_Stardard->TabIndex = 21;
			this->btnNumber6_Stardard->Text = L"6";
			this->btnNumber6_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber6_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber6_Stardard_Click);
			// 
			// btnNumber5_Stardard
			// 
			this->btnNumber5_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber5_Stardard->Location = System::Drawing::Point(81, 263);
			this->btnNumber5_Stardard->Name = L"btnNumber5_Stardard";
			this->btnNumber5_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber5_Stardard->TabIndex = 20;
			this->btnNumber5_Stardard->Text = L"5";
			this->btnNumber5_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber5_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber5_Stardard_Click);
			// 
			// btnNumber4_Stardard
			// 
			this->btnNumber4_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber4_Stardard->Location = System::Drawing::Point(3, 263);
			this->btnNumber4_Stardard->Name = L"btnNumber4_Stardard";
			this->btnNumber4_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber4_Stardard->TabIndex = 19;
			this->btnNumber4_Stardard->Text = L"4";
			this->btnNumber4_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber4_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber4_Stardard_Click);
			// 
			// btnMulti_Stardard
			// 
			this->btnMulti_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMulti_Stardard->Location = System::Drawing::Point(237, 216);
			this->btnMulti_Stardard->Name = L"btnMulti_Stardard";
			this->btnMulti_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnMulti_Stardard->TabIndex = 18;
			this->btnMulti_Stardard->Text = L"*";
			this->btnMulti_Stardard->UseVisualStyleBackColor = true;
			this->btnMulti_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnMulti_Stardard_Click);
			// 
			// btnNumber9_Stardard
			// 
			this->btnNumber9_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber9_Stardard->Location = System::Drawing::Point(159, 216);
			this->btnNumber9_Stardard->Name = L"btnNumber9_Stardard";
			this->btnNumber9_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber9_Stardard->TabIndex = 17;
			this->btnNumber9_Stardard->Text = L"9";
			this->btnNumber9_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber9_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber9_Stardard_Click);
			// 
			// btnNumber8_Stardard
			// 
			this->btnNumber8_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber8_Stardard->Location = System::Drawing::Point(81, 216);
			this->btnNumber8_Stardard->Name = L"btnNumber8_Stardard";
			this->btnNumber8_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber8_Stardard->TabIndex = 16;
			this->btnNumber8_Stardard->Text = L"8";
			this->btnNumber8_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber8_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber8_Stardard_Click);
			// 
			// btnNumber7_Stardard
			// 
			this->btnNumber7_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNumber7_Stardard->Location = System::Drawing::Point(3, 216);
			this->btnNumber7_Stardard->Name = L"btnNumber7_Stardard";
			this->btnNumber7_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnNumber7_Stardard->TabIndex = 15;
			this->btnNumber7_Stardard->Text = L"7";
			this->btnNumber7_Stardard->UseVisualStyleBackColor = true;
			this->btnNumber7_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnNumber7_Stardard_Click);
			// 
			// btnDevide_Stardard
			// 
			this->btnDevide_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDevide_Stardard->Location = System::Drawing::Point(237, 169);
			this->btnDevide_Stardard->Name = L"btnDevide_Stardard";
			this->btnDevide_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnDevide_Stardard->TabIndex = 14;
			this->btnDevide_Stardard->Text = L"÷";
			this->btnDevide_Stardard->UseVisualStyleBackColor = true;
			this->btnDevide_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnDevide_Stardard_Click);
			// 
			// btnSqrt_Stardard
			// 
			this->btnSqrt_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrt_Stardard->Location = System::Drawing::Point(159, 169);
			this->btnSqrt_Stardard->Name = L"btnSqrt_Stardard";
			this->btnSqrt_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnSqrt_Stardard->TabIndex = 13;
			this->btnSqrt_Stardard->Text = L"√x";
			this->btnSqrt_Stardard->UseVisualStyleBackColor = true;
			this->btnSqrt_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnSqrt_Stardard_Click);
			// 
			// btnSquare_Stardard
			// 
			this->btnSquare_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSquare_Stardard->Location = System::Drawing::Point(81, 169);
			this->btnSquare_Stardard->Name = L"btnSquare_Stardard";
			this->btnSquare_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnSquare_Stardard->TabIndex = 12;
			this->btnSquare_Stardard->Text = L"x^2";
			this->btnSquare_Stardard->UseVisualStyleBackColor = true;
			this->btnSquare_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnSquare_Stardard_Click);
			// 
			// btnInverse_Stardard
			// 
			this->btnInverse_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInverse_Stardard->Location = System::Drawing::Point(3, 169);
			this->btnInverse_Stardard->Name = L"btnInverse_Stardard";
			this->btnInverse_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnInverse_Stardard->TabIndex = 11;
			this->btnInverse_Stardard->Text = L"1/x";
			this->btnInverse_Stardard->UseVisualStyleBackColor = true;
			this->btnInverse_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnInverse_Stardard_Click);
			// 
			// btnDelete_Stardard
			// 
			this->btnDelete_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete_Stardard->Location = System::Drawing::Point(237, 122);
			this->btnDelete_Stardard->Name = L"btnDelete_Stardard";
			this->btnDelete_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnDelete_Stardard->TabIndex = 10;
			this->btnDelete_Stardard->Text = L"del";
			this->btnDelete_Stardard->UseVisualStyleBackColor = true;
			this->btnDelete_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnDelete_Stardard_Click);
			// 
			// btnC_Stardard
			// 
			this->btnC_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC_Stardard->Location = System::Drawing::Point(159, 122);
			this->btnC_Stardard->Name = L"btnC_Stardard";
			this->btnC_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnC_Stardard->TabIndex = 9;
			this->btnC_Stardard->Text = L"C";
			this->btnC_Stardard->UseVisualStyleBackColor = true;
			this->btnC_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnC_Stardard_Click);
			// 
			// btnCE_Stardard
			// 
			this->btnCE_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE_Stardard->Location = System::Drawing::Point(81, 122);
			this->btnCE_Stardard->Name = L"btnCE_Stardard";
			this->btnCE_Stardard->Size = System::Drawing::Size(79, 48);
			this->btnCE_Stardard->TabIndex = 8;
			this->btnCE_Stardard->Text = L"CE";
			this->btnCE_Stardard->UseVisualStyleBackColor = true;
			this->btnCE_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnCE_Stardard_Click);
			// 
			// btnPercent_Stardard
			// 
			this->btnPercent_Stardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPercent_Stardard->Location = System::Drawing::Point(2, 122);
			this->btnPercent_Stardard->Name = L"btnPercent_Stardard";
			this->btnPercent_Stardard->Size = System::Drawing::Size(80, 48);
			this->btnPercent_Stardard->TabIndex = 7;
			this->btnPercent_Stardard->Text = L"%";
			this->btnPercent_Stardard->UseVisualStyleBackColor = true;
			this->btnPercent_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnPercent_Stardard_Click);
			// 
			// btnMS_Stardard
			// 
			this->btnMS_Stardard->Location = System::Drawing::Point(254, 81);
			this->btnMS_Stardard->Name = L"btnMS_Stardard";
			this->btnMS_Stardard->Size = System::Drawing::Size(62, 30);
			this->btnMS_Stardard->TabIndex = 5;
			this->btnMS_Stardard->TabStop = false;
			this->btnMS_Stardard->Text = L"MS";
			this->btnMS_Stardard->UseVisualStyleBackColor = true;
			// 
			// btnMSub_Stardard
			// 
			this->btnMSub_Stardard->Location = System::Drawing::Point(182, 81);
			this->btnMSub_Stardard->Name = L"btnMSub_Stardard";
			this->btnMSub_Stardard->Size = System::Drawing::Size(66, 30);
			this->btnMSub_Stardard->TabIndex = 4;
			this->btnMSub_Stardard->TabStop = false;
			this->btnMSub_Stardard->Text = L"M-";
			this->btnMSub_Stardard->UseVisualStyleBackColor = true;
			this->btnMSub_Stardard->Click += gcnew System::EventHandler(this, &Stardard::btnMSub_Stardard_Click);
			// 
			// btnMPlus_Stardard
			// 
			this->btnMPlus_Stardard->Location = System::Drawing::Point(118, 81);
			this->btnMPlus_Stardard->Name = L"btnMPlus_Stardard";
			this->btnMPlus_Stardard->Size = System::Drawing::Size(58, 30);
			this->btnMPlus_Stardard->TabIndex = 3;
			this->btnMPlus_Stardard->TabStop = false;
			this->btnMPlus_Stardard->Text = L"M+";
			this->btnMPlus_Stardard->UseVisualStyleBackColor = true;
			// 
			// btnMR_Stardard
			// 
			this->btnMR_Stardard->Location = System::Drawing::Point(56, 81);
			this->btnMR_Stardard->Name = L"btnMR_Stardard";
			this->btnMR_Stardard->Size = System::Drawing::Size(56, 30);
			this->btnMR_Stardard->TabIndex = 2;
			this->btnMR_Stardard->TabStop = false;
			this->btnMR_Stardard->Text = L"MR";
			this->btnMR_Stardard->UseVisualStyleBackColor = true;
			// 
			// btnMC_Stardard
			// 
			this->btnMC_Stardard->Location = System::Drawing::Point(2, 81);
			this->btnMC_Stardard->Name = L"btnMC_Stardard";
			this->btnMC_Stardard->Size = System::Drawing::Size(48, 30);
			this->btnMC_Stardard->TabIndex = 1;
			this->btnMC_Stardard->TabStop = false;
			this->btnMC_Stardard->Text = L"MC";
			this->btnMC_Stardard->UseVisualStyleBackColor = true;
			// 
			// txtResultStardard
			// 
			this->txtResultStardard->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtResultStardard->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultStardard->Location = System::Drawing::Point(3, 3);
			this->txtResultStardard->Name = L"txtResultStardard";
			this->txtResultStardard->Size = System::Drawing::Size(313, 38);
			this->txtResultStardard->TabIndex = 0;
			this->txtResultStardard->TextChanged += gcnew System::EventHandler(this, &Stardard::txtResultStardard_TextChanged);
			// 
			// ProgramPanel
			// 
			this->ProgramPanel->Controls->Add(this->txtInputProgrammer);
			this->ProgramPanel->Controls->Add(this->btnChooseDecimal);
			this->ProgramPanel->Controls->Add(this->btnChooseOctal);
			this->ProgramPanel->Controls->Add(this->btnChooseHexa);
			this->ProgramPanel->Controls->Add(this->btnChooseBinary);
			this->ProgramPanel->Controls->Add(this->btnPositiveNegativeProgrammer);
			this->ProgramPanel->Controls->Add(this->btnEqualProgrammer);
			this->ProgramPanel->Controls->Add(this->btnDevideProgrammer);
			this->ProgramPanel->Controls->Add(this->btnMultiProgrammer);
			this->ProgramPanel->Controls->Add(this->btnSubtractProgrammer);
			this->ProgramPanel->Controls->Add(this->btnDelProgrammer);
			this->ProgramPanel->Controls->Add(this->btnPlusProgrammer);
			this->ProgramPanel->Controls->Add(this->btnPointProgrammer);
			this->ProgramPanel->Controls->Add(this->btn3Programmer);
			this->ProgramPanel->Controls->Add(this->btn6Programmer);
			this->ProgramPanel->Controls->Add(this->btn9Programmer);
			this->ProgramPanel->Controls->Add(this->btnCEProgrammer);
			this->ProgramPanel->Controls->Add(this->btnREV3);
			this->ProgramPanel->Controls->Add(this->btn0Programmer);
			this->ProgramPanel->Controls->Add(this->btn2Programmer);
			this->ProgramPanel->Controls->Add(this->btn5Programmer);
			this->ProgramPanel->Controls->Add(this->btn8Programmer);
			this->ProgramPanel->Controls->Add(this->btnShiftRight);
			this->ProgramPanel->Controls->Add(this->btnREV2);
			this->ProgramPanel->Controls->Add(this->btn1Programmer);
			this->ProgramPanel->Controls->Add(this->btn4Programmer);
			this->ProgramPanel->Controls->Add(this->btn7Programmer);
			this->ProgramPanel->Controls->Add(this->btnShiftLeft);
			this->ProgramPanel->Controls->Add(this->btnREV1);
			this->ProgramPanel->Controls->Add(this->btnFProgrammer);
			this->ProgramPanel->Controls->Add(this->btnEProgrammer);
			this->ProgramPanel->Controls->Add(this->btnDProgrammer);
			this->ProgramPanel->Controls->Add(this->btnCProgrammer);
			this->ProgramPanel->Controls->Add(this->btnBProgrammer);
			this->ProgramPanel->Controls->Add(this->btnAProgrammer);
			this->ProgramPanel->Controls->Add(this->txtDecimal);
			this->ProgramPanel->Controls->Add(this->txtOctal);
			this->ProgramPanel->Controls->Add(this->txtHexa);
			this->ProgramPanel->Controls->Add(this->txtBinary);
			this->ProgramPanel->Controls->Add(this->txtResultProgrammer);
			this->ProgramPanel->Location = System::Drawing::Point(194, 31);
			this->ProgramPanel->Name = L"ProgramPanel";
			this->ProgramPanel->Size = System::Drawing::Size(499, 407);
			this->ProgramPanel->TabIndex = 33;
			// 
			// txtInputProgrammer
			// 
			this->txtInputProgrammer->Location = System::Drawing::Point(17, 3);
			this->txtInputProgrammer->Name = L"txtInputProgrammer";
			this->txtInputProgrammer->Size = System::Drawing::Size(229, 30);
			this->txtInputProgrammer->TabIndex = 71;
			this->txtInputProgrammer->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputProgrammer_TextChanged);
			// 
			// btnChooseDecimal
			// 
			this->btnChooseDecimal->AutoSize = true;
			this->btnChooseDecimal->Location = System::Drawing::Point(267, 142);
			this->btnChooseDecimal->Name = L"btnChooseDecimal";
			this->btnChooseDecimal->Size = System::Drawing::Size(94, 26);
			this->btnChooseDecimal->TabIndex = 70;
			this->btnChooseDecimal->TabStop = true;
			this->btnChooseDecimal->Text = L"decimal";
			this->btnChooseDecimal->UseVisualStyleBackColor = true;
			this->btnChooseDecimal->CheckedChanged += gcnew System::EventHandler(this, &Stardard::btnChooseDecimal_CheckedChanged);
			// 
			// btnChooseOctal
			// 
			this->btnChooseOctal->AutoSize = true;
			this->btnChooseOctal->Location = System::Drawing::Point(267, 110);
			this->btnChooseOctal->Name = L"btnChooseOctal";
			this->btnChooseOctal->Size = System::Drawing::Size(70, 26);
			this->btnChooseOctal->TabIndex = 69;
			this->btnChooseOctal->TabStop = true;
			this->btnChooseOctal->Text = L"octal";
			this->btnChooseOctal->UseVisualStyleBackColor = true;
			this->btnChooseOctal->CheckedChanged += gcnew System::EventHandler(this, &Stardard::btnChooseOctal_CheckedChanged);
			// 
			// btnChooseHexa
			// 
			this->btnChooseHexa->AutoSize = true;
			this->btnChooseHexa->Location = System::Drawing::Point(267, 78);
			this->btnChooseHexa->Name = L"btnChooseHexa";
			this->btnChooseHexa->Size = System::Drawing::Size(67, 26);
			this->btnChooseHexa->TabIndex = 68;
			this->btnChooseHexa->TabStop = true;
			this->btnChooseHexa->Text = L"hexa";
			this->btnChooseHexa->UseVisualStyleBackColor = true;
			this->btnChooseHexa->CheckedChanged += gcnew System::EventHandler(this, &Stardard::btnChooseHexa_CheckedChanged);
			// 
			// btnChooseBinary
			// 
			this->btnChooseBinary->AutoSize = true;
			this->btnChooseBinary->Location = System::Drawing::Point(267, 47);
			this->btnChooseBinary->Name = L"btnChooseBinary";
			this->btnChooseBinary->Size = System::Drawing::Size(81, 26);
			this->btnChooseBinary->TabIndex = 67;
			this->btnChooseBinary->TabStop = true;
			this->btnChooseBinary->Text = L"binary";
			this->btnChooseBinary->UseVisualStyleBackColor = true;
			this->btnChooseBinary->CheckedChanged += gcnew System::EventHandler(this, &Stardard::btnChooseBinary_CheckedChanged);
			// 
			// btnPositiveNegativeProgrammer
			// 
			this->btnPositiveNegativeProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnPositiveNegativeProgrammer->Location = System::Drawing::Point(92, 363);
			this->btnPositiveNegativeProgrammer->Name = L"btnPositiveNegativeProgrammer";
			this->btnPositiveNegativeProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnPositiveNegativeProgrammer->TabIndex = 66;
			this->btnPositiveNegativeProgrammer->Text = L"+/-";
			this->btnPositiveNegativeProgrammer->UseVisualStyleBackColor = true;
			// 
			// btnEqualProgrammer
			// 
			this->btnEqualProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqualProgrammer->Location = System::Drawing::Point(315, 363);
			this->btnEqualProgrammer->Name = L"btnEqualProgrammer";
			this->btnEqualProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnEqualProgrammer->TabIndex = 65;
			this->btnEqualProgrammer->Text = L"=";
			this->btnEqualProgrammer->UseVisualStyleBackColor = true;
			this->btnEqualProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnEqualProgrammer_Click);
			// 
			// btnDevideProgrammer
			// 
			this->btnDevideProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDevideProgrammer->Location = System::Drawing::Point(315, 326);
			this->btnDevideProgrammer->Name = L"btnDevideProgrammer";
			this->btnDevideProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnDevideProgrammer->TabIndex = 64;
			this->btnDevideProgrammer->Text = L"/";
			this->btnDevideProgrammer->UseVisualStyleBackColor = true;
			this->btnDevideProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnDevideProgrammer_Click);
			// 
			// btnMultiProgrammer
			// 
			this->btnMultiProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiProgrammer->Location = System::Drawing::Point(315, 289);
			this->btnMultiProgrammer->Name = L"btnMultiProgrammer";
			this->btnMultiProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnMultiProgrammer->TabIndex = 63;
			this->btnMultiProgrammer->Text = L"*";
			this->btnMultiProgrammer->UseVisualStyleBackColor = true;
			this->btnMultiProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnMultiProgrammer_Click);
			// 
			// btnSubtractProgrammer
			// 
			this->btnSubtractProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtractProgrammer->Location = System::Drawing::Point(315, 252);
			this->btnSubtractProgrammer->Name = L"btnSubtractProgrammer";
			this->btnSubtractProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnSubtractProgrammer->TabIndex = 62;
			this->btnSubtractProgrammer->Text = L"-";
			this->btnSubtractProgrammer->UseVisualStyleBackColor = true;
			this->btnSubtractProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnSubtractProgrammer_Click);
			// 
			// btnDelProgrammer
			// 
			this->btnDelProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelProgrammer->Location = System::Drawing::Point(315, 177);
			this->btnDelProgrammer->Name = L"btnDelProgrammer";
			this->btnDelProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnDelProgrammer->TabIndex = 61;
			this->btnDelProgrammer->Text = L"Del";
			this->btnDelProgrammer->UseVisualStyleBackColor = true;
			this->btnDelProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnDelProgrammer_Click);
			// 
			// btnPlusProgrammer
			// 
			this->btnPlusProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlusProgrammer->Location = System::Drawing::Point(315, 214);
			this->btnPlusProgrammer->Name = L"btnPlusProgrammer";
			this->btnPlusProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnPlusProgrammer->TabIndex = 60;
			this->btnPlusProgrammer->Text = L"+";
			this->btnPlusProgrammer->UseVisualStyleBackColor = true;
			this->btnPlusProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnPlusProgrammer_Click);
			// 
			// btnPointProgrammer
			// 
			this->btnPointProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPointProgrammer->Location = System::Drawing::Point(241, 363);
			this->btnPointProgrammer->Name = L"btnPointProgrammer";
			this->btnPointProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnPointProgrammer->TabIndex = 59;
			this->btnPointProgrammer->Text = L".";
			this->btnPointProgrammer->UseVisualStyleBackColor = true;
			// 
			// btn3Programmer
			// 
			this->btn3Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3Programmer->Location = System::Drawing::Point(241, 326);
			this->btn3Programmer->Name = L"btn3Programmer";
			this->btn3Programmer->Size = System::Drawing::Size(75, 38);
			this->btn3Programmer->TabIndex = 58;
			this->btn3Programmer->Text = L"3";
			this->btn3Programmer->UseVisualStyleBackColor = true;
			this->btn3Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn3Programmer_Click);
			// 
			// btn6Programmer
			// 
			this->btn6Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6Programmer->Location = System::Drawing::Point(241, 289);
			this->btn6Programmer->Name = L"btn6Programmer";
			this->btn6Programmer->Size = System::Drawing::Size(75, 38);
			this->btn6Programmer->TabIndex = 57;
			this->btn6Programmer->Text = L"6";
			this->btn6Programmer->UseVisualStyleBackColor = true;
			this->btn6Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn6Programmer_Click);
			// 
			// btn9Programmer
			// 
			this->btn9Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9Programmer->Location = System::Drawing::Point(241, 252);
			this->btn9Programmer->Name = L"btn9Programmer";
			this->btn9Programmer->Size = System::Drawing::Size(75, 38);
			this->btn9Programmer->TabIndex = 56;
			this->btn9Programmer->Text = L"9";
			this->btn9Programmer->UseVisualStyleBackColor = true;
			this->btn9Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn9Programmer_Click);
			// 
			// btnCEProgrammer
			// 
			this->btnCEProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCEProgrammer->Location = System::Drawing::Point(241, 214);
			this->btnCEProgrammer->Name = L"btnCEProgrammer";
			this->btnCEProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnCEProgrammer->TabIndex = 55;
			this->btnCEProgrammer->Text = L"CE";
			this->btnCEProgrammer->UseVisualStyleBackColor = true;
			this->btnCEProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnCEProgrammer_Click);
			// 
			// btnREV3
			// 
			this->btnREV3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnREV3->Location = System::Drawing::Point(241, 177);
			this->btnREV3->Name = L"btnREV3";
			this->btnREV3->Size = System::Drawing::Size(75, 38);
			this->btnREV3->TabIndex = 54;
			this->btnREV3->Text = L"rev";
			this->btnREV3->UseVisualStyleBackColor = true;
			// 
			// btn0Programmer
			// 
			this->btn0Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0Programmer->Location = System::Drawing::Point(166, 363);
			this->btn0Programmer->Name = L"btn0Programmer";
			this->btn0Programmer->Size = System::Drawing::Size(75, 38);
			this->btn0Programmer->TabIndex = 53;
			this->btn0Programmer->Text = L"0";
			this->btn0Programmer->UseVisualStyleBackColor = true;
			this->btn0Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn0Programmer_Click);
			// 
			// btn2Programmer
			// 
			this->btn2Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Programmer->Location = System::Drawing::Point(166, 326);
			this->btn2Programmer->Name = L"btn2Programmer";
			this->btn2Programmer->Size = System::Drawing::Size(75, 38);
			this->btn2Programmer->TabIndex = 52;
			this->btn2Programmer->Text = L"2";
			this->btn2Programmer->UseVisualStyleBackColor = true;
			this->btn2Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn2Programmer_Click);
			// 
			// btn5Programmer
			// 
			this->btn5Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5Programmer->Location = System::Drawing::Point(166, 289);
			this->btn5Programmer->Name = L"btn5Programmer";
			this->btn5Programmer->Size = System::Drawing::Size(75, 38);
			this->btn5Programmer->TabIndex = 51;
			this->btn5Programmer->Text = L"5";
			this->btn5Programmer->UseVisualStyleBackColor = true;
			this->btn5Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn5Programmer_Click);
			// 
			// btn8Programmer
			// 
			this->btn8Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8Programmer->Location = System::Drawing::Point(166, 252);
			this->btn8Programmer->Name = L"btn8Programmer";
			this->btn8Programmer->Size = System::Drawing::Size(75, 38);
			this->btn8Programmer->TabIndex = 50;
			this->btn8Programmer->Text = L"8";
			this->btn8Programmer->UseVisualStyleBackColor = true;
			this->btn8Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn8Programmer_Click);
			// 
			// btnShiftRight
			// 
			this->btnShiftRight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnShiftRight->Location = System::Drawing::Point(166, 214);
			this->btnShiftRight->Name = L"btnShiftRight";
			this->btnShiftRight->Size = System::Drawing::Size(75, 38);
			this->btnShiftRight->TabIndex = 49;
			this->btnShiftRight->Text = L">>";
			this->btnShiftRight->UseVisualStyleBackColor = true;
			this->btnShiftRight->Click += gcnew System::EventHandler(this, &Stardard::btnShiftRight_Click);
			// 
			// btnREV2
			// 
			this->btnREV2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnREV2->Location = System::Drawing::Point(166, 177);
			this->btnREV2->Name = L"btnREV2";
			this->btnREV2->Size = System::Drawing::Size(75, 38);
			this->btnREV2->TabIndex = 48;
			this->btnREV2->Text = L"rev";
			this->btnREV2->UseVisualStyleBackColor = true;
			// 
			// btn1Programmer
			// 
			this->btn1Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Programmer->Location = System::Drawing::Point(92, 326);
			this->btn1Programmer->Name = L"btn1Programmer";
			this->btn1Programmer->Size = System::Drawing::Size(75, 38);
			this->btn1Programmer->TabIndex = 46;
			this->btn1Programmer->Text = L"1";
			this->btn1Programmer->UseVisualStyleBackColor = true;
			this->btn1Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn1Programmer_Click);
			// 
			// btn4Programmer
			// 
			this->btn4Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4Programmer->Location = System::Drawing::Point(92, 289);
			this->btn4Programmer->Name = L"btn4Programmer";
			this->btn4Programmer->Size = System::Drawing::Size(75, 38);
			this->btn4Programmer->TabIndex = 45;
			this->btn4Programmer->Text = L"4";
			this->btn4Programmer->UseVisualStyleBackColor = true;
			this->btn4Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn4Programmer_Click);
			// 
			// btn7Programmer
			// 
			this->btn7Programmer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7Programmer->Location = System::Drawing::Point(92, 252);
			this->btn7Programmer->Name = L"btn7Programmer";
			this->btn7Programmer->Size = System::Drawing::Size(75, 38);
			this->btn7Programmer->TabIndex = 44;
			this->btn7Programmer->Text = L"7";
			this->btn7Programmer->UseVisualStyleBackColor = true;
			this->btn7Programmer->Click += gcnew System::EventHandler(this, &Stardard::btn7Programmer_Click);
			// 
			// btnShiftLeft
			// 
			this->btnShiftLeft->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnShiftLeft->Location = System::Drawing::Point(92, 214);
			this->btnShiftLeft->Name = L"btnShiftLeft";
			this->btnShiftLeft->Size = System::Drawing::Size(75, 38);
			this->btnShiftLeft->TabIndex = 43;
			this->btnShiftLeft->Text = L"<<";
			this->btnShiftLeft->UseVisualStyleBackColor = true;
			this->btnShiftLeft->Click += gcnew System::EventHandler(this, &Stardard::btnShiftLeft_Click);
			// 
			// btnREV1
			// 
			this->btnREV1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnREV1->Location = System::Drawing::Point(92, 177);
			this->btnREV1->Name = L"btnREV1";
			this->btnREV1->Size = System::Drawing::Size(75, 38);
			this->btnREV1->TabIndex = 42;
			this->btnREV1->Text = L"rev";
			this->btnREV1->UseVisualStyleBackColor = true;
			// 
			// btnFProgrammer
			// 
			this->btnFProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFProgrammer->Location = System::Drawing::Point(17, 363);
			this->btnFProgrammer->Name = L"btnFProgrammer";
			this->btnFProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnFProgrammer->TabIndex = 41;
			this->btnFProgrammer->Text = L"f";
			this->btnFProgrammer->UseVisualStyleBackColor = true;
			this->btnFProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnFProgrammer_Click);
			// 
			// btnEProgrammer
			// 
			this->btnEProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEProgrammer->Location = System::Drawing::Point(17, 326);
			this->btnEProgrammer->Name = L"btnEProgrammer";
			this->btnEProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnEProgrammer->TabIndex = 40;
			this->btnEProgrammer->Text = L"e";
			this->btnEProgrammer->UseVisualStyleBackColor = true;
			this->btnEProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnEProgrammer_Click);
			// 
			// btnDProgrammer
			// 
			this->btnDProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDProgrammer->Location = System::Drawing::Point(17, 289);
			this->btnDProgrammer->Name = L"btnDProgrammer";
			this->btnDProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnDProgrammer->TabIndex = 39;
			this->btnDProgrammer->Text = L"d";
			this->btnDProgrammer->UseVisualStyleBackColor = true;
			this->btnDProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnDProgrammer_Click);
			// 
			// btnCProgrammer
			// 
			this->btnCProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCProgrammer->Location = System::Drawing::Point(17, 252);
			this->btnCProgrammer->Name = L"btnCProgrammer";
			this->btnCProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnCProgrammer->TabIndex = 38;
			this->btnCProgrammer->Text = L"c";
			this->btnCProgrammer->UseVisualStyleBackColor = true;
			this->btnCProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnCProgrammer_Click);
			// 
			// btnBProgrammer
			// 
			this->btnBProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBProgrammer->Location = System::Drawing::Point(17, 214);
			this->btnBProgrammer->Name = L"btnBProgrammer";
			this->btnBProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnBProgrammer->TabIndex = 37;
			this->btnBProgrammer->Text = L"b";
			this->btnBProgrammer->UseVisualStyleBackColor = true;
			this->btnBProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnBProgrammer_Click);
			// 
			// btnAProgrammer
			// 
			this->btnAProgrammer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAProgrammer->Location = System::Drawing::Point(17, 177);
			this->btnAProgrammer->Name = L"btnAProgrammer";
			this->btnAProgrammer->Size = System::Drawing::Size(75, 38);
			this->btnAProgrammer->TabIndex = 35;
			this->btnAProgrammer->Text = L"a";
			this->btnAProgrammer->UseVisualStyleBackColor = true;
			this->btnAProgrammer->Click += gcnew System::EventHandler(this, &Stardard::btnAProgrammer_Click);
			// 
			// txtDecimal
			// 
			this->txtDecimal->Location = System::Drawing::Point(17, 142);
			this->txtDecimal->Name = L"txtDecimal";
			this->txtDecimal->Size = System::Drawing::Size(231, 30);
			this->txtDecimal->TabIndex = 4;
			// 
			// txtOctal
			// 
			this->txtOctal->Location = System::Drawing::Point(17, 111);
			this->txtOctal->Name = L"txtOctal";
			this->txtOctal->Size = System::Drawing::Size(231, 30);
			this->txtOctal->TabIndex = 3;
			// 
			// txtHexa
			// 
			this->txtHexa->Location = System::Drawing::Point(17, 80);
			this->txtHexa->Name = L"txtHexa";
			this->txtHexa->Size = System::Drawing::Size(231, 30);
			this->txtHexa->TabIndex = 2;
			// 
			// txtBinary
			// 
			this->txtBinary->Location = System::Drawing::Point(17, 49);
			this->txtBinary->Name = L"txtBinary";
			this->txtBinary->Size = System::Drawing::Size(231, 30);
			this->txtBinary->TabIndex = 1;
			// 
			// txtResultProgrammer
			// 
			this->txtResultProgrammer->Location = System::Drawing::Point(267, 4);
			this->txtResultProgrammer->Name = L"txtResultProgrammer";
			this->txtResultProgrammer->Size = System::Drawing::Size(123, 30);
			this->txtResultProgrammer->TabIndex = 0;
			// 
			// CurrencyPanel
			// 
			this->CurrencyPanel->Controls->Add(this->btnSwapCurrency);
			this->CurrencyPanel->Controls->Add(this->btn9Currency);
			this->CurrencyPanel->Controls->Add(this->btn8Currency);
			this->CurrencyPanel->Controls->Add(this->btn7Currency);
			this->CurrencyPanel->Controls->Add(this->btn6Currency);
			this->CurrencyPanel->Controls->Add(this->btn5Currency);
			this->CurrencyPanel->Controls->Add(this->btn4Currency);
			this->CurrencyPanel->Controls->Add(this->btn3Currency);
			this->CurrencyPanel->Controls->Add(this->btn2Currency);
			this->CurrencyPanel->Controls->Add(this->btn1Currency);
			this->CurrencyPanel->Controls->Add(this->btnPointCurrency);
			this->CurrencyPanel->Controls->Add(this->btn0Currency);
			this->CurrencyPanel->Controls->Add(this->btnDelCurrency);
			this->CurrencyPanel->Controls->Add(this->btnCECurrency);
			this->CurrencyPanel->Controls->Add(this->cbbOutputCurrency);
			this->CurrencyPanel->Controls->Add(this->txtOutputCurrency);
			this->CurrencyPanel->Controls->Add(this->cbbInputCurrency);
			this->CurrencyPanel->Controls->Add(this->txtInputCurrency);
			this->CurrencyPanel->Location = System::Drawing::Point(719, 31);
			this->CurrencyPanel->Name = L"CurrencyPanel";
			this->CurrencyPanel->Size = System::Drawing::Size(361, 407);
			this->CurrencyPanel->TabIndex = 39;
			// 
			// btnSwapCurrency
			// 
			this->btnSwapCurrency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwapCurrency->Location = System::Drawing::Point(125, 169);
			this->btnSwapCurrency->Name = L"btnSwapCurrency";
			this->btnSwapCurrency->Size = System::Drawing::Size(79, 48);
			this->btnSwapCurrency->TabIndex = 34;
			this->btnSwapCurrency->Text = L"SWAP";
			this->btnSwapCurrency->UseVisualStyleBackColor = true;
			this->btnSwapCurrency->Click += gcnew System::EventHandler(this, &Stardard::btnSwapCurrency_Click);
			// 
			// btn9Currency
			// 
			this->btn9Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9Currency->Location = System::Drawing::Point(282, 216);
			this->btn9Currency->Name = L"btn9Currency";
			this->btn9Currency->Size = System::Drawing::Size(79, 48);
			this->btn9Currency->TabIndex = 33;
			this->btn9Currency->Text = L"9";
			this->btn9Currency->UseVisualStyleBackColor = true;
			this->btn9Currency->Click += gcnew System::EventHandler(this, &Stardard::btn9Currency_Click);
			// 
			// btn8Currency
			// 
			this->btn8Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8Currency->Location = System::Drawing::Point(203, 216);
			this->btn8Currency->Name = L"btn8Currency";
			this->btn8Currency->Size = System::Drawing::Size(79, 48);
			this->btn8Currency->TabIndex = 33;
			this->btn8Currency->Text = L"8";
			this->btn8Currency->UseVisualStyleBackColor = true;
			this->btn8Currency->Click += gcnew System::EventHandler(this, &Stardard::btn8Currency_Click);
			// 
			// btn7Currency
			// 
			this->btn7Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7Currency->Location = System::Drawing::Point(125, 216);
			this->btn7Currency->Name = L"btn7Currency";
			this->btn7Currency->Size = System::Drawing::Size(79, 48);
			this->btn7Currency->TabIndex = 33;
			this->btn7Currency->Text = L"7";
			this->btn7Currency->UseVisualStyleBackColor = true;
			this->btn7Currency->Click += gcnew System::EventHandler(this, &Stardard::btn7Currency_Click);
			// 
			// btn6Currency
			// 
			this->btn6Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6Currency->Location = System::Drawing::Point(282, 263);
			this->btn6Currency->Name = L"btn6Currency";
			this->btn6Currency->Size = System::Drawing::Size(79, 48);
			this->btn6Currency->TabIndex = 33;
			this->btn6Currency->Text = L"6";
			this->btn6Currency->UseVisualStyleBackColor = true;
			this->btn6Currency->Click += gcnew System::EventHandler(this, &Stardard::btn6Currency_Click);
			// 
			// btn5Currency
			// 
			this->btn5Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5Currency->Location = System::Drawing::Point(203, 263);
			this->btn5Currency->Name = L"btn5Currency";
			this->btn5Currency->Size = System::Drawing::Size(79, 48);
			this->btn5Currency->TabIndex = 33;
			this->btn5Currency->Text = L"5";
			this->btn5Currency->UseVisualStyleBackColor = true;
			this->btn5Currency->Click += gcnew System::EventHandler(this, &Stardard::btn5Currency_Click);
			// 
			// btn4Currency
			// 
			this->btn4Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4Currency->Location = System::Drawing::Point(125, 263);
			this->btn4Currency->Name = L"btn4Currency";
			this->btn4Currency->Size = System::Drawing::Size(79, 48);
			this->btn4Currency->TabIndex = 33;
			this->btn4Currency->Text = L"4";
			this->btn4Currency->UseVisualStyleBackColor = true;
			this->btn4Currency->Click += gcnew System::EventHandler(this, &Stardard::btn4Currency_Click);
			// 
			// btn3Currency
			// 
			this->btn3Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3Currency->Location = System::Drawing::Point(282, 310);
			this->btn3Currency->Name = L"btn3Currency";
			this->btn3Currency->Size = System::Drawing::Size(79, 48);
			this->btn3Currency->TabIndex = 33;
			this->btn3Currency->Text = L"3";
			this->btn3Currency->UseVisualStyleBackColor = true;
			this->btn3Currency->Click += gcnew System::EventHandler(this, &Stardard::btn3Currency_Click);
			// 
			// btn2Currency
			// 
			this->btn2Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Currency->Location = System::Drawing::Point(203, 310);
			this->btn2Currency->Name = L"btn2Currency";
			this->btn2Currency->Size = System::Drawing::Size(79, 48);
			this->btn2Currency->TabIndex = 33;
			this->btn2Currency->Text = L"2";
			this->btn2Currency->UseVisualStyleBackColor = true;
			this->btn2Currency->Click += gcnew System::EventHandler(this, &Stardard::btn2Currency_Click);
			// 
			// btn1Currency
			// 
			this->btn1Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Currency->Location = System::Drawing::Point(125, 310);
			this->btn1Currency->Name = L"btn1Currency";
			this->btn1Currency->Size = System::Drawing::Size(79, 48);
			this->btn1Currency->TabIndex = 33;
			this->btn1Currency->Text = L"1";
			this->btn1Currency->UseVisualStyleBackColor = true;
			this->btn1Currency->Click += gcnew System::EventHandler(this, &Stardard::btn1Currency_Click);
			// 
			// btnPointCurrency
			// 
			this->btnPointCurrency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPointCurrency->Location = System::Drawing::Point(282, 357);
			this->btnPointCurrency->Name = L"btnPointCurrency";
			this->btnPointCurrency->Size = System::Drawing::Size(79, 48);
			this->btnPointCurrency->TabIndex = 33;
			this->btnPointCurrency->Text = L".";
			this->btnPointCurrency->UseVisualStyleBackColor = true;
			this->btnPointCurrency->Click += gcnew System::EventHandler(this, &Stardard::btnPointCurrency_Click);
			// 
			// btn0Currency
			// 
			this->btn0Currency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0Currency->Location = System::Drawing::Point(203, 357);
			this->btn0Currency->Name = L"btn0Currency";
			this->btn0Currency->Size = System::Drawing::Size(79, 48);
			this->btn0Currency->TabIndex = 33;
			this->btn0Currency->Text = L"0";
			this->btn0Currency->UseVisualStyleBackColor = true;
			this->btn0Currency->Click += gcnew System::EventHandler(this, &Stardard::btn0Currency_Click);
			// 
			// btnDelCurrency
			// 
			this->btnDelCurrency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelCurrency->Location = System::Drawing::Point(282, 169);
			this->btnDelCurrency->Name = L"btnDelCurrency";
			this->btnDelCurrency->Size = System::Drawing::Size(79, 48);
			this->btnDelCurrency->TabIndex = 33;
			this->btnDelCurrency->Text = L"del";
			this->btnDelCurrency->UseVisualStyleBackColor = true;
			this->btnDelCurrency->Click += gcnew System::EventHandler(this, &Stardard::btnDelCurrency_Click);
			// 
			// btnCECurrency
			// 
			this->btnCECurrency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCECurrency->Location = System::Drawing::Point(203, 169);
			this->btnCECurrency->Name = L"btnCECurrency";
			this->btnCECurrency->Size = System::Drawing::Size(79, 48);
			this->btnCECurrency->TabIndex = 33;
			this->btnCECurrency->Text = L"CE";
			this->btnCECurrency->UseVisualStyleBackColor = true;
			this->btnCECurrency->Click += gcnew System::EventHandler(this, &Stardard::btnCECurrency_Click);
			// 
			// cbbOutputCurrency
			// 
			this->cbbOutputCurrency->FormattingEnabled = true;
			this->cbbOutputCurrency->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"PKR", L"GBP", L"EUR", L"USD", L"VND" });
			this->cbbOutputCurrency->Location = System::Drawing::Point(1, 125);
			this->cbbOutputCurrency->Name = L"cbbOutputCurrency";
			this->cbbOutputCurrency->Size = System::Drawing::Size(156, 30);
			this->cbbOutputCurrency->TabIndex = 3;
			this->cbbOutputCurrency->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbOutputCurrency_SelectedIndexChanged);
			// 
			// txtOutputCurrency
			// 
			this->txtOutputCurrency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutputCurrency->Location = System::Drawing::Point(1, 78);
			this->txtOutputCurrency->Name = L"txtOutputCurrency";
			this->txtOutputCurrency->Size = System::Drawing::Size(360, 46);
			this->txtOutputCurrency->TabIndex = 2;
			// 
			// cbbInputCurrency
			// 
			this->cbbInputCurrency->FormattingEnabled = true;
			this->cbbInputCurrency->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"PKR", L"GBP", L"EUR", L"USD", L"VND" });
			this->cbbInputCurrency->Location = System::Drawing::Point(1, 47);
			this->cbbInputCurrency->Name = L"cbbInputCurrency";
			this->cbbInputCurrency->Size = System::Drawing::Size(156, 30);
			this->cbbInputCurrency->TabIndex = 1;
			this->cbbInputCurrency->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbInputCurrency_SelectedIndexChanged);
			// 
			// txtInputCurrency
			// 
			this->txtInputCurrency->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInputCurrency->Location = System::Drawing::Point(0, 0);
			this->txtInputCurrency->Name = L"txtInputCurrency";
			this->txtInputCurrency->Size = System::Drawing::Size(361, 46);
			this->txtInputCurrency->TabIndex = 0;
			this->txtInputCurrency->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputCurrency_TextChanged);
			// 
			// AreaPanel
			// 
			this->AreaPanel->Controls->Add(this->btnSwapArea);
			this->AreaPanel->Controls->Add(this->btn9Area);
			this->AreaPanel->Controls->Add(this->btn8Area);
			this->AreaPanel->Controls->Add(this->btn7Area);
			this->AreaPanel->Controls->Add(this->btn6Area);
			this->AreaPanel->Controls->Add(this->btn5Area);
			this->AreaPanel->Controls->Add(this->btn4Area);
			this->AreaPanel->Controls->Add(this->btn3Area);
			this->AreaPanel->Controls->Add(this->btn2Area);
			this->AreaPanel->Controls->Add(this->btn1Area);
			this->AreaPanel->Controls->Add(this->btnPointArea);
			this->AreaPanel->Controls->Add(this->btn0Area);
			this->AreaPanel->Controls->Add(this->btnDelArea);
			this->AreaPanel->Controls->Add(this->btnCEArea);
			this->AreaPanel->Controls->Add(this->cbbOutputArea);
			this->AreaPanel->Controls->Add(this->txtOutputArea);
			this->AreaPanel->Controls->Add(this->cbbInputArea);
			this->AreaPanel->Controls->Add(this->txtInputArea);
			this->AreaPanel->Location = System::Drawing::Point(719, 31);
			this->AreaPanel->Name = L"AreaPanel";
			this->AreaPanel->Size = System::Drawing::Size(361, 407);
			this->AreaPanel->TabIndex = 37;
			// 
			// btnSwapArea
			// 
			this->btnSwapArea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwapArea->Location = System::Drawing::Point(125, 169);
			this->btnSwapArea->Name = L"btnSwapArea";
			this->btnSwapArea->Size = System::Drawing::Size(79, 48);
			this->btnSwapArea->TabIndex = 34;
			this->btnSwapArea->Text = L"SWAP";
			this->btnSwapArea->UseVisualStyleBackColor = true;
			this->btnSwapArea->Click += gcnew System::EventHandler(this, &Stardard::btnSwapArea_Click);
			// 
			// btn9Area
			// 
			this->btn9Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9Area->Location = System::Drawing::Point(282, 216);
			this->btn9Area->Name = L"btn9Area";
			this->btn9Area->Size = System::Drawing::Size(79, 48);
			this->btn9Area->TabIndex = 33;
			this->btn9Area->Text = L"9";
			this->btn9Area->UseVisualStyleBackColor = true;
			this->btn9Area->Click += gcnew System::EventHandler(this, &Stardard::btn9Area_Click);
			// 
			// btn8Area
			// 
			this->btn8Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8Area->Location = System::Drawing::Point(203, 216);
			this->btn8Area->Name = L"btn8Area";
			this->btn8Area->Size = System::Drawing::Size(79, 48);
			this->btn8Area->TabIndex = 33;
			this->btn8Area->Text = L"8";
			this->btn8Area->UseVisualStyleBackColor = true;
			this->btn8Area->Click += gcnew System::EventHandler(this, &Stardard::btn8Area_Click);
			// 
			// btn7Area
			// 
			this->btn7Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7Area->Location = System::Drawing::Point(125, 216);
			this->btn7Area->Name = L"btn7Area";
			this->btn7Area->Size = System::Drawing::Size(79, 48);
			this->btn7Area->TabIndex = 33;
			this->btn7Area->Text = L"7";
			this->btn7Area->UseVisualStyleBackColor = true;
			this->btn7Area->Click += gcnew System::EventHandler(this, &Stardard::btn7Area_Click);
			// 
			// btn6Area
			// 
			this->btn6Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6Area->Location = System::Drawing::Point(282, 263);
			this->btn6Area->Name = L"btn6Area";
			this->btn6Area->Size = System::Drawing::Size(79, 48);
			this->btn6Area->TabIndex = 33;
			this->btn6Area->Text = L"6";
			this->btn6Area->UseVisualStyleBackColor = true;
			this->btn6Area->Click += gcnew System::EventHandler(this, &Stardard::btn6Area_Click);
			// 
			// btn5Area
			// 
			this->btn5Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5Area->Location = System::Drawing::Point(203, 263);
			this->btn5Area->Name = L"btn5Area";
			this->btn5Area->Size = System::Drawing::Size(79, 48);
			this->btn5Area->TabIndex = 33;
			this->btn5Area->Text = L"5";
			this->btn5Area->UseVisualStyleBackColor = true;
			this->btn5Area->Click += gcnew System::EventHandler(this, &Stardard::btn5Area_Click);
			// 
			// btn4Area
			// 
			this->btn4Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4Area->Location = System::Drawing::Point(125, 263);
			this->btn4Area->Name = L"btn4Area";
			this->btn4Area->Size = System::Drawing::Size(79, 48);
			this->btn4Area->TabIndex = 33;
			this->btn4Area->Text = L"4";
			this->btn4Area->UseVisualStyleBackColor = true;
			this->btn4Area->Click += gcnew System::EventHandler(this, &Stardard::btn4Area_Click);
			// 
			// btn3Area
			// 
			this->btn3Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3Area->Location = System::Drawing::Point(282, 310);
			this->btn3Area->Name = L"btn3Area";
			this->btn3Area->Size = System::Drawing::Size(79, 48);
			this->btn3Area->TabIndex = 33;
			this->btn3Area->Text = L"3";
			this->btn3Area->UseVisualStyleBackColor = true;
			this->btn3Area->Click += gcnew System::EventHandler(this, &Stardard::btn3Area_Click);
			// 
			// btn2Area
			// 
			this->btn2Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Area->Location = System::Drawing::Point(203, 310);
			this->btn2Area->Name = L"btn2Area";
			this->btn2Area->Size = System::Drawing::Size(79, 48);
			this->btn2Area->TabIndex = 33;
			this->btn2Area->Text = L"2";
			this->btn2Area->UseVisualStyleBackColor = true;
			this->btn2Area->Click += gcnew System::EventHandler(this, &Stardard::btn2Area_Click);
			// 
			// btn1Area
			// 
			this->btn1Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Area->Location = System::Drawing::Point(125, 310);
			this->btn1Area->Name = L"btn1Area";
			this->btn1Area->Size = System::Drawing::Size(79, 48);
			this->btn1Area->TabIndex = 33;
			this->btn1Area->Text = L"1";
			this->btn1Area->UseVisualStyleBackColor = true;
			this->btn1Area->Click += gcnew System::EventHandler(this, &Stardard::btn1Area_Click);
			// 
			// btnPointArea
			// 
			this->btnPointArea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPointArea->Location = System::Drawing::Point(282, 357);
			this->btnPointArea->Name = L"btnPointArea";
			this->btnPointArea->Size = System::Drawing::Size(79, 48);
			this->btnPointArea->TabIndex = 33;
			this->btnPointArea->Text = L".";
			this->btnPointArea->UseVisualStyleBackColor = true;
			this->btnPointArea->Click += gcnew System::EventHandler(this, &Stardard::btnPointArea_Click);
			// 
			// btn0Area
			// 
			this->btn0Area->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0Area->Location = System::Drawing::Point(203, 357);
			this->btn0Area->Name = L"btn0Area";
			this->btn0Area->Size = System::Drawing::Size(79, 48);
			this->btn0Area->TabIndex = 33;
			this->btn0Area->Text = L"0";
			this->btn0Area->UseVisualStyleBackColor = true;
			this->btn0Area->Click += gcnew System::EventHandler(this, &Stardard::btn0Area_Click);
			// 
			// btnDelArea
			// 
			this->btnDelArea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelArea->Location = System::Drawing::Point(282, 169);
			this->btnDelArea->Name = L"btnDelArea";
			this->btnDelArea->Size = System::Drawing::Size(79, 48);
			this->btnDelArea->TabIndex = 33;
			this->btnDelArea->Text = L"del";
			this->btnDelArea->UseVisualStyleBackColor = true;
			this->btnDelArea->Click += gcnew System::EventHandler(this, &Stardard::btnDelArea_Click);
			// 
			// btnCEArea
			// 
			this->btnCEArea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCEArea->Location = System::Drawing::Point(203, 169);
			this->btnCEArea->Name = L"btnCEArea";
			this->btnCEArea->Size = System::Drawing::Size(79, 48);
			this->btnCEArea->TabIndex = 33;
			this->btnCEArea->Text = L"CE";
			this->btnCEArea->UseVisualStyleBackColor = true;
			this->btnCEArea->Click += gcnew System::EventHandler(this, &Stardard::btnCEArea_Click);
			// 
			// cbbOutputArea
			// 
			this->cbbOutputArea->FormattingEnabled = true;
			this->cbbOutputArea->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"square meter", L"square kilometer", L"hecta",
					L"acres", L"square decimeter", L"square centimeter", L"square milimeter", L"square hectares", L"square inch", L"square feet",
					L"square yards", L"square miles"
			});
			this->cbbOutputArea->Location = System::Drawing::Point(1, 125);
			this->cbbOutputArea->Name = L"cbbOutputArea";
			this->cbbOutputArea->Size = System::Drawing::Size(156, 30);
			this->cbbOutputArea->TabIndex = 3;
			this->cbbOutputArea->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbOutputArea_SelectedIndexChanged);
			// 
			// txtOutputArea
			// 
			this->txtOutputArea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutputArea->Location = System::Drawing::Point(1, 78);
			this->txtOutputArea->Name = L"txtOutputArea";
			this->txtOutputArea->Size = System::Drawing::Size(360, 46);
			this->txtOutputArea->TabIndex = 2;
			// 
			// cbbInputArea
			// 
			this->cbbInputArea->FormattingEnabled = true;
			this->cbbInputArea->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"square meter", L"square kilometer", L"hecta",
					L"acres", L"square decimeter", L"square centimeter", L"square milimeter", L"square hectares", L"square inch", L"square feet",
					L"square yards", L"square miles"
			});
			this->cbbInputArea->Location = System::Drawing::Point(1, 47);
			this->cbbInputArea->Name = L"cbbInputArea";
			this->cbbInputArea->Size = System::Drawing::Size(156, 30);
			this->cbbInputArea->TabIndex = 1;
			this->cbbInputArea->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbInputArea_SelectedIndexChanged);
			// 
			// txtInputArea
			// 
			this->txtInputArea->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInputArea->Location = System::Drawing::Point(0, 0);
			this->txtInputArea->Name = L"txtInputArea";
			this->txtInputArea->Size = System::Drawing::Size(361, 46);
			this->txtInputArea->TabIndex = 0;
			this->txtInputArea->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputArea_TextChanged);
			// 
			// WeightPanel
			// 
			this->WeightPanel->Controls->Add(this->btnSwapWeight);
			this->WeightPanel->Controls->Add(this->btn9Weight);
			this->WeightPanel->Controls->Add(this->btn8Weight);
			this->WeightPanel->Controls->Add(this->btn7Weight);
			this->WeightPanel->Controls->Add(this->btn6Weight);
			this->WeightPanel->Controls->Add(this->btn5Weight);
			this->WeightPanel->Controls->Add(this->btn4Weight);
			this->WeightPanel->Controls->Add(this->btn3Weight);
			this->WeightPanel->Controls->Add(this->btn2Weight);
			this->WeightPanel->Controls->Add(this->btn1Weight);
			this->WeightPanel->Controls->Add(this->btnPointWeight);
			this->WeightPanel->Controls->Add(this->btn0Weight);
			this->WeightPanel->Controls->Add(this->btnDelWeight);
			this->WeightPanel->Controls->Add(this->btnCEWeight);
			this->WeightPanel->Controls->Add(this->cbbOutputWeight);
			this->WeightPanel->Controls->Add(this->txtOutputWeight);
			this->WeightPanel->Controls->Add(this->cbbInputWeight);
			this->WeightPanel->Controls->Add(this->txtInputWeight);
			this->WeightPanel->Location = System::Drawing::Point(719, 31);
			this->WeightPanel->Name = L"WeightPanel";
			this->WeightPanel->Size = System::Drawing::Size(361, 407);
			this->WeightPanel->TabIndex = 36;
			// 
			// btnSwapWeight
			// 
			this->btnSwapWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwapWeight->Location = System::Drawing::Point(125, 169);
			this->btnSwapWeight->Name = L"btnSwapWeight";
			this->btnSwapWeight->Size = System::Drawing::Size(79, 48);
			this->btnSwapWeight->TabIndex = 34;
			this->btnSwapWeight->Text = L"SWAP";
			this->btnSwapWeight->UseVisualStyleBackColor = true;
			this->btnSwapWeight->Click += gcnew System::EventHandler(this, &Stardard::btnSwapWeight_Click);
			// 
			// btn9Weight
			// 
			this->btn9Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9Weight->Location = System::Drawing::Point(282, 216);
			this->btn9Weight->Name = L"btn9Weight";
			this->btn9Weight->Size = System::Drawing::Size(79, 48);
			this->btn9Weight->TabIndex = 33;
			this->btn9Weight->Text = L"9";
			this->btn9Weight->UseVisualStyleBackColor = true;
			this->btn9Weight->Click += gcnew System::EventHandler(this, &Stardard::btn9Weight_Click);
			// 
			// btn8Weight
			// 
			this->btn8Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8Weight->Location = System::Drawing::Point(203, 216);
			this->btn8Weight->Name = L"btn8Weight";
			this->btn8Weight->Size = System::Drawing::Size(79, 48);
			this->btn8Weight->TabIndex = 33;
			this->btn8Weight->Text = L"8";
			this->btn8Weight->UseVisualStyleBackColor = true;
			this->btn8Weight->Click += gcnew System::EventHandler(this, &Stardard::btn8Weight_Click);
			// 
			// btn7Weight
			// 
			this->btn7Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7Weight->Location = System::Drawing::Point(125, 216);
			this->btn7Weight->Name = L"btn7Weight";
			this->btn7Weight->Size = System::Drawing::Size(79, 48);
			this->btn7Weight->TabIndex = 33;
			this->btn7Weight->Text = L"7";
			this->btn7Weight->UseVisualStyleBackColor = true;
			this->btn7Weight->Click += gcnew System::EventHandler(this, &Stardard::btn7Weight_Click);
			// 
			// btn6Weight
			// 
			this->btn6Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6Weight->Location = System::Drawing::Point(282, 263);
			this->btn6Weight->Name = L"btn6Weight";
			this->btn6Weight->Size = System::Drawing::Size(79, 48);
			this->btn6Weight->TabIndex = 33;
			this->btn6Weight->Text = L"6";
			this->btn6Weight->UseVisualStyleBackColor = true;
			this->btn6Weight->Click += gcnew System::EventHandler(this, &Stardard::btn6Weight_Click);
			// 
			// btn5Weight
			// 
			this->btn5Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5Weight->Location = System::Drawing::Point(203, 263);
			this->btn5Weight->Name = L"btn5Weight";
			this->btn5Weight->Size = System::Drawing::Size(79, 48);
			this->btn5Weight->TabIndex = 33;
			this->btn5Weight->Text = L"5";
			this->btn5Weight->UseVisualStyleBackColor = true;
			this->btn5Weight->Click += gcnew System::EventHandler(this, &Stardard::btn5Weight_Click);
			// 
			// btn4Weight
			// 
			this->btn4Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4Weight->Location = System::Drawing::Point(125, 263);
			this->btn4Weight->Name = L"btn4Weight";
			this->btn4Weight->Size = System::Drawing::Size(79, 48);
			this->btn4Weight->TabIndex = 33;
			this->btn4Weight->Text = L"4";
			this->btn4Weight->UseVisualStyleBackColor = true;
			this->btn4Weight->Click += gcnew System::EventHandler(this, &Stardard::btn4Weight_Click);
			// 
			// btn3Weight
			// 
			this->btn3Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3Weight->Location = System::Drawing::Point(282, 310);
			this->btn3Weight->Name = L"btn3Weight";
			this->btn3Weight->Size = System::Drawing::Size(79, 48);
			this->btn3Weight->TabIndex = 33;
			this->btn3Weight->Text = L"3";
			this->btn3Weight->UseVisualStyleBackColor = true;
			this->btn3Weight->Click += gcnew System::EventHandler(this, &Stardard::btn3Weight_Click);
			// 
			// btn2Weight
			// 
			this->btn2Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Weight->Location = System::Drawing::Point(203, 310);
			this->btn2Weight->Name = L"btn2Weight";
			this->btn2Weight->Size = System::Drawing::Size(79, 48);
			this->btn2Weight->TabIndex = 33;
			this->btn2Weight->Text = L"2";
			this->btn2Weight->UseVisualStyleBackColor = true;
			this->btn2Weight->Click += gcnew System::EventHandler(this, &Stardard::btn2Weight_Click);
			// 
			// btn1Weight
			// 
			this->btn1Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Weight->Location = System::Drawing::Point(125, 310);
			this->btn1Weight->Name = L"btn1Weight";
			this->btn1Weight->Size = System::Drawing::Size(79, 48);
			this->btn1Weight->TabIndex = 33;
			this->btn1Weight->Text = L"1";
			this->btn1Weight->UseVisualStyleBackColor = true;
			this->btn1Weight->Click += gcnew System::EventHandler(this, &Stardard::btn1Weight_Click);
			// 
			// btnPointWeight
			// 
			this->btnPointWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPointWeight->Location = System::Drawing::Point(282, 357);
			this->btnPointWeight->Name = L"btnPointWeight";
			this->btnPointWeight->Size = System::Drawing::Size(79, 48);
			this->btnPointWeight->TabIndex = 33;
			this->btnPointWeight->Text = L".";
			this->btnPointWeight->UseVisualStyleBackColor = true;
			this->btnPointWeight->Click += gcnew System::EventHandler(this, &Stardard::btnPointWeight_Click);
			// 
			// btn0Weight
			// 
			this->btn0Weight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0Weight->Location = System::Drawing::Point(203, 357);
			this->btn0Weight->Name = L"btn0Weight";
			this->btn0Weight->Size = System::Drawing::Size(79, 48);
			this->btn0Weight->TabIndex = 33;
			this->btn0Weight->Text = L"0";
			this->btn0Weight->UseVisualStyleBackColor = true;
			this->btn0Weight->Click += gcnew System::EventHandler(this, &Stardard::btn0Weight_Click);
			// 
			// btnDelWeight
			// 
			this->btnDelWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelWeight->Location = System::Drawing::Point(282, 169);
			this->btnDelWeight->Name = L"btnDelWeight";
			this->btnDelWeight->Size = System::Drawing::Size(79, 48);
			this->btnDelWeight->TabIndex = 33;
			this->btnDelWeight->Text = L"del";
			this->btnDelWeight->UseVisualStyleBackColor = true;
			this->btnDelWeight->Click += gcnew System::EventHandler(this, &Stardard::btnDelWeight_Click);
			// 
			// btnCEWeight
			// 
			this->btnCEWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCEWeight->Location = System::Drawing::Point(203, 169);
			this->btnCEWeight->Name = L"btnCEWeight";
			this->btnCEWeight->Size = System::Drawing::Size(79, 48);
			this->btnCEWeight->TabIndex = 33;
			this->btnCEWeight->Text = L"CE";
			this->btnCEWeight->UseVisualStyleBackColor = true;
			this->btnCEWeight->Click += gcnew System::EventHandler(this, &Stardard::btnCEWeight_Click);
			// 
			// cbbOutputWeight
			// 
			this->cbbOutputWeight->FormattingEnabled = true;
			this->cbbOutputWeight->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"grams", L"carats", L"miligrams", L"centigrams",
					L"decigrams", L"dekgrams", L"hectograms", L"kilograms", L"metric tonnes", L"ounces", L"pounds", L"stone", L"short tons(us)",
					L"long tons(uk)"
			});
			this->cbbOutputWeight->Location = System::Drawing::Point(1, 125);
			this->cbbOutputWeight->Name = L"cbbOutputWeight";
			this->cbbOutputWeight->Size = System::Drawing::Size(156, 30);
			this->cbbOutputWeight->TabIndex = 3;
			this->cbbOutputWeight->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbOutputWeight_SelectedIndexChanged);
			// 
			// txtOutputWeight
			// 
			this->txtOutputWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutputWeight->Location = System::Drawing::Point(1, 78);
			this->txtOutputWeight->Name = L"txtOutputWeight";
			this->txtOutputWeight->Size = System::Drawing::Size(360, 46);
			this->txtOutputWeight->TabIndex = 2;
			// 
			// cbbInputWeight
			// 
			this->cbbInputWeight->FormattingEnabled = true;
			this->cbbInputWeight->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"grams", L"carats", L"miligrams", L"centigrams",
					L"decigrams", L"dekgrams", L"hectograms", L"kilograms", L"metric tonnes", L"ounces", L"pounds", L"stone", L"short tons(us)",
					L"long tons(uk)"
			});
			this->cbbInputWeight->Location = System::Drawing::Point(1, 47);
			this->cbbInputWeight->Name = L"cbbInputWeight";
			this->cbbInputWeight->Size = System::Drawing::Size(156, 30);
			this->cbbInputWeight->TabIndex = 1;
			this->cbbInputWeight->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbInputWeight_SelectedIndexChanged);
			// 
			// txtInputWeight
			// 
			this->txtInputWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInputWeight->Location = System::Drawing::Point(0, 0);
			this->txtInputWeight->Name = L"txtInputWeight";
			this->txtInputWeight->Size = System::Drawing::Size(361, 46);
			this->txtInputWeight->TabIndex = 0;
			this->txtInputWeight->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputWeight_TextChanged);
			// 
			// txtMode
			// 
			this->txtMode->Location = System::Drawing::Point(194, 0);
			this->txtMode->Name = L"txtMode";
			this->txtMode->Size = System::Drawing::Size(399, 30);
			this->txtMode->TabIndex = 35;
			this->txtMode->Text = L"Stardard <-> Convert Length";
			// 
			// VolumePanel
			// 
			this->VolumePanel->Controls->Add(this->btnSwapVolume);
			this->VolumePanel->Controls->Add(this->btn9_Volume);
			this->VolumePanel->Controls->Add(this->btn8_Volume);
			this->VolumePanel->Controls->Add(this->btn7_Volume);
			this->VolumePanel->Controls->Add(this->btn6_Volume);
			this->VolumePanel->Controls->Add(this->btn5_Volume);
			this->VolumePanel->Controls->Add(this->btn4_Volume);
			this->VolumePanel->Controls->Add(this->btn3_Volume);
			this->VolumePanel->Controls->Add(this->btn2_Volume);
			this->VolumePanel->Controls->Add(this->btn1_Volume);
			this->VolumePanel->Controls->Add(this->btnPoint_Volume);
			this->VolumePanel->Controls->Add(this->btn0_Volume);
			this->VolumePanel->Controls->Add(this->btnDel_Volume);
			this->VolumePanel->Controls->Add(this->btnCE_Volume);
			this->VolumePanel->Controls->Add(this->cbbOutputVolume);
			this->VolumePanel->Controls->Add(this->txtOutputVolume);
			this->VolumePanel->Controls->Add(this->cbbInputVolume);
			this->VolumePanel->Controls->Add(this->txtInputVolume);
			this->VolumePanel->Location = System::Drawing::Point(719, 31);
			this->VolumePanel->Name = L"VolumePanel";
			this->VolumePanel->Size = System::Drawing::Size(364, 407);
			this->VolumePanel->TabIndex = 33;
			// 
			// btnSwapVolume
			// 
			this->btnSwapVolume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwapVolume->Location = System::Drawing::Point(125, 169);
			this->btnSwapVolume->Name = L"btnSwapVolume";
			this->btnSwapVolume->Size = System::Drawing::Size(79, 48);
			this->btnSwapVolume->TabIndex = 34;
			this->btnSwapVolume->Text = L"SWAP";
			this->btnSwapVolume->UseVisualStyleBackColor = true;
			this->btnSwapVolume->Click += gcnew System::EventHandler(this, &Stardard::btnSwapVolume_Click);
			// 
			// btn9_Volume
			// 
			this->btn9_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9_Volume->Location = System::Drawing::Point(283, 216);
			this->btn9_Volume->Name = L"btn9_Volume";
			this->btn9_Volume->Size = System::Drawing::Size(79, 48);
			this->btn9_Volume->TabIndex = 33;
			this->btn9_Volume->Text = L"9";
			this->btn9_Volume->UseVisualStyleBackColor = true;
			this->btn9_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn9_Volume_Click);
			// 
			// btn8_Volume
			// 
			this->btn8_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8_Volume->Location = System::Drawing::Point(203, 216);
			this->btn8_Volume->Name = L"btn8_Volume";
			this->btn8_Volume->Size = System::Drawing::Size(79, 48);
			this->btn8_Volume->TabIndex = 33;
			this->btn8_Volume->Text = L"8";
			this->btn8_Volume->UseVisualStyleBackColor = true;
			this->btn8_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn8_Volume_Click);
			// 
			// btn7_Volume
			// 
			this->btn7_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7_Volume->Location = System::Drawing::Point(125, 216);
			this->btn7_Volume->Name = L"btn7_Volume";
			this->btn7_Volume->Size = System::Drawing::Size(79, 48);
			this->btn7_Volume->TabIndex = 33;
			this->btn7_Volume->Text = L"7";
			this->btn7_Volume->UseVisualStyleBackColor = true;
			this->btn7_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn7_Volume_Click);
			// 
			// btn6_Volume
			// 
			this->btn6_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6_Volume->Location = System::Drawing::Point(282, 263);
			this->btn6_Volume->Name = L"btn6_Volume";
			this->btn6_Volume->Size = System::Drawing::Size(79, 48);
			this->btn6_Volume->TabIndex = 33;
			this->btn6_Volume->Text = L"6";
			this->btn6_Volume->UseVisualStyleBackColor = true;
			this->btn6_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn6_Volume_Click);
			// 
			// btn5_Volume
			// 
			this->btn5_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5_Volume->Location = System::Drawing::Point(203, 263);
			this->btn5_Volume->Name = L"btn5_Volume";
			this->btn5_Volume->Size = System::Drawing::Size(79, 48);
			this->btn5_Volume->TabIndex = 33;
			this->btn5_Volume->Text = L"5";
			this->btn5_Volume->UseVisualStyleBackColor = true;
			this->btn5_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn5_Volume_Click);
			// 
			// btn4_Volume
			// 
			this->btn4_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4_Volume->Location = System::Drawing::Point(125, 263);
			this->btn4_Volume->Name = L"btn4_Volume";
			this->btn4_Volume->Size = System::Drawing::Size(79, 48);
			this->btn4_Volume->TabIndex = 33;
			this->btn4_Volume->Text = L"4";
			this->btn4_Volume->UseVisualStyleBackColor = true;
			this->btn4_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn4_Volume_Click);
			// 
			// btn3_Volume
			// 
			this->btn3_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3_Volume->Location = System::Drawing::Point(282, 310);
			this->btn3_Volume->Name = L"btn3_Volume";
			this->btn3_Volume->Size = System::Drawing::Size(79, 48);
			this->btn3_Volume->TabIndex = 33;
			this->btn3_Volume->Text = L"3";
			this->btn3_Volume->UseVisualStyleBackColor = true;
			this->btn3_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn3_Volume_Click);
			// 
			// btn2_Volume
			// 
			this->btn2_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2_Volume->Location = System::Drawing::Point(203, 310);
			this->btn2_Volume->Name = L"btn2_Volume";
			this->btn2_Volume->Size = System::Drawing::Size(79, 48);
			this->btn2_Volume->TabIndex = 33;
			this->btn2_Volume->Text = L"2";
			this->btn2_Volume->UseVisualStyleBackColor = true;
			this->btn2_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn2_Volume_Click);
			// 
			// btn1_Volume
			// 
			this->btn1_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1_Volume->Location = System::Drawing::Point(125, 310);
			this->btn1_Volume->Name = L"btn1_Volume";
			this->btn1_Volume->Size = System::Drawing::Size(79, 48);
			this->btn1_Volume->TabIndex = 33;
			this->btn1_Volume->Text = L"1";
			this->btn1_Volume->UseVisualStyleBackColor = true;
			this->btn1_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn1_Volume_Click);
			// 
			// btnPoint_Volume
			// 
			this->btnPoint_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPoint_Volume->Location = System::Drawing::Point(282, 357);
			this->btnPoint_Volume->Name = L"btnPoint_Volume";
			this->btnPoint_Volume->Size = System::Drawing::Size(79, 48);
			this->btnPoint_Volume->TabIndex = 33;
			this->btnPoint_Volume->Text = L".";
			this->btnPoint_Volume->UseVisualStyleBackColor = true;
			this->btnPoint_Volume->Click += gcnew System::EventHandler(this, &Stardard::btnPoint_Volume_Click);
			// 
			// btn0_Volume
			// 
			this->btn0_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0_Volume->Location = System::Drawing::Point(203, 357);
			this->btn0_Volume->Name = L"btn0_Volume";
			this->btn0_Volume->Size = System::Drawing::Size(79, 48);
			this->btn0_Volume->TabIndex = 33;
			this->btn0_Volume->Text = L"0";
			this->btn0_Volume->UseVisualStyleBackColor = true;
			this->btn0_Volume->Click += gcnew System::EventHandler(this, &Stardard::btn0_Volume_Click);
			// 
			// btnDel_Volume
			// 
			this->btnDel_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDel_Volume->Location = System::Drawing::Point(282, 169);
			this->btnDel_Volume->Name = L"btnDel_Volume";
			this->btnDel_Volume->Size = System::Drawing::Size(79, 48);
			this->btnDel_Volume->TabIndex = 33;
			this->btnDel_Volume->Text = L"del";
			this->btnDel_Volume->UseVisualStyleBackColor = true;
			this->btnDel_Volume->Click += gcnew System::EventHandler(this, &Stardard::btnDel_Volume_Click);
			// 
			// btnCE_Volume
			// 
			this->btnCE_Volume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE_Volume->Location = System::Drawing::Point(203, 169);
			this->btnCE_Volume->Name = L"btnCE_Volume";
			this->btnCE_Volume->Size = System::Drawing::Size(79, 48);
			this->btnCE_Volume->TabIndex = 33;
			this->btnCE_Volume->Text = L"CE";
			this->btnCE_Volume->UseVisualStyleBackColor = true;
			this->btnCE_Volume->Click += gcnew System::EventHandler(this, &Stardard::btnCE_Volume_Click);
			// 
			// cbbOutputVolume
			// 
			this->cbbOutputVolume->FormattingEnabled = true;
			this->cbbOutputVolume->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Cubic Meter", L"Cubic Kilometer", L"Decaliter",
					L"Centiliter", L"Cubic Centimeter", L"Cubic Milimeter", L"Mililiter", L"Viroliter", L"Cubic Yard", L"Cubic Foot", L"Gallon",
					L"Cubic Inch"
			});
			this->cbbOutputVolume->Location = System::Drawing::Point(1, 125);
			this->cbbOutputVolume->Name = L"cbbOutputVolume";
			this->cbbOutputVolume->Size = System::Drawing::Size(156, 30);
			this->cbbOutputVolume->TabIndex = 3;
			this->cbbOutputVolume->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbOutputVolume_SelectedIndexChanged);
			// 
			// txtOutputVolume
			// 
			this->txtOutputVolume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutputVolume->Location = System::Drawing::Point(1, 78);
			this->txtOutputVolume->Name = L"txtOutputVolume";
			this->txtOutputVolume->Size = System::Drawing::Size(360, 46);
			this->txtOutputVolume->TabIndex = 2;
			// 
			// cbbInputVolume
			// 
			this->cbbInputVolume->FormattingEnabled = true;
			this->cbbInputVolume->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Cubic Meter", L"Cubic Kilometer", L"Decaliter",
					L"Centiliter", L"Cubic Centimeter", L"Cubic Milimeter", L"Mililiter", L"Viroliter", L"Cubic Yard", L"Cubic Foot", L"Gallon",
					L"Cubic Inch"
			});
			this->cbbInputVolume->Location = System::Drawing::Point(0, 47);
			this->cbbInputVolume->Name = L"cbbInputVolume";
			this->cbbInputVolume->Size = System::Drawing::Size(156, 30);
			this->cbbInputVolume->TabIndex = 1;
			this->cbbInputVolume->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbInputVolume_SelectedIndexChanged);
			// 
			// txtInputVolume
			// 
			this->txtInputVolume->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInputVolume->Location = System::Drawing::Point(0, 0);
			this->txtInputVolume->Name = L"txtInputVolume";
			this->txtInputVolume->Size = System::Drawing::Size(361, 46);
			this->txtInputVolume->TabIndex = 0;
			this->txtInputVolume->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputVolume_TextChanged);
			// 
			// LengthPanel
			// 
			this->LengthPanel->Controls->Add(this->btnSwapLength);
			this->LengthPanel->Controls->Add(this->btn9Length);
			this->LengthPanel->Controls->Add(this->btn8Length);
			this->LengthPanel->Controls->Add(this->btn7Length);
			this->LengthPanel->Controls->Add(this->btn6Length);
			this->LengthPanel->Controls->Add(this->btn5Length);
			this->LengthPanel->Controls->Add(this->btn4Length);
			this->LengthPanel->Controls->Add(this->btn3Length);
			this->LengthPanel->Controls->Add(this->btn2Length);
			this->LengthPanel->Controls->Add(this->btn1Length);
			this->LengthPanel->Controls->Add(this->btnPointLength);
			this->LengthPanel->Controls->Add(this->btn0Length);
			this->LengthPanel->Controls->Add(this->btnDelLength);
			this->LengthPanel->Controls->Add(this->btnCELength);
			this->LengthPanel->Controls->Add(this->cbbOutputLength);
			this->LengthPanel->Controls->Add(this->txtOutputLength);
			this->LengthPanel->Controls->Add(this->cbbInputLength);
			this->LengthPanel->Controls->Add(this->txtInputLength);
			this->LengthPanel->Location = System::Drawing::Point(719, 31);
			this->LengthPanel->Name = L"LengthPanel";
			this->LengthPanel->Size = System::Drawing::Size(361, 407);
			this->LengthPanel->TabIndex = 35;
			// 
			// btnSwapLength
			// 
			this->btnSwapLength->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwapLength->Location = System::Drawing::Point(125, 169);
			this->btnSwapLength->Name = L"btnSwapLength";
			this->btnSwapLength->Size = System::Drawing::Size(79, 48);
			this->btnSwapLength->TabIndex = 34;
			this->btnSwapLength->Text = L"SWAP";
			this->btnSwapLength->UseVisualStyleBackColor = true;
			this->btnSwapLength->Click += gcnew System::EventHandler(this, &Stardard::btnSwapLength_Click);
			// 
			// btn9Length
			// 
			this->btn9Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9Length->Location = System::Drawing::Point(282, 216);
			this->btn9Length->Name = L"btn9Length";
			this->btn9Length->Size = System::Drawing::Size(79, 48);
			this->btn9Length->TabIndex = 33;
			this->btn9Length->Text = L"9";
			this->btn9Length->UseVisualStyleBackColor = true;
			this->btn9Length->Click += gcnew System::EventHandler(this, &Stardard::btn9Length_Click);
			// 
			// btn8Length
			// 
			this->btn8Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8Length->Location = System::Drawing::Point(203, 216);
			this->btn8Length->Name = L"btn8Length";
			this->btn8Length->Size = System::Drawing::Size(79, 48);
			this->btn8Length->TabIndex = 33;
			this->btn8Length->Text = L"8";
			this->btn8Length->UseVisualStyleBackColor = true;
			this->btn8Length->Click += gcnew System::EventHandler(this, &Stardard::btn8Length_Click);
			// 
			// btn7Length
			// 
			this->btn7Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7Length->Location = System::Drawing::Point(125, 216);
			this->btn7Length->Name = L"btn7Length";
			this->btn7Length->Size = System::Drawing::Size(79, 48);
			this->btn7Length->TabIndex = 33;
			this->btn7Length->Text = L"7";
			this->btn7Length->UseVisualStyleBackColor = true;
			this->btn7Length->Click += gcnew System::EventHandler(this, &Stardard::btn7Length_Click);
			// 
			// btn6Length
			// 
			this->btn6Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6Length->Location = System::Drawing::Point(282, 263);
			this->btn6Length->Name = L"btn6Length";
			this->btn6Length->Size = System::Drawing::Size(79, 48);
			this->btn6Length->TabIndex = 33;
			this->btn6Length->Text = L"6";
			this->btn6Length->UseVisualStyleBackColor = true;
			this->btn6Length->Click += gcnew System::EventHandler(this, &Stardard::btn6Length_Click);
			// 
			// btn5Length
			// 
			this->btn5Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5Length->Location = System::Drawing::Point(203, 263);
			this->btn5Length->Name = L"btn5Length";
			this->btn5Length->Size = System::Drawing::Size(79, 48);
			this->btn5Length->TabIndex = 33;
			this->btn5Length->Text = L"5";
			this->btn5Length->UseVisualStyleBackColor = true;
			this->btn5Length->Click += gcnew System::EventHandler(this, &Stardard::btn5Length_Click);
			// 
			// btn4Length
			// 
			this->btn4Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4Length->Location = System::Drawing::Point(125, 263);
			this->btn4Length->Name = L"btn4Length";
			this->btn4Length->Size = System::Drawing::Size(79, 48);
			this->btn4Length->TabIndex = 33;
			this->btn4Length->Text = L"4";
			this->btn4Length->UseVisualStyleBackColor = true;
			this->btn4Length->Click += gcnew System::EventHandler(this, &Stardard::btn4Length_Click);
			// 
			// btn3Length
			// 
			this->btn3Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3Length->Location = System::Drawing::Point(282, 310);
			this->btn3Length->Name = L"btn3Length";
			this->btn3Length->Size = System::Drawing::Size(79, 48);
			this->btn3Length->TabIndex = 33;
			this->btn3Length->Text = L"3";
			this->btn3Length->UseVisualStyleBackColor = true;
			this->btn3Length->Click += gcnew System::EventHandler(this, &Stardard::btn3Length_Click);
			// 
			// btn2Length
			// 
			this->btn2Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Length->Location = System::Drawing::Point(203, 310);
			this->btn2Length->Name = L"btn2Length";
			this->btn2Length->Size = System::Drawing::Size(79, 48);
			this->btn2Length->TabIndex = 33;
			this->btn2Length->Text = L"2";
			this->btn2Length->UseVisualStyleBackColor = true;
			this->btn2Length->Click += gcnew System::EventHandler(this, &Stardard::btn2Length_Click);
			// 
			// btn1Length
			// 
			this->btn1Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Length->Location = System::Drawing::Point(125, 310);
			this->btn1Length->Name = L"btn1Length";
			this->btn1Length->Size = System::Drawing::Size(79, 48);
			this->btn1Length->TabIndex = 33;
			this->btn1Length->Text = L"1";
			this->btn1Length->UseVisualStyleBackColor = true;
			this->btn1Length->Click += gcnew System::EventHandler(this, &Stardard::btn1Length_Click);
			// 
			// btnPointLength
			// 
			this->btnPointLength->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPointLength->Location = System::Drawing::Point(282, 357);
			this->btnPointLength->Name = L"btnPointLength";
			this->btnPointLength->Size = System::Drawing::Size(79, 48);
			this->btnPointLength->TabIndex = 33;
			this->btnPointLength->Text = L".";
			this->btnPointLength->UseVisualStyleBackColor = true;
			this->btnPointLength->Click += gcnew System::EventHandler(this, &Stardard::btnPointLength_Click);
			// 
			// btn0Length
			// 
			this->btn0Length->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0Length->Location = System::Drawing::Point(203, 357);
			this->btn0Length->Name = L"btn0Length";
			this->btn0Length->Size = System::Drawing::Size(79, 48);
			this->btn0Length->TabIndex = 33;
			this->btn0Length->Text = L"0";
			this->btn0Length->UseVisualStyleBackColor = true;
			this->btn0Length->Click += gcnew System::EventHandler(this, &Stardard::btn0Length_Click);
			// 
			// btnDelLength
			// 
			this->btnDelLength->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelLength->Location = System::Drawing::Point(282, 169);
			this->btnDelLength->Name = L"btnDelLength";
			this->btnDelLength->Size = System::Drawing::Size(79, 48);
			this->btnDelLength->TabIndex = 33;
			this->btnDelLength->Text = L"del";
			this->btnDelLength->UseVisualStyleBackColor = true;
			this->btnDelLength->Click += gcnew System::EventHandler(this, &Stardard::btnDelLength_Click);
			// 
			// btnCELength
			// 
			this->btnCELength->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCELength->Location = System::Drawing::Point(203, 169);
			this->btnCELength->Name = L"btnCELength";
			this->btnCELength->Size = System::Drawing::Size(79, 48);
			this->btnCELength->TabIndex = 33;
			this->btnCELength->Text = L"CE";
			this->btnCELength->UseVisualStyleBackColor = true;
			this->btnCELength->Click += gcnew System::EventHandler(this, &Stardard::btnCELength_Click);
			// 
			// cbbOutputLength
			// 
			this->cbbOutputLength->FormattingEnabled = true;
			this->cbbOutputLength->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"kilometers", L"meters", L"decimeters",
					L"centimeter", L"milimeters", L"nanometers", L"inches", L"feet", L"yards", L"miles"
			});
			this->cbbOutputLength->Location = System::Drawing::Point(1, 125);
			this->cbbOutputLength->Name = L"cbbOutputLength";
			this->cbbOutputLength->Size = System::Drawing::Size(156, 30);
			this->cbbOutputLength->TabIndex = 3;
			this->cbbOutputLength->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbOutputLength_SelectedIndexChanged);
			// 
			// txtOutputLength
			// 
			this->txtOutputLength->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutputLength->Location = System::Drawing::Point(1, 78);
			this->txtOutputLength->Name = L"txtOutputLength";
			this->txtOutputLength->Size = System::Drawing::Size(360, 46);
			this->txtOutputLength->TabIndex = 2;
			// 
			// cbbInputLength
			// 
			this->cbbInputLength->FormattingEnabled = true;
			this->cbbInputLength->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"kilometers", L"meters", L"decimeters", L"centimeter",
					L"milimeters", L"nanometers", L"inches", L"feet", L"yards", L"miles"
			});
			this->cbbInputLength->Location = System::Drawing::Point(0, 47);
			this->cbbInputLength->Name = L"cbbInputLength";
			this->cbbInputLength->Size = System::Drawing::Size(156, 30);
			this->cbbInputLength->TabIndex = 1;
			this->cbbInputLength->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbInputLength_SelectedIndexChanged);
			// 
			// txtInputLength
			// 
			this->txtInputLength->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInputLength->Location = System::Drawing::Point(0, 0);
			this->txtInputLength->Name = L"txtInputLength";
			this->txtInputLength->Size = System::Drawing::Size(361, 46);
			this->txtInputLength->TabIndex = 0;
			this->txtInputLength->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputLength_TextChanged);
			// 
			// SpeedPanel
			// 
			this->SpeedPanel->Controls->Add(this->btnSwapSpeed);
			this->SpeedPanel->Controls->Add(this->btn9Speed);
			this->SpeedPanel->Controls->Add(this->btn8Speed);
			this->SpeedPanel->Controls->Add(this->btn7Speed);
			this->SpeedPanel->Controls->Add(this->btn6Speed);
			this->SpeedPanel->Controls->Add(this->btn5Speed);
			this->SpeedPanel->Controls->Add(this->btn4Speed);
			this->SpeedPanel->Controls->Add(this->btn3Speed);
			this->SpeedPanel->Controls->Add(this->btn2Speed);
			this->SpeedPanel->Controls->Add(this->btn1Speed);
			this->SpeedPanel->Controls->Add(this->btnPointSpeed);
			this->SpeedPanel->Controls->Add(this->btn0Speed);
			this->SpeedPanel->Controls->Add(this->btnDelSpeed);
			this->SpeedPanel->Controls->Add(this->btnCESpeed);
			this->SpeedPanel->Controls->Add(this->cbbOutputSpeed);
			this->SpeedPanel->Controls->Add(this->txtOutputSpeed);
			this->SpeedPanel->Controls->Add(this->cbbInputSpeed);
			this->SpeedPanel->Controls->Add(this->txtInputSpeed);
			this->SpeedPanel->Location = System::Drawing::Point(719, 31);
			this->SpeedPanel->Name = L"SpeedPanel";
			this->SpeedPanel->Size = System::Drawing::Size(361, 407);
			this->SpeedPanel->TabIndex = 38;
			// 
			// btnSwapSpeed
			// 
			this->btnSwapSpeed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSwapSpeed->Location = System::Drawing::Point(125, 169);
			this->btnSwapSpeed->Name = L"btnSwapSpeed";
			this->btnSwapSpeed->Size = System::Drawing::Size(79, 48);
			this->btnSwapSpeed->TabIndex = 34;
			this->btnSwapSpeed->Text = L"SWAP";
			this->btnSwapSpeed->UseVisualStyleBackColor = true;
			this->btnSwapSpeed->Click += gcnew System::EventHandler(this, &Stardard::btnSwapSpeed_Click);
			// 
			// btn9Speed
			// 
			this->btn9Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9Speed->Location = System::Drawing::Point(282, 216);
			this->btn9Speed->Name = L"btn9Speed";
			this->btn9Speed->Size = System::Drawing::Size(79, 48);
			this->btn9Speed->TabIndex = 33;
			this->btn9Speed->Text = L"9";
			this->btn9Speed->UseVisualStyleBackColor = true;
			this->btn9Speed->Click += gcnew System::EventHandler(this, &Stardard::btn9Speed_Click);
			// 
			// btn8Speed
			// 
			this->btn8Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8Speed->Location = System::Drawing::Point(203, 216);
			this->btn8Speed->Name = L"btn8Speed";
			this->btn8Speed->Size = System::Drawing::Size(79, 48);
			this->btn8Speed->TabIndex = 33;
			this->btn8Speed->Text = L"8";
			this->btn8Speed->UseVisualStyleBackColor = true;
			this->btn8Speed->Click += gcnew System::EventHandler(this, &Stardard::btn8Speed_Click);
			// 
			// btn7Speed
			// 
			this->btn7Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7Speed->Location = System::Drawing::Point(125, 216);
			this->btn7Speed->Name = L"btn7Speed";
			this->btn7Speed->Size = System::Drawing::Size(79, 48);
			this->btn7Speed->TabIndex = 33;
			this->btn7Speed->Text = L"7";
			this->btn7Speed->UseVisualStyleBackColor = true;
			this->btn7Speed->Click += gcnew System::EventHandler(this, &Stardard::btn7Speed_Click);
			// 
			// btn6Speed
			// 
			this->btn6Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6Speed->Location = System::Drawing::Point(282, 263);
			this->btn6Speed->Name = L"btn6Speed";
			this->btn6Speed->Size = System::Drawing::Size(79, 48);
			this->btn6Speed->TabIndex = 33;
			this->btn6Speed->Text = L"6";
			this->btn6Speed->UseVisualStyleBackColor = true;
			this->btn6Speed->Click += gcnew System::EventHandler(this, &Stardard::btn6Speed_Click);
			// 
			// btn5Speed
			// 
			this->btn5Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5Speed->Location = System::Drawing::Point(203, 263);
			this->btn5Speed->Name = L"btn5Speed";
			this->btn5Speed->Size = System::Drawing::Size(79, 48);
			this->btn5Speed->TabIndex = 33;
			this->btn5Speed->Text = L"5";
			this->btn5Speed->UseVisualStyleBackColor = true;
			this->btn5Speed->Click += gcnew System::EventHandler(this, &Stardard::btn5Speed_Click);
			// 
			// btn4Speed
			// 
			this->btn4Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4Speed->Location = System::Drawing::Point(125, 263);
			this->btn4Speed->Name = L"btn4Speed";
			this->btn4Speed->Size = System::Drawing::Size(79, 48);
			this->btn4Speed->TabIndex = 33;
			this->btn4Speed->Text = L"4";
			this->btn4Speed->UseVisualStyleBackColor = true;
			this->btn4Speed->Click += gcnew System::EventHandler(this, &Stardard::btn4Speed_Click);
			// 
			// btn3Speed
			// 
			this->btn3Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3Speed->Location = System::Drawing::Point(282, 310);
			this->btn3Speed->Name = L"btn3Speed";
			this->btn3Speed->Size = System::Drawing::Size(79, 48);
			this->btn3Speed->TabIndex = 33;
			this->btn3Speed->Text = L"3";
			this->btn3Speed->UseVisualStyleBackColor = true;
			this->btn3Speed->Click += gcnew System::EventHandler(this, &Stardard::btn3Speed_Click);
			// 
			// btn2Speed
			// 
			this->btn2Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2Speed->Location = System::Drawing::Point(203, 310);
			this->btn2Speed->Name = L"btn2Speed";
			this->btn2Speed->Size = System::Drawing::Size(79, 48);
			this->btn2Speed->TabIndex = 33;
			this->btn2Speed->Text = L"2";
			this->btn2Speed->UseVisualStyleBackColor = true;
			this->btn2Speed->Click += gcnew System::EventHandler(this, &Stardard::btn2Speed_Click);
			// 
			// btn1Speed
			// 
			this->btn1Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1Speed->Location = System::Drawing::Point(125, 310);
			this->btn1Speed->Name = L"btn1Speed";
			this->btn1Speed->Size = System::Drawing::Size(79, 48);
			this->btn1Speed->TabIndex = 33;
			this->btn1Speed->Text = L"1";
			this->btn1Speed->UseVisualStyleBackColor = true;
			this->btn1Speed->Click += gcnew System::EventHandler(this, &Stardard::btn1Speed_Click);
			// 
			// btnPointSpeed
			// 
			this->btnPointSpeed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPointSpeed->Location = System::Drawing::Point(282, 357);
			this->btnPointSpeed->Name = L"btnPointSpeed";
			this->btnPointSpeed->Size = System::Drawing::Size(79, 48);
			this->btnPointSpeed->TabIndex = 33;
			this->btnPointSpeed->Text = L".";
			this->btnPointSpeed->UseVisualStyleBackColor = true;
			this->btnPointSpeed->Click += gcnew System::EventHandler(this, &Stardard::btnPointSpeed_Click);
			// 
			// btn0Speed
			// 
			this->btn0Speed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0Speed->Location = System::Drawing::Point(203, 357);
			this->btn0Speed->Name = L"btn0Speed";
			this->btn0Speed->Size = System::Drawing::Size(79, 48);
			this->btn0Speed->TabIndex = 33;
			this->btn0Speed->Text = L"0";
			this->btn0Speed->UseVisualStyleBackColor = true;
			this->btn0Speed->Click += gcnew System::EventHandler(this, &Stardard::btn0Speed_Click);
			// 
			// btnDelSpeed
			// 
			this->btnDelSpeed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelSpeed->Location = System::Drawing::Point(282, 169);
			this->btnDelSpeed->Name = L"btnDelSpeed";
			this->btnDelSpeed->Size = System::Drawing::Size(79, 48);
			this->btnDelSpeed->TabIndex = 33;
			this->btnDelSpeed->Text = L"del";
			this->btnDelSpeed->UseVisualStyleBackColor = true;
			this->btnDelSpeed->Click += gcnew System::EventHandler(this, &Stardard::btnDelSpeed_Click);
			// 
			// btnCESpeed
			// 
			this->btnCESpeed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCESpeed->Location = System::Drawing::Point(203, 169);
			this->btnCESpeed->Name = L"btnCESpeed";
			this->btnCESpeed->Size = System::Drawing::Size(79, 48);
			this->btnCESpeed->TabIndex = 33;
			this->btnCESpeed->Text = L"CE";
			this->btnCESpeed->UseVisualStyleBackColor = true;
			this->btnCESpeed->Click += gcnew System::EventHandler(this, &Stardard::btnCESpeed_Click);
			// 
			// cbbOutputSpeed
			// 
			this->cbbOutputSpeed->FormattingEnabled = true;
			this->cbbOutputSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"meters per second", L"kilometer per hour",
					L"centimeter per second", L"feet per second", L"miles per hour"
			});
			this->cbbOutputSpeed->Location = System::Drawing::Point(1, 125);
			this->cbbOutputSpeed->Name = L"cbbOutputSpeed";
			this->cbbOutputSpeed->Size = System::Drawing::Size(156, 30);
			this->cbbOutputSpeed->TabIndex = 3;
			this->cbbOutputSpeed->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbOutputSpeed_SelectedIndexChanged);
			// 
			// txtOutputSpeed
			// 
			this->txtOutputSpeed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOutputSpeed->Location = System::Drawing::Point(1, 78);
			this->txtOutputSpeed->Name = L"txtOutputSpeed";
			this->txtOutputSpeed->Size = System::Drawing::Size(360, 46);
			this->txtOutputSpeed->TabIndex = 2;
			// 
			// cbbInputSpeed
			// 
			this->cbbInputSpeed->FormattingEnabled = true;
			this->cbbInputSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"meters per second", L"kilometer per hour",
					L"centimeter per second", L"feet per second", L"miles per hour"
			});
			this->cbbInputSpeed->Location = System::Drawing::Point(1, 47);
			this->cbbInputSpeed->Name = L"cbbInputSpeed";
			this->cbbInputSpeed->Size = System::Drawing::Size(156, 30);
			this->cbbInputSpeed->TabIndex = 1;
			this->cbbInputSpeed->SelectedIndexChanged += gcnew System::EventHandler(this, &Stardard::cbbInputSpeed_SelectedIndexChanged);
			// 
			// txtInputSpeed
			// 
			this->txtInputSpeed->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInputSpeed->Location = System::Drawing::Point(0, 0);
			this->txtInputSpeed->Name = L"txtInputSpeed";
			this->txtInputSpeed->Size = System::Drawing::Size(361, 46);
			this->txtInputSpeed->TabIndex = 0;
			this->txtInputSpeed->TextChanged += gcnew System::EventHandler(this, &Stardard::txtInputSpeed_TextChanged);
			// 
			// ScientificPanel_
			// 
			this->ScientificPanel_->Controls->Add(this->listBox1);
			this->ScientificPanel_->Controls->Add(this->label1);
			this->ScientificPanel_->Controls->Add(this->button13);
			this->ScientificPanel_->Controls->Add(this->button5);
			this->ScientificPanel_->Controls->Add(this->button4);
			this->ScientificPanel_->Controls->Add(this->button10);
			this->ScientificPanel_->Controls->Add(this->button9);
			this->ScientificPanel_->Controls->Add(this->button6);
			this->ScientificPanel_->Controls->Add(this->button18);
			this->ScientificPanel_->Controls->Add(this->button19);
			this->ScientificPanel_->Controls->Add(this->button23);
			this->ScientificPanel_->Controls->Add(this->button24);
			this->ScientificPanel_->Controls->Add(this->button25);
			this->ScientificPanel_->Controls->Add(this->button26);
			this->ScientificPanel_->Controls->Add(this->button27);
			this->ScientificPanel_->Controls->Add(this->button28);
			this->ScientificPanel_->Controls->Add(this->button29);
			this->ScientificPanel_->Controls->Add(this->button30);
			this->ScientificPanel_->Controls->Add(this->button32);
			this->ScientificPanel_->Controls->Add(this->button33);
			this->ScientificPanel_->Controls->Add(this->button34);
			this->ScientificPanel_->Controls->Add(this->button35);
			this->ScientificPanel_->Controls->Add(this->btnC__Scientific);
			this->ScientificPanel_->Controls->Add(this->txtDisplay);
			this->ScientificPanel_->Controls->Add(this->button1);
			this->ScientificPanel_->Controls->Add(this->button2);
			this->ScientificPanel_->Controls->Add(this->button3);
			this->ScientificPanel_->Controls->Add(this->btnDel__Scientific);
			this->ScientificPanel_->Controls->Add(this->btnPlus__Scientific);
			this->ScientificPanel_->Controls->Add(this->button8);
			this->ScientificPanel_->Controls->Add(this->btn9__Scientific);
			this->ScientificPanel_->Controls->Add(this->button14);
			this->ScientificPanel_->Controls->Add(this->button15);
			this->ScientificPanel_->Controls->Add(this->button16);
			this->ScientificPanel_->Controls->Add(this->btn8__Scientific);
			this->ScientificPanel_->Controls->Add(this->button20);
			this->ScientificPanel_->Controls->Add(this->btn4__Scientific);
			this->ScientificPanel_->Controls->Add(this->btn7__Scientific);
			this->ScientificPanel_->Location = System::Drawing::Point(128, 31);
			this->ScientificPanel_->Name = L"ScientificPanel_";
			this->ScientificPanel_->Size = System::Drawing::Size(565, 407);
			this->ScientificPanel_->TabIndex = 72;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Location = System::Drawing::Point(17, 371);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(223, 92);
			this->listBox1->TabIndex = 97;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(354, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 22);
			this->label1->TabIndex = 96;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(407, 177);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 38);
			this->button13->TabIndex = 95;
			this->button13->Text = L"Log";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Stardard::button13_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(165, 290);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 38);
			this->button5->TabIndex = 94;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(165, 179);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 38);
			this->button4->TabIndex = 93;
			this->button4->Text = L"CE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Stardard::button4_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(239, 253);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 38);
			this->button10->TabIndex = 92;
			this->button10->Text = L"*";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Stardard::EnterOp);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(239, 216);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 38);
			this->button9->TabIndex = 91;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Stardard::EnterOp);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(165, 253);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 38);
			this->button6->TabIndex = 88;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(332, 178);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 38);
			this->button18->TabIndex = 87;
			this->button18->Text = L"π";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Stardard::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(481, 326);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 38);
			this->button19->TabIndex = 86;
			this->button19->Text = L"ln";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Stardard::button19_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(481, 289);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 38);
			this->button23->TabIndex = 85;
			this->button23->Text = L"1/x";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Stardard::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(481, 252);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 38);
			this->button24->TabIndex = 84;
			this->button24->Text = L"x^3";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Stardard::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(481, 215);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 38);
			this->button25->TabIndex = 83;
			this->button25->Text = L"x^2";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Stardard::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(481, 177);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 38);
			this->button26->TabIndex = 82;
			this->button26->Text = L"Sqrt";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Stardard::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(407, 326);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 38);
			this->button27->TabIndex = 81;
			this->button27->Text = L"Mod";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Stardard::EnterOp);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(407, 289);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 38);
			this->button28->TabIndex = 80;
			this->button28->Text = L"Tan";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Stardard::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(407, 252);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 38);
			this->button29->TabIndex = 79;
			this->button29->Text = L"Cos";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Stardard::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(407, 215);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 38);
			this->button30->TabIndex = 78;
			this->button30->Text = L"Sin";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Stardard::button30_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(332, 326);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 38);
			this->button32->TabIndex = 76;
			this->button32->Text = L"Exp";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Stardard::EnterOp);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(332, 289);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 38);
			this->button33->TabIndex = 75;
			this->button33->Text = L"Tanh";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Stardard::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(332, 252);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 38);
			this->button34->TabIndex = 74;
			this->button34->Text = L"Cosh";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Stardard::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(332, 215);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 38);
			this->button35->TabIndex = 73;
			this->button35->Text = L"Sinh";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Stardard::button35_Click);
			// 
			// btnC__Scientific
			// 
			this->btnC__Scientific->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC__Scientific->Location = System::Drawing::Point(90, 179);
			this->btnC__Scientific->Name = L"btnC__Scientific";
			this->btnC__Scientific->Size = System::Drawing::Size(75, 38);
			this->btnC__Scientific->TabIndex = 72;
			this->btnC__Scientific->Text = L"C";
			this->btnC__Scientific->UseVisualStyleBackColor = true;
			this->btnC__Scientific->Click += gcnew System::EventHandler(this, &Stardard::btnC__Scientific_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Location = System::Drawing::Point(17, 3);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(539, 138);
			this->txtDisplay->TabIndex = 71;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 327);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 66;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Stardard::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(239, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 38);
			this->button2->TabIndex = 65;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Stardard::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(239, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 38);
			this->button3->TabIndex = 64;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Stardard::EnterOp);
			// 
			// btnDel__Scientific
			// 
			this->btnDel__Scientific->Font = (gcnew System::Drawing::Font(L"Wingdings", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnDel__Scientific->Location = System::Drawing::Point(16, 179);
			this->btnDel__Scientific->Name = L"btnDel__Scientific";
			this->btnDel__Scientific->Size = System::Drawing::Size(75, 38);
			this->btnDel__Scientific->TabIndex = 61;
			this->btnDel__Scientific->Text = L"";
			this->btnDel__Scientific->UseVisualStyleBackColor = true;
			this->btnDel__Scientific->Click += gcnew System::EventHandler(this, &Stardard::btnDel__Scientific_Click);
			// 
			// btnPlus__Scientific
			// 
			this->btnPlus__Scientific->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus__Scientific->Location = System::Drawing::Point(239, 178);
			this->btnPlus__Scientific->Name = L"btnPlus__Scientific";
			this->btnPlus__Scientific->Size = System::Drawing::Size(75, 38);
			this->btnPlus__Scientific->TabIndex = 60;
			this->btnPlus__Scientific->Text = L"+";
			this->btnPlus__Scientific->UseVisualStyleBackColor = true;
			this->btnPlus__Scientific->Click += gcnew System::EventHandler(this, &Stardard::EnterOp);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(165, 327);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 38);
			this->button8->TabIndex = 59;
			this->button8->Text = L".";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Stardard::button8_Click);
			// 
			// btn9__Scientific
			// 
			this->btn9__Scientific->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9__Scientific->Location = System::Drawing::Point(165, 216);
			this->btn9__Scientific->Name = L"btn9__Scientific";
			this->btn9__Scientific->Size = System::Drawing::Size(75, 38);
			this->btn9__Scientific->TabIndex = 56;
			this->btn9__Scientific->Text = L"9";
			this->btn9__Scientific->UseVisualStyleBackColor = true;
			this->btn9__Scientific->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(90, 327);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 38);
			this->button14->TabIndex = 53;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(90, 290);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 38);
			this->button15->TabIndex = 52;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(90, 253);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 38);
			this->button16->TabIndex = 51;
			this->button16->Text = L"5";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// btn8__Scientific
			// 
			this->btn8__Scientific->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8__Scientific->Location = System::Drawing::Point(90, 216);
			this->btn8__Scientific->Name = L"btn8__Scientific";
			this->btn8__Scientific->Size = System::Drawing::Size(75, 38);
			this->btn8__Scientific->TabIndex = 50;
			this->btn8__Scientific->Text = L"8";
			this->btn8__Scientific->UseVisualStyleBackColor = true;
			this->btn8__Scientific->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(16, 290);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 38);
			this->button20->TabIndex = 46;
			this->button20->Text = L"1";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// btn4__Scientific
			// 
			this->btn4__Scientific->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4__Scientific->Location = System::Drawing::Point(16, 253);
			this->btn4__Scientific->Name = L"btn4__Scientific";
			this->btn4__Scientific->Size = System::Drawing::Size(75, 38);
			this->btn4__Scientific->TabIndex = 45;
			this->btn4__Scientific->Text = L"4";
			this->btn4__Scientific->UseVisualStyleBackColor = true;
			this->btn4__Scientific->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// btn7__Scientific
			// 
			this->btn7__Scientific->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7__Scientific->Location = System::Drawing::Point(16, 216);
			this->btn7__Scientific->Name = L"btn7__Scientific";
			this->btn7__Scientific->Size = System::Drawing::Size(75, 38);
			this->btn7__Scientific->TabIndex = 44;
			this->btn7__Scientific->Text = L"7";
			this->btn7__Scientific->UseVisualStyleBackColor = true;
			this->btn7__Scientific->Click += gcnew System::EventHandler(this, &Stardard::EnterNumber);
			// 
			// Stardard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1120, 456);
			this->Controls->Add(this->ScientificPanel_);
			this->Controls->Add(this->ProgramPanel);
			this->Controls->Add(this->CurrencyPanel);
			this->Controls->Add(this->SpeedPanel);
			this->Controls->Add(this->AreaPanel);
			this->Controls->Add(this->WeightPanel);
			this->Controls->Add(this->LengthPanel);
			this->Controls->Add(this->VolumePanel);
			this->Controls->Add(this->txtMode);
			this->Controls->Add(this->StardardPanel);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stardard";
			this->ShowIcon = false;
			this->Text = L"Máy tính";
			this->Load += gcnew System::EventHandler(this, &Stardard::MyForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->StardardPanel->ResumeLayout(false);
			this->StardardPanel->PerformLayout();
			this->ProgramPanel->ResumeLayout(false);
			this->ProgramPanel->PerformLayout();
			this->CurrencyPanel->ResumeLayout(false);
			this->CurrencyPanel->PerformLayout();
			this->AreaPanel->ResumeLayout(false);
			this->AreaPanel->PerformLayout();
			this->WeightPanel->ResumeLayout(false);
			this->WeightPanel->PerformLayout();
			this->VolumePanel->ResumeLayout(false);
			this->VolumePanel->PerformLayout();
			this->LengthPanel->ResumeLayout(false);
			this->LengthPanel->PerformLayout();
			this->SpeedPanel->ResumeLayout(false);
			this->SpeedPanel->PerformLayout();
			this->ScientificPanel_->ResumeLayout(false);
			this->ScientificPanel_->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		double a;
		String^ iOperator;
		char iOperation;
	String^ RemoveWhitespace(String^ input)
	{
		String^ result = "";

		for (int i = 0; i < input->Length; i++)
		{
			if (!Char::IsWhiteSpace(input[i]))
			{
				result += input[i];
			}
		}
		return result;
	}
	Dictionary<String^, Object^>^ ParseJsonString(String^ jsonString)
	{
		Dictionary<String^, Object^>^ data = gcnew Dictionary<String^, Object^>();

		// Xóa các ký tự trắng dư thừa trong chuỗi JSON
		jsonString = RemoveWhitespace(jsonString);

		// Kiểm tra chuỗi JSON có hợp lệ hay không
		if (jsonString->StartsWith("{") && jsonString->EndsWith("}"))
		{
			// Loại bỏ dấu ngoặc nhọn bên ngoài
			jsonString = jsonString->Substring(1, jsonString->Length - 4);

			// Phân tách các cặp khóa-giá trị
			array<String^>^ keyValuePairs = jsonString->Split(',');

			for each (String ^ keyValuePair in keyValuePairs)
			{
				// Phân tách khóa và giá trị
				array<String^>^ parts = keyValuePair->Split(':');
				if (parts->Length == 2)
				{
					String^ key = parts[0]->Trim('"');
					String^ value = parts[1]->Trim('"');

					// Thêm vào từ điển dữ liệu
					data->Add(key, value);
				}
			}
		}
		return data;
	}
	void AccessAPI()
	{
		client = gcnew HttpClient();
		apiUrl = gcnew Uri("https://api.currencyfreaks.com/v2.0/rates/latest?apikey=1f37d31e581c46aa98a28258127f4297&symbols=PKR,GBP,EUR,USD,VND,SCR,'");
		response = client->GetAsync(apiUrl)->Result;
	}
	void handleJson(String^ TypeOfCurrency1, String^ TypeOfCurrency2){
		String^ jsonString = response->Content->ReadAsStringAsync()->Result;
		Dictionary<String^, Object^>^ data = ParseJsonString(jsonString);
		if (data->ContainsKey(TypeOfCurrency1) && data->ContainsKey(TypeOfCurrency2))
		{
			String^ value1 = data[TypeOfCurrency1]->ToString();
			String^ value2 = data[TypeOfCurrency2]->ToString();
			double API1, API2;
			Double::TryParse(value1, API1);
			Double::TryParse(value2, API2);
			txtOutputCurrency->Text = (myValue * API2 / API1).ToString();
		}
		else
		{
			txtOutputCurrency->Text = "Key not found";
		}
	}
String^ RemoveLastCharacter(String^ input)
{
    if (!String::IsNullOrEmpty(input))
    {
        return input->Substring(0, input->Length - 1);
    }
    return input;
}
private: System::Void SetModePanelAndText(Panel^ visiblePanel1, Panel^ visiblePanel2, String^ modeText) {
	StardardPanel->Visible = false;
	LengthPanel->Visible = false;
	VolumePanel->Visible = false;
	WeightPanel->Visible = false;
	AreaPanel->Visible = false;
	SpeedPanel->Visible = false;
	CurrencyPanel->Visible = false;
	ProgramPanel->Visible = false;
	ScientificPanel_->Visible = false;
	visiblePanel1->Visible = true;
	visiblePanel2->Visible = true;
	txtMode->Text = modeText;
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(LengthPanel, StardardPanel, "Stardard <-> Convert Length");
}
private: System::Void scientific_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(ScientificPanel_, ScientificPanel_, "Scientific");
}
private: System::Void stardardToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(LengthPanel, StardardPanel, "Stardard <-> Convert Length");
}

private: System::Void volume_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(VolumePanel, StardardPanel, "Stardard <-> Convert Volume");
}

private: System::Void length_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(LengthPanel, StardardPanel, "Stardard <-> Convert Length");
}

private: System::Void weight_and_mass_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(WeightPanel, StardardPanel, "Stardard <-> Convert Weight");
}

private: System::Void area_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(AreaPanel, StardardPanel, "Stardard <-> Convert Area");
}

private: System::Void speed_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(SpeedPanel, StardardPanel, "Stardard <-> Convert Speed");
}

private: System::Void currency_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(CurrencyPanel, StardardPanel, "Stardard <-> Convert Currency");
}

private: System::Void programmer_mode_Click(System::Object^ sender, System::EventArgs^ e) {
	SetModePanelAndText(ProgramPanel, StardardPanel, "Programmer");
}

private: System::Void btnMSub_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtResultStardard_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	StardardCalculation = 0.0;
	if (Double::TryParse(txtResultStardard->Text, StardardCalculation)) {
		// Successfully parsed the text to a double
		// You can use the myValue variable here
		//MessageBox::Show(myValue.ToString());
	}
	else {
		// Failed to parse the text to a double
		// Handle the error or provide a default value
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnNumber1_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "1";
}
private: System::Void btnNumber0_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if(txtResultStardard->Text != "" && txtResultStardard->Text != "0")
		txtResultStardard->Text = txtResultStardard->Text + "0";
}
private: System::Void btnNumber2_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "2";
}
private: System::Void btnNumber3_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "3";
}
private: System::Void btnNumber4_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "4";
}
private: System::Void btnNumber5_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "5";
}
private: System::Void btnNumber6_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "6";
}
private: System::Void btnNumber7_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "7";
}
private: System::Void btnNumber8_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "8";
}
private: System::Void btnNumber9_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + "9";
}
private: System::Void btnPoint_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = txtResultStardard->Text + ".";
}
private: System::Void btnPositiveNegative_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (state != "negative")
		state = "negative";
	else state = "positive";
	if(state == "negative")
		txtResultStardard->Text = "-" + txtResultStardard->Text;
	else txtResultStardard->Text = txtResultStardard->Text->Remove(0, 1);
}
private: System::Void btnPlus_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = StardardCalculation;
	}else result += StardardCalculation;
	operation = "+"; // Gán phép tính là cộng
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
}
private: System::Void btnEqual_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	double num2 = StardardCalculation;
	
	if (operation == "+") {
		result += num2;
	}
	else if (operation == "-") {
		result -= num2;
	}
	else if (operation == "*") {
		result *= num2;
	}
	else if (operation == "/") {
		if(num2 == 0)
			MessageBox::Show("Cannot divide by zero.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else result /= num2;
	}
	else if (operation == "sqrt") {
		num2 = Math::Sqrt(num2);
	}
	else if (operation == "sqr") {
		num2 = Math::Pow(num2, 2);
	}
	else if (operation == "inverse") {
		num2 = 1 / num2;
	}
	txtResultStardard->Clear();
	txtResultStardard->Focus();
	txtResultStardard1->Text = result.ToString();
}
private: System::Void btnSubtract_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = StardardCalculation;
	}
	else result -= StardardCalculation;
	operation = "-";
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
}
private: System::Void btnMulti_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = StardardCalculation;
	}
	operation = "*";
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
}
private: System::Void btnDevide_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = StardardCalculation;
	}
	else { 
		//do nothing
	}
	operation = "/";
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
}
private: System::Void btnSqrt_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = Math::Sqrt(StardardCalculation);
	}
	else result = Math::Sqrt(result);
	operation = "sqrt";
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
	txtResultStardard1->Text = result.ToString();
}
private: System::Void btnSquare_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = Math::Pow(StardardCalculation, 2);
	}
	else result = Math::Pow(result, 2);
	operation = "sqr";
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
	txtResultStardard1->Text = result.ToString();
}

private: System::Void btnInverse_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		result = 1/ StardardCalculation;
	}
	else result = 1/result;
	operation = "inverse";
	calculated = true;
	txtResultStardard->Clear();
	txtResultStardard->Focus();
	txtResultStardard1->Text = result.ToString();
}

private: System::Void btnDelete_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Text = RemoveLastCharacter(txtResultStardard->Text);
}
private: System::Void btnC_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	result = 0;
	txtResultStardard->Clear();
	txtResultStardard1->Clear();
	txtResultStardard->Focus();
	calculated = false;
}
private: System::Void btnCE_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	txtResultStardard->Clear();
	txtResultStardard->Focus();
}
private: System::Void btnPercent_Stardard_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!calculated) {
		txtResultStardard1->Text = (StardardCalculation * 100).ToString() + "%";
	}
	else 	txtResultStardard1->Text = (result * 100).ToString() + "%";
}



private: System::Void btn1_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "1";
	txtInputVolume->Focus();
}
private: System::Void btn0_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtInputVolume->Text != "" && txtInputVolume->Text != "0")
		txtInputVolume->Text = txtInputVolume->Text + "0";
	txtInputVolume->Focus();
}
private: System::Void btn2_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "2";
	txtInputVolume->Focus();
}
private: System::Void btn3_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "3";
	txtInputVolume->Focus();
}
private: System::Void btn4_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "4";
	txtInputVolume->Focus();
}
private: System::Void btn5_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "5";
	txtInputVolume->Focus();
}
private: System::Void btn6_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "6";
	txtInputVolume->Focus();
}
private: System::Void btn7_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "7";
	txtInputVolume->Focus();
}
private: System::Void btn8_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "8";
	txtInputVolume->Focus();
}
private: System::Void btn9_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + "9";
	txtInputVolume->Focus();
}
private: System::Void btnCE_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Clear();
	txtInputVolume->Focus();
}
private: System::Void btnDel_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = RemoveLastCharacter(txtInputVolume->Text);
}
private: System::Void btnPoint_Volume_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputVolume->Text = txtInputVolume->Text + ".";
	txtInputVolume->Focus();
}
private: System::Void txtInputVolume_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myValue = 0.0;
	if (Double::TryParse(txtInputVolume->Text, myValue)) {
		// Successfully parsed the text to a double
		// You can use the myValue variable here
		//MessageBox::Show(myValue.ToString());
	}
	else {
		// Failed to parse the text to a double
		// Handle the error or provide a default value
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	txtOutputVolume->Text = myVolume->calculate(selectedValueVolume1, selectedValueVolume2, myValue).ToString();
}
private: System::Void cbbInputVolume_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueVolume1 = cbbInputVolume->SelectedItem->ToString();
}
private: System::Void cbbOutputVolume_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueVolume2 = cbbOutputVolume->SelectedItem->ToString();
}
private: System::Void btnSwapVolume_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp = selectedValueVolume1;
	cbbInputVolume->SelectedItem = selectedValueVolume2;
	cbbOutputVolume->SelectedItem = temp;
	txtInputVolume_TextChanged(sender, e);
}

private: System::Void txtInputLength_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myValue = 0.0;
	if (Double::TryParse(txtInputLength->Text, myValue)) {
		// Successfully parsed the text to a double
		// You can use the myValue variable here
		//MessageBox::Show(myValue.ToString());
	}
	else {
		// Failed to parse the text to a double
		// Handle the error or provide a default value
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	txtOutputLength->Text = myLength->calculate(selectedValueLength1, selectedValueLength2, myValue).ToString();
}
private: System::Void cbbInputLength_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueLength1 = cbbInputLength->SelectedItem->ToString();
}
private: System::Void cbbOutputLength_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueLength2 = cbbOutputLength->SelectedItem->ToString();
}
private: System::Void btn0Length_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtInputLength->Text != "" && txtInputLength->Text != "0")
		txtInputLength->Text = txtInputLength->Text + "0";
	txtInputLength->Focus();
}
private: System::Void btn1Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "1";
	txtInputLength->Focus();
}
private: System::Void btn2Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "2";
	txtInputLength->Focus();
}
private: System::Void btn3Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "3";
	txtInputLength->Focus();
}
private: System::Void btn4Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "4";
	txtInputLength->Focus();
}
private: System::Void btn5Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "5";
	txtInputLength->Focus();
}
private: System::Void btn6Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "6";
	txtInputLength->Focus();
}
private: System::Void btn7Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "7";
	txtInputLength->Focus();
}
private: System::Void btn8Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "8";
	txtInputLength->Focus();
}
private: System::Void btn9Length_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + "9";
	txtInputLength->Focus();
}
private: System::Void btnCELength_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Clear();
	txtInputLength->Focus();
}
private: System::Void btnDelLength_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = RemoveLastCharacter(txtInputLength->Text);
}
private: System::Void btnSwapLength_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp = selectedValueLength1;
	cbbInputLength->SelectedItem = selectedValueLength2;
	cbbOutputLength->SelectedItem = temp;
	txtInputLength_TextChanged(sender, e);
}
private: System::Void btnPointLength_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputLength->Text = txtInputLength->Text + ".";
	txtInputLength->Focus();
}
private: System::Void cbbInputWeight_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueWeight1 = cbbInputWeight->SelectedItem->ToString();
}
private: System::Void cbbOutputWeight_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueWeight2 = cbbOutputWeight->SelectedItem->ToString();
}
private: System::Void txtInputWeight_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myValue = 0.0;
	if (Double::TryParse(txtInputWeight->Text, myValue)) {
	}
	else {
		// Failed to parse the text to a double
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	txtOutputWeight->Text = myWeight->calculate(selectedValueWeight1, selectedValueWeight2, myValue).ToString();
}
private: System::Void btn0Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtInputWeight->Text != "" && txtInputWeight->Text != "0")
		txtInputWeight->Text = txtInputWeight->Text + "0";
	txtInputWeight->Focus();
}
private: System::Void btn1Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "1";
}
private: System::Void btn2Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "2";
}
private: System::Void btn3Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "3";
}
private: System::Void btn4Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "4";
}
private: System::Void btn5Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "5";
}
private: System::Void btn6Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "6";
}
private: System::Void btn7Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "7";
}
private: System::Void btn8Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "8";
}
private: System::Void btn9Weight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + "9";
}
private: System::Void btnPointWeight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = txtInputWeight->Text + ".";
}
private: System::Void btnSwapWeight_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp = selectedValueWeight1;
	cbbInputWeight->SelectedItem = selectedValueWeight2;
	cbbOutputWeight->SelectedItem = temp;
	txtInputWeight_TextChanged(sender, e);
}
private: System::Void btnCEWeight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Clear();
	txtInputWeight->Focus();
}
private: System::Void btnDelWeight_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputWeight->Text = RemoveLastCharacter(txtInputWeight->Text);
}


private: System::Void btn0Area_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtInputArea->Text != "" && txtInputArea->Text != "0")
		txtInputArea->Text = txtInputArea->Text + "0";
	txtInputArea->Focus();
}
private: System::Void btn1Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "1";
}
private: System::Void btn2Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "2";
}
private: System::Void btn3Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "3";
}
private: System::Void btn4Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "4";
}
private: System::Void btn5Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "5";
}
private: System::Void btn6Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "6";
}
private: System::Void btn7Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "7";
}
private: System::Void btn8Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "8";
}
private: System::Void btn9Area_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + "9";
}
private: System::Void btnPointArea_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = txtInputArea->Text + ".";
}
private: System::Void txtInputArea_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myValue = 0.0;
	if (Double::TryParse(txtInputArea->Text, myValue)) {
	}
	else {
		// Failed to parse the text to a double
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	txtOutputArea->Text = myArea->calculate(selectedValueArea1, selectedValueArea2, myValue).ToString();
}
private: System::Void btnSwapArea_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp = selectedValueArea1;
	cbbInputArea->SelectedItem = selectedValueArea2;
	cbbOutputArea->SelectedItem = temp;
	txtInputArea_TextChanged(sender, e);
}
private: System::Void cbbInputArea_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueArea1 = cbbInputArea->SelectedItem->ToString();
}
private: System::Void cbbOutputArea_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueArea2 = cbbOutputArea->SelectedItem->ToString();
}
private: System::Void btnCEArea_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Clear();
	txtInputArea->Focus();
}
private: System::Void btnDelArea_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputArea->Text = RemoveLastCharacter(txtInputArea->Text);
}
private: System::Void txtInputSpeed_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myValue = 0.0;
	if (Double::TryParse(txtInputSpeed->Text, myValue)) {
	}
	else {
		// Failed to parse the text to a double
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	txtOutputSpeed->Text = mySpeed->calculate(selectedValueSpeed1, selectedValueSpeed2, myValue).ToString();
}

private: System::Void cbbInputSpeed_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueSpeed1 = cbbInputSpeed->SelectedItem->ToString();
}
private: System::Void cbbOutputSpeed_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedValueSpeed2 = cbbOutputSpeed->SelectedItem->ToString();
}
private: System::Void btnSwapSpeed_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp = selectedValueSpeed1;
	cbbInputSpeed->SelectedItem = selectedValueSpeed2;
	cbbOutputSpeed->SelectedItem = temp;
	txtInputSpeed_TextChanged(sender, e);
}
private: System::Void btnCESpeed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Clear();
	txtInputSpeed->Focus();
}
private: System::Void btnDelSpeed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = RemoveLastCharacter(txtInputSpeed->Text);
}
private: System::Void btn0Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtInputSpeed->Text != "" && txtInputSpeed->Text != "0")
		txtInputSpeed->Text = txtInputSpeed->Text + "0";
	txtInputSpeed->Focus();
}
private: System::Void btnPointSpeed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + ".";
}
private: System::Void btn1Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "1";
}
private: System::Void btn2Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "2";
}
private: System::Void btn3Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "3";
}
private: System::Void btn4Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "4";
}
private: System::Void btn5Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "5";
}
private: System::Void btn6Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "6";
}
private: System::Void btn7Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "7";
}
private: System::Void btn8Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "8";
}
private: System::Void btn9Speed_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputSpeed->Text = txtInputSpeed->Text + "9";
}
private: System::Void txtInputCurrency_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myValue = 0.0;
	if (Double::TryParse(txtInputCurrency->Text, myValue)) {
	}
	else {
		// Failed to parse the text to a double
		//MessageBox::Show("Please enter a valid number.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	AccessAPI();
	handleJson(selectedKeyAPI1, selectedKeyAPI2);
}
private: System::Void cbbInputCurrency_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedKeyAPI1 = cbbInputCurrency->SelectedItem->ToString();
}
private: System::Void cbbOutputCurrency_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	selectedKeyAPI2 = cbbOutputCurrency->SelectedItem->ToString();
}
private: System::Void btn0Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtInputCurrency->Text != "" && txtInputCurrency->Text != "0")
		txtInputCurrency->Text = txtInputCurrency->Text + "0";
	txtInputCurrency->Focus();
}
private: System::Void btnPointCurrency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + ".";
}

private: System::Void btn1Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "1";
}
private: System::Void btn2Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "2";
}
private: System::Void btn3Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "3";
}
private: System::Void btn4Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "4";
}
private: System::Void btn5Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "5";
}
private: System::Void btn6Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "6";
}
private: System::Void btn7Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "7";
}
private: System::Void btn8Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "8";
}
private: System::Void btn9Currency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = txtInputCurrency->Text + "9";
}
private: System::Void btnSwapCurrency_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ temp = selectedKeyAPI1;
	cbbInputCurrency->SelectedItem = selectedKeyAPI2;
	cbbOutputCurrency->SelectedItem = temp;
	txtInputCurrency_TextChanged(sender, e);
}
private: System::Void btnCECurrency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Clear();
	txtInputCurrency->Focus();
}
private: System::Void btnDelCurrency_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputCurrency->Text = RemoveLastCharacter(txtInputCurrency->Text);
}
private: System::Void btnChooseBinary_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Type = "Binary";
}
private: System::Void btnChooseHexa_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Type = "Hexa";
}
private: System::Void btnChooseOctal_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Type = "Octal";
}
private: System::Void btnChooseDecimal_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	Type = "Decimal";
}
private: System::Void txtInputProgrammer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	myNumber->setType(Type);
	myNumber->setValue(Type, txtInputProgrammer->Text);
	myNumber->convert(txtInputProgrammer->Text);
	txtBinary->Text = myNumber->getValue("Binary");
	txtHexa->Text = myNumber->getValue("Hexa");
	txtOctal->Text = myNumber->getValue("Octal");
	txtDecimal->Text = myNumber->getValue("Decimal");
}
private: System::Void btnAProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "a";
	txtInputProgrammer->Focus();
}
private: System::Void btnBProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "b";
	txtInputProgrammer->Focus();
}
private: System::Void btnCProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "c";
	txtInputProgrammer->Focus();
}
private: System::Void btnDProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "d";
	txtInputProgrammer->Focus();
}
private: System::Void btnEProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "e";
	txtInputProgrammer->Focus();
}
private: System::Void btnFProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "f";
	txtInputProgrammer->Focus();
}
private: System::Void btn1Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "1";
	txtInputProgrammer->Focus();
}
private: System::Void btn2Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "2";
	txtInputProgrammer->Focus();
}
private: System::Void btn3Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "3";
	txtInputProgrammer->Focus();
}
private: System::Void btn4Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "4";
	txtInputProgrammer->Focus();
}
private: System::Void btn5Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "5";
	txtInputProgrammer->Focus();
}
private: System::Void btn6Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "6";
	txtInputProgrammer->Focus();
}
private: System::Void btn7Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "7";
	txtInputProgrammer->Focus();
}
private: System::Void btn8Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "8";
	txtInputProgrammer->Focus();
}
private: System::Void btn9Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "9";
	txtInputProgrammer->Focus();
}
private: System::Void btn0Programmer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = txtInputProgrammer->Text + "0";
	txtInputProgrammer->Focus();
}
private: System::Void btnCEProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = "0";
	txtInputProgrammer->Focus();
}
private: System::Void btnDelProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	txtInputProgrammer->Text = RemoveLastCharacter(txtInputProgrammer->Text);
}
private: System::Void btnShiftLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	myNumber->shiftLeft();
	txtBinary->Text = myNumber->getValue("Binary");
	txtHexa->Text = myNumber->getValue("Hexa");
	txtOctal->Text = myNumber->getValue("Octal");
	txtDecimal->Text = myNumber->getValue("Decimal");
	if (Type == "Binary") { txtInputProgrammer->Text = myNumber->getValue("Binary"); }
	else if(Type == "Hexa") { txtInputProgrammer->Text = myNumber->getValue("Hexa"); }
	else if(Type == "Octal") { txtInputProgrammer->Text = myNumber->getValue("Octal"); }
	else if(Type == "Decimal") { txtInputProgrammer->Text = myNumber->getValue("Decimal"); }
}
private: System::Void btnShiftRight_Click(System::Object^ sender, System::EventArgs^ e) {
	myNumber->shiftRight();
	txtBinary->Text = myNumber->getValue("Binary");
	txtHexa->Text = myNumber->getValue("Hexa");
	txtOctal->Text = myNumber->getValue("Octal");
	txtDecimal->Text = myNumber->getValue("Decimal");
	if (Type == "Binary") { txtInputProgrammer->Text = myNumber->getValue("Binary"); }
	else if (Type == "Hexa") { txtInputProgrammer->Text = myNumber->getValue("Hexa"); }
	else if (Type == "Octal") { txtInputProgrammer->Text = myNumber->getValue("Octal"); }
	else if (Type == "Decimal") { txtInputProgrammer->Text = myNumber->getValue("Decimal"); }
}
private: System::Void btnPlusProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(txtDecimal->Text, numberProgrammer1);
	txtInputProgrammer->Text = "0";
	operatorProgrammer = "+";
}
private: System::Void btnEqualProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Double::TryParse(txtDecimal->Text, numberProgrammer2);
	txtInputProgrammer->Text = "0";
	if (operatorProgrammer == "+") {
		txtResultProgrammer->Text = (numberProgrammer1 + numberProgrammer2).ToString();
	}
	else if (operatorProgrammer == "-") {
		txtResultProgrammer->Text = (numberProgrammer1 - numberProgrammer2).ToString();
	}
	else if (operatorProgrammer == "*") {
		txtResultProgrammer->Text = (numberProgrammer1 * numberProgrammer2).ToString();
	}
	else if (operatorProgrammer == "/") {
		txtResultProgrammer->Text = (numberProgrammer1 / numberProgrammer2).ToString();
	}
}
private: System::Void btnSubtractProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(txtDecimal->Text, numberProgrammer1);
	txtInputProgrammer->Text = "0";
	operatorProgrammer = "-";
}
private: System::Void btnMultiProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(txtDecimal->Text, numberProgrammer1);
	txtInputProgrammer->Text = "0";
	operatorProgrammer = "*";
}
private: System::Void btnDevideProgrammer_Click(System::Object^ sender, System::EventArgs^ e) {
	Double::TryParse(txtDecimal->Text, numberProgrammer1);
	txtInputProgrammer->Text = "0";
	operatorProgrammer = "/";
}

private: System::Void btnDel__Scientific_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Number = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0") {
		txtDisplay->Text = Number->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + Number->Text;
	}
}
private: System::Void EnterOp(System::Object^ sender, System::EventArgs^ e) {
	Button^ op = safe_cast<Button^>(sender);

	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = op->Text;
	label1->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	iSecondnum = Double::Parse(txtDisplay->Text);

	if (iOperator == "+") {
		iResult = iFirstnum + iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
	}
	else if (iOperator == "-") {
		iResult = iFirstnum - iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
	}
	else if (iOperator == "*") {
		iResult = iFirstnum * iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
	}
	else if (iOperator == "/") {
		iResult = iFirstnum / iSecondnum;
		txtDisplay->Text = System::Convert::ToString(iResult);
		listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
	}
	else if (iOperator == "Mod") {
		int iFirst, iSecond, iResults;
		iFirst = Convert::ToInt16(iFirstnum);
		iSecond = Convert::ToInt16(iSecondnum);
		iResults = iFirst % iSecond;
		txtDisplay->Text = System::Convert::ToString(iResults);
		listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
	}
	else if (iOperator == "Exp") {
		iResult = (iFirstnum, (1 / iSecondnum));
		txtDisplay->Text = System::Convert::ToString(Math::Exp((iResult)));
		listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
	}
	label1->Text = "";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Clear();
	label1->Text = "";
}
private: System::Void btnC__Scientific_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Clear();
	label1->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = ("3.1415926535897932384626433832795");
	label1->Text = "";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Log(a);
	label1->Text = System::Convert::ToString("log " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sqrt(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sinh(a);
	label1->Text = System::Convert::ToString("sinh " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sin(a);
	label1->Text = System::Convert::ToString("sin " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Cosh(a);
	label1->Text = System::Convert::ToString("cosh " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Cos(a);
	label1->Text = System::Convert::ToString("cos " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Tanh(a);
	label1->Text = System::Convert::ToString("tanh " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(txtDisplay->Text);
	a = Math::Tan(a);
	label1->Text = System::Convert::ToString("tan " + "(" + (txtDisplay->Text) + ")");
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(txtDisplay->Text));
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	a = System::Math::Log(Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
}
};
}
