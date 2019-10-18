#pragma once

namespace circuitsmyform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for stardelta
	/// </summary>
	public ref class stardelta : public System::Windows::Forms::Form
	{
	public:
		stardelta(void)
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
		~stardelta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(stardelta::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(73, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Star do Delta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &stardelta::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(440, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Delta to Star";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &stardelta::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"R1=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"R2=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"R3=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(145, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"R12=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(145, 197);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"R23=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(145, 231);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"R31=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(186, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(186, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(186, 231);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(373, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"R12=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(373, 197);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"R23=";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(373, 231);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"R31=";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(508, 170);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"R1=";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(508, 197);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"R2=";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(508, 231);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 13);
			this->label15->TabIndex = 17;
			this->label15->Text = L"R3=";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(555, 169);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(555, 197);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 13);
			this->label17->TabIndex = 19;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(555, 231);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(41, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"label18";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(34, 20);
			this->textBox1->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(34, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(65, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(34, 20);
			this->textBox3->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(420, 166);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(34, 20);
			this->textBox4->TabIndex = 24;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(420, 228);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(34, 20);
			this->textBox5->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(420, 194);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(34, 20);
			this->textBox6->TabIndex = 26;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(272, 126);
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(341, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(277, 126);
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(12, 141);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(269, 22);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Please Enter values of Resistors ";
			this->label19->Click += gcnew System::EventHandler(this, &stardelta::label19_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(349, 141);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(269, 22);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Please Enter values of Resistors ";
			// 
			// stardelta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 298);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"stardelta";
			this->Text = L"$";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ in1 = textBox1->Text;
	String^ in2 = textBox2->Text;
	String^ in3 = textBox3->Text;
	Double R1 = System::Convert::ToDouble(in1);
	Double R2 = System::Convert::ToDouble(in2);
	Double R3 = System::Convert::ToDouble(in3);
	Double R12, R23, R31;
	R12 = (R1 + R2) + (R1 * R2 / R3);
	R23 = R2 + R3 + (R2 * R3 / R1);
	R31 = R3 + R1 + (R1 * R3 / R2);

	in1 = System::Convert::ToString(R12);
	label7->Text = in1;
	in2 = System::Convert::ToString(R23);
	label8->Text = in2;
	in3 = System::Convert::ToString(R31);
	label9->Text = in3;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ in4 = textBox4->Text;
	String^ in5 = textBox5->Text;
	String^ in6 = textBox6->Text;
	Double R12 = System::Convert::ToDouble(in4);
	Double R23 = System::Convert::ToDouble(in5);
	Double R31 = System::Convert::ToDouble(in6);
	Double R1, R2, R3;
	R1 = (R12 * R31) / (R12 + R31 + R23);
	R2 = (R23 * R12) / (R12 + R23 + R31);
	R3 = (R23 * R31) / (R12 + R23 + R31);

	in4 = System::Convert::ToString(R1);
	label16->Text = in4;
	in5 = System::Convert::ToString(R2);
	label17->Text = in5;
	in6 = System::Convert::ToString(R3);
	label18->Text = in6;


}
};
}
