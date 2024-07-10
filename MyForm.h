#pragma once

namespace ItIsMine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ёто мое! ‘у!";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 111);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Yandex";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int status = 0;
#pragma endregion
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (status != 2)
		{
			if (e->KeyCode == Keys::Z && e->Control)
			{
				status = 1;
			}
			else
			{
				if (status == 1)
				{
					if (e->KeyCode == Keys::F3 && e->Control && e->Shift)
					{
						//yandex
						try
						{
							Process::Start("C:\\Users\\јнтон\\AppData\\Local\\Yandex\\YandexBrowser\\Application\\browser.exe");
						}
						catch (System::Exception^)
						{

						}
						MyForm::Close();
					}
					else
					{
						if (e->KeyCode == Keys::F8 && e->Control && e->Shift)
						{
							//Reg Organizer
							try
							{
								Process::Start("D:\\users\\Reg Organizer\\RegOrganizer.exe");
							}
							catch (System::Exception^)
							{

							}
							MyForm::Close();
						}
						else
						{
							if (e->KeyCode == Keys::F10 && e->Control && e->Shift)
							{
								//everywhere
								try
								{
									Process::Start("D:\\users\\Everything\\Everything.exe");
								}
								catch (System::Exception^)
								{

								}
								MyForm::Close();
							}
						}
					}
				}
			}
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Drawing::Icon^ myIcon = gcnew Drawing::Icon("icon1.ico");
	//this->Icon = myIcon;
}
};
}
