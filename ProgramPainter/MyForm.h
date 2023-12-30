#pragma once
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

namespace ProgramPainter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		Bitmap^ bmp; // Declare application bitmap image
	private: System::Windows::Forms::ToolStripMenuItem^ convertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rGBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hSVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ grayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ captureToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ToolStrip^ toolStrip;
	private: System::Windows::Forms::ToolStripButton^ colorPicker;
	private: System::Windows::Forms::ToolStripButton^ DrawLine;
	private: System::Windows::Forms::ToolStripButton^ ellipseLine;






	private: System::Windows::Forms::ToolStripMenuItem^ typeLinesToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::ToolStripMenuItem^ lineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dotToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripButton^ CircleLine;
	private: System::Windows::Forms::ToolStripButton^ squareLine;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rGBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hSVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->captureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->typeLinesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->colorPicker = (gcnew System::Windows::Forms::ToolStripButton());
			this->DrawLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->ellipseLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->CircleLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->squareLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->panel1);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->numericUpDown1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(489, 242);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(489, 291);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(452, 242);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 242);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseUp);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Dock = System::Windows::Forms::DockStyle::Right;
			this->numericUpDown1->Location = System::Drawing::Point(452, 0);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(37, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown1->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->convertToolStripMenuItem, this->captureToolStripMenuItem, this->typeLinesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(489, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// convertToolStripMenuItem
			// 
			this->convertToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->rGBToolStripMenuItem,
					this->grayToolStripMenuItem, this->hSVToolStripMenuItem
			});
			this->convertToolStripMenuItem->Name = L"convertToolStripMenuItem";
			this->convertToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->convertToolStripMenuItem->Text = L"Convert";
			// 
			// rGBToolStripMenuItem
			// 
			this->rGBToolStripMenuItem->Name = L"rGBToolStripMenuItem";
			this->rGBToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->rGBToolStripMenuItem->Text = L"RGB";
			this->rGBToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBToolStripMenuItem_Click);
			// 
			// grayToolStripMenuItem
			// 
			this->grayToolStripMenuItem->Name = L"grayToolStripMenuItem";
			this->grayToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->grayToolStripMenuItem->Text = L"GRAY";
			this->grayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayToolStripMenuItem_Click);
			// 
			// hSVToolStripMenuItem
			// 
			this->hSVToolStripMenuItem->Name = L"hSVToolStripMenuItem";
			this->hSVToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->hSVToolStripMenuItem->Text = L"HSV";
			this->hSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hSVToolStripMenuItem_Click);
			// 
			// captureToolStripMenuItem
			// 
			this->captureToolStripMenuItem->Name = L"captureToolStripMenuItem";
			this->captureToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->captureToolStripMenuItem->Text = L"Capture";
			// 
			// typeLinesToolStripMenuItem
			// 
			this->typeLinesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->lineToolStripMenuItem,
					this->dotToolStripMenuItem
			});
			this->typeLinesToolStripMenuItem->Name = L"typeLinesToolStripMenuItem";
			this->typeLinesToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->typeLinesToolStripMenuItem->Text = L"TypeLines";
			// 
			// lineToolStripMenuItem
			// 
			this->lineToolStripMenuItem->Name = L"lineToolStripMenuItem";
			this->lineToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->lineToolStripMenuItem->Text = L"Line";
			// 
			// dotToolStripMenuItem
			// 
			this->dotToolStripMenuItem->Name = L"dotToolStripMenuItem";
			this->dotToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->dotToolStripMenuItem->Text = L"Dot";
			// 
			// toolStrip
			// 
			this->toolStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->colorPicker, this->DrawLine,
					this->ellipseLine, this->CircleLine, this->squareLine, this->toolStripButton2
			});
			this->toolStrip->Location = System::Drawing::Point(4, 24);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->Size = System::Drawing::Size(181, 25);
			this->toolStrip->TabIndex = 1;
			this->toolStrip->Text = L"toolStrip1";
			this->toolStrip->Visible = false;
			// 
			// colorPicker
			// 
			this->colorPicker->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->colorPicker->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"colorPicker.Image")));
			this->colorPicker->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->colorPicker->Name = L"colorPicker";
			this->colorPicker->Size = System::Drawing::Size(23, 22);
			this->colorPicker->Text = L"colorPicker";
			this->colorPicker->Click += gcnew System::EventHandler(this, &MyForm::colorPickerButton_Click);
			// 
			// DrawLine
			// 
			this->DrawLine->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->DrawLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DrawLine.Image")));
			this->DrawLine->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->DrawLine->Name = L"DrawLine";
			this->DrawLine->Size = System::Drawing::Size(23, 22);
			this->DrawLine->Text = L"DrawLine";
			this->DrawLine->Click += gcnew System::EventHandler(this, &MyForm::DrawLine_Click);
			// 
			// ellipseLine
			// 
			this->ellipseLine->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ellipseLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ellipseLine.Image")));
			this->ellipseLine->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ellipseLine->Name = L"ellipseLine";
			this->ellipseLine->Size = System::Drawing::Size(23, 22);
			this->ellipseLine->Text = L"toolStripButton3";
			this->ellipseLine->ToolTipText = L"ellipseLine";
			this->ellipseLine->Click += gcnew System::EventHandler(this, &MyForm::ellipseLine_Click);
			// 
			// CircleLine
			// 
			this->CircleLine->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->CircleLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CircleLine.Image")));
			this->CircleLine->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->CircleLine->Name = L"CircleLine";
			this->CircleLine->Size = System::Drawing::Size(23, 22);
			this->CircleLine->Text = L"toolStripButton1";
			this->CircleLine->ToolTipText = L"CircleLine";
			this->CircleLine->Click += gcnew System::EventHandler(this, &MyForm::CircleLine_Click);
			// 
			// squareLine
			// 
			this->squareLine->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->squareLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"squareLine.Image")));
			this->squareLine->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->squareLine->Name = L"squareLine";
			this->squareLine->Size = System::Drawing::Size(23, 22);
			this->squareLine->Text = L"squareLine";
			this->squareLine->Click += gcnew System::EventHandler(this, &MyForm::squareLine_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 291);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			this->ResumeLayout(false);

		}
