#pragma once
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include "CameraForm.h"
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










	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripButton^ CircleLine;
	private: System::Windows::Forms::ToolStripButton^ squareLine;





	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripSplitButton^ Pen;


	private: System::Windows::Forms::ToolStripMenuItem^ StraightLine;


	private: System::Windows::Forms::ToolStripMenuItem^ dotDashToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ cameraButton;
	private: System::Windows::Forms::ToolStripButton^ edgeDetection;
	private: System::Windows::Forms::ToolStripButton^ HistogramButton;








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
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->colorPicker = (gcnew System::Windows::Forms::ToolStripButton());
			this->DrawLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->ellipseLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->CircleLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->squareLine = (gcnew System::Windows::Forms::ToolStripButton());
			this->Pen = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->StraightLine = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dotDashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->edgeDetection = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cameraButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->HistogramButton = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->toolStrip->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->panel1);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->numericUpDown1);
			this->toolStripContainer1->ContentPanel->Margin = System::Windows::Forms::Padding(4);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(652, 303);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Margin = System::Windows::Forms::Padding(4);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(652, 358);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(603, 303);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(603, 330);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox_MouseUp);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Dock = System::Windows::Forms::DockStyle::Right;
			this->numericUpDown1->Location = System::Drawing::Point(603, 0);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(49, 22);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown1->Visible = false;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// toolStrip
			// 
			this->toolStrip->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->colorPicker, this->DrawLine,
					this->ellipseLine, this->CircleLine, this->squareLine, this->Pen, this->toolStripButton1, this->edgeDetection, this->toolStripSeparator1,
					this->cameraButton, this->HistogramButton
			});
			this->toolStrip->Location = System::Drawing::Point(4, 0);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->Size = System::Drawing::Size(358, 27);
			this->toolStrip->TabIndex = 1;
			this->toolStrip->Text = L"toolStrip1";
			// 
			// colorPicker
			// 
			this->colorPicker->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->colorPicker->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"colorPicker.Image")));
			this->colorPicker->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->colorPicker->Name = L"colorPicker";
			this->colorPicker->Size = System::Drawing::Size(29, 24);
			this->colorPicker->Text = L"colorPicker";
			this->colorPicker->Click += gcnew System::EventHandler(this, &MyForm::colorPickerButton_Click);
			// 
			// DrawLine
			// 
			this->DrawLine->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->DrawLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DrawLine.Image")));
			this->DrawLine->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->DrawLine->Name = L"DrawLine";
			this->DrawLine->Size = System::Drawing::Size(29, 24);
			this->DrawLine->Text = L"DrawLine";
			this->DrawLine->Click += gcnew System::EventHandler(this, &MyForm::DrawLine_Click);
			// 
			// ellipseLine
			// 
			this->ellipseLine->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ellipseLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ellipseLine.Image")));
			this->ellipseLine->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ellipseLine->Name = L"ellipseLine";
			this->ellipseLine->Size = System::Drawing::Size(29, 24);
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
			this->CircleLine->Size = System::Drawing::Size(29, 24);
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
			this->squareLine->Size = System::Drawing::Size(29, 24);
			this->squareLine->Text = L"squareLine";
			this->squareLine->Click += gcnew System::EventHandler(this, &MyForm::squareLine_Click);
			// 
			// Pen
			// 
			this->Pen->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Pen->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->StraightLine, this->dotDashToolStripMenuItem });
			this->Pen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pen.Image")));
			this->Pen->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Pen->Name = L"Pen";
			this->Pen->Size = System::Drawing::Size(39, 24);
			this->Pen->Text = L"toolStripSplitButton1";
			this->Pen->ButtonClick += gcnew System::EventHandler(this, &MyForm::freeDraw_Click);
			// 
			// StraightLine
			// 
			this->StraightLine->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StraightLine.Image")));
			this->StraightLine->Name = L"StraightLine";
			this->StraightLine->Size = System::Drawing::Size(187, 26);
			this->StraightLine->Text = L"Line";
			this->StraightLine->Click += gcnew System::EventHandler(this, &MyForm::StraightLine_Click);
			// 
			// dotDashToolStripMenuItem
			// 
			this->dotDashToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dotDashToolStripMenuItem.Image")));
			this->dotDashToolStripMenuItem->Name = L"dotDashToolStripMenuItem";
			this->dotDashToolStripMenuItem->Size = System::Drawing::Size(187, 26);
			this->dotDashToolStripMenuItem->Text = L"Dot/Dash Line";
			this->dotDashToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::DashLine_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::PaintBucket_Click);
			// 
			// edgeDetection
			// 
			this->edgeDetection->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->edgeDetection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edgeDetection.Image")));
			this->edgeDetection->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->edgeDetection->Name = L"edgeDetection";
			this->edgeDetection->Size = System::Drawing::Size(29, 24);
			this->edgeDetection->Text = L"Edge Detection";
			this->edgeDetection->Click += gcnew System::EventHandler(this, &MyForm::edgeDetection_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// cameraButton
			// 
			this->cameraButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cameraButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cameraButton.Image")));
			this->cameraButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cameraButton->Name = L"cameraButton";
			this->cameraButton->Size = System::Drawing::Size(29, 24);
			this->cameraButton->Text = L"Camera Button";
			this->cameraButton->Click += gcnew System::EventHandler(this, &MyForm::cameraButton_Click);
			// 
			// HistogramButton
			// 
			this->HistogramButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->HistogramButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HistogramButton.Image")));
			this->HistogramButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->HistogramButton->Name = L"HistogramButton";
			this->HistogramButton->Size = System::Drawing::Size(29, 24);
			this->HistogramButton->Text = L"toolStripButton2";
			this->HistogramButton->Click += gcnew System::EventHandler(this, &MyForm::HistogramButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->convertToolStripMenuItem, this->captureToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 27);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(652, 28);
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
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(143, 26);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(143, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(143, 26);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(143, 26);
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
			this->convertToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->convertToolStripMenuItem->Text = L"Convert";
			// 
			// rGBToolStripMenuItem
			// 
			this->rGBToolStripMenuItem->Name = L"rGBToolStripMenuItem";
			this->rGBToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->rGBToolStripMenuItem->Text = L"RGB";
			this->rGBToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rGBToolStripMenuItem_Click);
			// 
			// grayToolStripMenuItem
			// 
			this->grayToolStripMenuItem->Name = L"grayToolStripMenuItem";
			this->grayToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->grayToolStripMenuItem->Text = L"GRAY";
			this->grayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayToolStripMenuItem_Click);
			// 
			// hSVToolStripMenuItem
			// 
			this->hSVToolStripMenuItem->Name = L"hSVToolStripMenuItem";
			this->hSVToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->hSVToolStripMenuItem->Text = L"HSV";
			this->hSVToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::hSVToolStripMenuItem_Click);
			// 
			// captureToolStripMenuItem
			// 
			this->captureToolStripMenuItem->Name = L"captureToolStripMenuItem";
			this->captureToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->captureToolStripMenuItem->Text = L"Capture";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 358);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
		if (bmp != nullptr) {
			Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
			System::Drawing::Imaging::BitmapData^ bmpData =
				bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);

			// Convert image to grayscale manually
			for (int y = 0; y < image.rows; y++) {
				for (int x = 0; x < image.cols; x++) {
					Vec3b pixel = image.at<Vec3b>(y, x);
					uchar grayValue = static_cast<uchar>((pixel[0] + pixel[1] + pixel[2]) / 3); // Average of BGR values
					image.at<Vec3b>(y, x) = Vec3b(grayValue, grayValue, grayValue);
				}
			}
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox1->Image = bmp; // Show result
		}
	}

	private: System::Void rGBToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		if (bmp != nullptr) {
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

	}

	private: System::Void hSVToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		if (bmp != nullptr) {
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

	}
	private: System::Void bGRToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Lock Bitmap Bits
		if (bmp != nullptr) {
			Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
			System::Drawing::Imaging::BitmapData^ bmpData =
				bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			// Do OpenCV function
			cvtColor(image, image, COLOR_BGR2BGR565);
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox1->Image = bmp; // Show result
		}
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
		DrawSqaure, DrawingSqaure,
		PaintBucket, PaintingBucket,
		FreeDraw, FreeDrawing,
	} drawState;

	enum class LineState {
		Line, Dot
	} lineState;
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

	private: System::Void PaintBucket_Click(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Visible = true;
		if (bmp != nullptr) {
			drawState = DrawState::PaintBucket;
			Cursor = Cursors::Cross;
		}
	}

	private: System::Void freeDraw_Click(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Visible = true;
		if (bmp != nullptr) {
			drawState = DrawState::FreeDraw;
			Cursor = Cursors::Arrow;
		}
	}

	System::Drawing::Point^ previous_point;

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
			case DrawState::FreeDraw:
				previous_point = gcnew System::Drawing::Point(e->X, e->Y);
				if (drawState == DrawState::FreeDraw)
					drawState = DrawState::FreeDrawing;
			case DrawState::PaintBucket:
			{
				
					startPoint = gcnew System::Drawing::Point(e->X, e->Y);
					if (drawState == DrawState::PaintBucket) {
						drawState = DrawState::PaintingBucket;

						if (tmpImage != nullptr) delete tmpImage;
						tmpImage = (Bitmap^)bmp->Clone();

						// Lock Bitmap Bits
						Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
						System::Drawing::Imaging::BitmapData^ bmpData = tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);

						// Create Image with data pointer
						Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
						int size = Decimal::ToInt32(numericUpDown1->Value);
						floodFill(image, cv::Point(startPoint->X, startPoint->Y), cv::Scalar(red, green, blue), 0, Scalar::all(10), Scalar::all(10));

						tmpImage->UnlockBits(bmpData);
						pictureBox1->Image = tmpImage; // Show result
					}
			}
			}
		}
	}

	
	private: System::Void pictureBox_MouseMove(System::Object^ sender, MouseEventArgs^ e) {
		if ((drawState == DrawState::DrawingLine) || (drawState == DrawState::DrawingEllipse) || (drawState == DrawState::DrawingCircle)
			|| (drawState == DrawState::DrawingSqaure) || (drawState == DrawState::FreeDrawing))
			 {
			if ((tmpImage != nullptr) && (drawState != DrawState::FreeDrawing)) delete tmpImage;
			if ((drawState != DrawState::FreeDrawing) || (tmpImage == nullptr)) tmpImage = (Bitmap^)bmp->Clone();
			
			// Lock Bitmap Bits
			Rectangle rect = Rectangle(0, 0, tmpImage->Width, tmpImage->Height);
			System::Drawing::Imaging::BitmapData^ bmpData = tmpImage->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, tmpImage->PixelFormat);

			// Create Image with data pointer
			Mat image(tmpImage->Height, tmpImage->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			int size = Decimal::ToInt32(numericUpDown1->Value);
			// Do OpenCV function
			switch (drawState) {
				case DrawState::DrawingLine:  // Corrected condition to DrawingLine
					line(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), Scalar(blue, green, red), size);
					break;
				case DrawState::DrawingEllipse:
				{
					int dx = Math::Abs(startPoint->X - e->X);
					int dy = Math::Abs(startPoint->Y - e->Y);
					ellipse(image, cv::Point(startPoint->X, startPoint->Y), cv::Size(dx, dy),
						Math::Atan2(dy, dx), 0, 360, Scalar(blue, green, red), size);
				}
					break;
				
				case DrawState::DrawingCircle:
				{
					int dx = Math::Abs(startPoint->X - e->X);
					int dy = Math::Abs(startPoint->Y - e->Y);
					int radius = static_cast<int>(sqrt(dx * dx + dy * dy)); 
					circle(image, cv::Point(startPoint->X, startPoint->Y), radius, cv::Scalar(blue, green, red), size);
				}
					break;
				case DrawState::DrawingSqaure:
				{
					rectangle(image, cv::Point(startPoint->X, startPoint->Y), cv::Point(e->X, e->Y), cv::Scalar(blue, green, red), size);
				}
					break;
				case DrawState::FreeDrawing:
				{
					if (lineState == LineState::Line)
					line(image, cv::Point(previous_point->X, previous_point->Y), cv::Point(e->X, e->Y), Scalar(blue, green, red), size);
					else
					circle(image, cv::Point(e->X, e->Y), 1, cv::Scalar(blue, green, red), size);

					previous_point = gcnew System::Drawing::Point(e->X, e->Y);
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
			|| (drawState == DrawState::DrawingSqaure) || (drawState == DrawState::PaintingBucket) || (drawState == DrawState::FreeDrawing)) {
			delete startPoint;
			startPoint = nullptr;
			delete bmp;
			bmp = tmpImage;
			tmpImage = nullptr;
			drawState = DrawState::NotDrawing;
			Cursor = Cursors::Default;
			numericUpDown1->Visible = false;	
			previous_point = nullptr;
		}
	}


	

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lABToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
			System::Drawing::Imaging::BitmapData^ bmpData =
				bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			// Do OpenCV function
			cvtColor(image, image, COLOR_BGR2Lab);
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox1->Image = bmp; // Show result
		}
	}

	private: System::Void StraightLine_Click(System::Object^ sender, System::EventArgs^ e) {
		lineState = LineState::Line;
	}
	private: System::Void DashLine_Click(System::Object^ sender, System::EventArgs^ e) {
		lineState = LineState::Dot;
	}
	private: System::Void cameraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		CameraForm^ cameraform = gcnew CameraForm();
		cameraform->ShowDialog();
	}
		   
	private: System::Void edgeDetection_Click(System::Object^ sender, System::EventArgs^ e) {
		if (bmp != nullptr) {
			Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
			System::Drawing::Imaging::BitmapData^ bmpData =
				bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			// Do OpenCV function
			for (int y = 0; y < image.rows; y++) {
				for (int x = 0; x < image.cols; x++) {
					Vec3b pixel = image.at<Vec3b>(y, x);
					uchar grayValue = static_cast<uchar>((pixel[0] + pixel[1] + pixel[2]) / 3);
					image.at<Vec3b>(y, x) = Vec3b(grayValue, grayValue, grayValue);
				}
			}
			Mat blur_image;
			Mat edges;

			blur(image, blur_image, cv::Size(3, 3));
			Canny(blur_image, image, 100, 200, 3, false);

			//blur(image, image, cv::Size(3, 3));
			//Mat edges = image.clone();
			//Canny(image, edges, 100, 200, 3, false);

			imshow("Canny edge detection", image);
			bmp->UnlockBits(bmpData);

			pictureBox1->Image = bmp;
		}


	}
private: System::Void HistogramButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (bmp != nullptr) {
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		System::Drawing::Imaging::BitmapData^ bmpData =
			bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
		// Using OpenCV: Create Image with data pointer
		Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);


		// Calculate histogram
		std::vector<cv::Mat> bgr_planes;
		split(image, bgr_planes);

		int histSize = 256;
		float range[] = { 0, 256 }; // the upper boundary is exclusive
		const float* histRange = { range };

		bool uniform = true, accumulate = false;

		cv::Mat b_hist, g_hist, r_hist;

		calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate);
		calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate);
		calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate);

		int hist_w = 512;
		int hist_h = 400;
		int bin_w = cvRound((double)hist_w / histSize);

		Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(255, 255, 255));

		// Normalize the histograms to be displayed
		normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
		normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
		normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());

		// Draw histograms
		for (int i = 1; i < histSize; i++)
		{
			line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(b_hist.at<float>(i - 1))),
				cv::Point(bin_w * (i), hist_h - cvRound(b_hist.at<float>(i))),
				Scalar(255, 0, 0), 2, 8, 0);
			line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(g_hist.at<float>(i - 1))),
				cv::Point(bin_w * (i), hist_h - cvRound(g_hist.at<float>(i))),
				Scalar(0, 255, 0), 2, 8, 0);
			line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(r_hist.at<float>(i - 1))),
				cv::Point(bin_w * (i), hist_h - cvRound(r_hist.at<float>(i))),
				Scalar(0, 0, 255), 2, 8, 0);
		}

		// Display histogram
		imshow("Histogram", histImage);
		bmp->UnlockBits(bmpData);
	}
	
}
};
}