;
	#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ image = gcnew Bitmap(openFileDialog->FileName);

			// Convert image to 24 bits RGB
			bmp = gcnew Bitmap(image->Size.Width, image->Size.Height, Imaging::PixelFormat::Format24bppRgb);
			bmp->SetResolution(image->HorizontalResolution, image->VerticalResolution);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(image, 0, 0);
			delete image;
			pictureBox1->Image = bmp;

			toolStrip->Visible = true;
		}
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void grayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2GRAY);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result
	}

	private: System::Void rGBToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2RGB);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result

	}

	private: System::Void hSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
		// Do OpenCV function
		cvtColor(image, image, COLOR_BGR2HSV);
		// Unlock Bitmap Bits
		bmp->UnlockBits(bmpData);
		pictureBox1->Image = bmp; // Show result

	}


	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			bmp->Save(openFileDialog->FileName);
		}
	}

	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((bmp != nullptr) && (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
			bmp->Save(saveFileDialog->FileName);
		}
	}

	int red = 0;
	int green = 0;
	int blue = 0;

	private: System::Void colorPickerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ColorDialog^ colorDialog = gcnew ColorDialog();
		
		// Show the color picker dialog
		if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Get the selected color
			System::Drawing::Color selectedColor = colorDialog->Color;

			// Convert the color to RGB values
		    red = selectedColor.R;
			green = selectedColor.G;
			blue = selectedColor.B;

		}
	}

	enum class DrawState {
		NotDrawing,
		DrawLine, DrawingLine,
		DrawEllipse, DrawingEllipse,
		DrawCircle, DrawingCircle,
		DrawSqaure, DrawingSqaure
	} drawState;

	System::Drawing::Point^ startPoint;
	Bitmap^ tmpImage;

	private: System::Void DrawLine_Click(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Visible = true;
		if (bmp != nullptr) {
			drawState = DrawState::DrawLine;
			Cursor = Cursors::Cross;
		}
	}

	private: System::Void ellipseLine_Click(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Visible = true;
		if (bmp != nullptr) {
			drawState = DrawState::DrawEllipse;
			Cursor = Cursors::Cross;
		}
	}

	private: System::Void CircleLine_Click(System::Object^ sender, System::EventArgs^ e) {

		numericUpDown1->Visible = true;
		if (bmp != nullptr) {
			drawState = DrawState::DrawCircle;
			Cursor = Cursors::Cross;
		}
	}

	private: System::Void squareLine_Click(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Visible = true;
		if (bmp != nullptr) {
			drawState = DrawState::DrawSqaure;
			Cursor = Cursors::Cross;
		}
	}

	private: System::Void pictureBox_MouseDown(System::Object^ sender, MouseEventArgs^ e) {
		if (bmp != nullptr) {
			switch (drawState) {
			case DrawState::DrawLine:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawLine)
					drawState = DrawState::DrawingLine;
			case DrawState::DrawEllipse:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawEllipse)
					drawState = DrawState::DrawingEllipse;
			case DrawState::DrawCircle:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawCircle)
					drawState = DrawState::DrawingCircle;
			case DrawState::DrawSqaure:
				startPoint = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::DrawSqaure)
					drawState = DrawState::DrawingSqaure;
			}
		}
	}

	private: System::Void pictureBox_MouseMove(System::Object^ sender, MouseEventArgs^ e) {

		if ((drawState == DrawState::DrawingLine) || (drawState == DrawState::DrawingEllipse) || (drawState == DrawState::DrawingCircle)
			|| (drawState == DrawState::DrawingSqaure) ) {
			if (tmpImage != nullptr) delete tmpImage;
			tmpImage = (Bitmap^)bmp->Clone();

			// Lock Bitmap Bits
			Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
			System::Drawing::Imaging::BitmapData^ bmpData = tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);

			// Create Image with data pointer
			Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			int size = Decimal::ToInt32(numericUpDown1->Value);
			// Do OpenCV function
			switch (drawState) {
				case DrawState::DrawingLine:  // Corrected condition to DrawingLine
					line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), Scalar(red, green, blue), size);
					break;
				case DrawState::DrawingEllipse:
				{
					int dx = Math::Abs(startPoint->X - e->X);
					int dy = Math::Abs(startPoint->Y - e->Y);
					ellipse(image, cv::Point(startPoint->X, startPoint->Y), cv::Size(dx, dy),
						Math::Atan2(dy, dx), 0, 360, Scalar(red, green, blue), size);
				}
					break;
				
				case DrawState::DrawingCircle:
				{
					int dx = Math::Abs(startPoint->X - e->X);
					int dy = Math::Abs(startPoint->Y - e->Y);
					int radius = static_cast<int>(sqrt(dx * dx + dy * dy));  // ¤Ó¹Ç³ÃÑÈÁÕ
					circle(image, cv::Point(startPoint->X, startPoint->Y), radius, cv::Scalar(red, green, blue), size);
				}
					break;
				case DrawState::DrawingSqaure:
				{
					rectangle(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), cv::Scalar(red, green, blue), size);
				}
					break;
			}

			// Unlock Bitmap Bits
			tmpImage->UnlockBits(bmpData);
			pictureBox1->Image = tmpImage; // Show result
		}
	}

	private: System::Void pictureBox_MouseUp(System::Object^ sender, MouseEventArgs^ e) {
		if ((drawState == DrawState::DrawingLine) || (drawState == DrawState::DrawingEllipse) || (drawState == DrawState::DrawingCircle)
			|| (drawState == DrawState::DrawingSqaure)) {
			delete startPoint;
			startPoint = nullptr;
			delete bmp;
			bmp = tmpImage;
			tmpImage = nullptr;
			drawState = DrawState::NotDrawing;
			Cursor = Cursors::Default;
			numericUpDown1->Visible = false;	
		}
	}


	
};
}
