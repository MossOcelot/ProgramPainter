#pragma once
#include "CameraForm.h"
#include <opencv2/videoio.hpp>

namespace ProgramPainter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	/// <summary>
	/// Summary for CameraForm
	/// </summary>
	public ref class CameraForm : public System::Windows::Forms::Form
	{
	public:
		CameraForm(void)
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
		~CameraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	protected:

	private: System::Windows::Forms::Button^ CaptureClick;

	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Label^ captureFPSLabel;

	private: System::Windows::Forms::Label^ captureWHLabel;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->CaptureClick = (gcnew System::Windows::Forms::Button());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->captureFPSLabel = (gcnew System::Windows::Forms::Label());
			this->captureWHLabel = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->CaptureClick);
			this->splitContainer1->Panel2->Controls->Add(this->startButton);
			this->splitContainer1->Panel2->Controls->Add(this->captureFPSLabel);
			this->splitContainer1->Panel2->Controls->Add(this->captureWHLabel);
			this->splitContainer1->Size = System::Drawing::Size(821, 403);
			this->splitContainer1->SplitterDistance = 607;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBox
			// 
			this->pictureBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox->Location = System::Drawing::Point(0, 0);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(607, 403);
			this->pictureBox->TabIndex = 0;
			this->pictureBox->TabStop = false;
			// 
			// CaptureClick
			// 
			this->CaptureClick->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->CaptureClick->Location = System::Drawing::Point(44, 358);
			this->CaptureClick->Name = L"CaptureClick";
			this->CaptureClick->Size = System::Drawing::Size(135, 33);
			this->CaptureClick->TabIndex = 3;
			this->CaptureClick->Text = L"Capture";
			this->CaptureClick->UseVisualStyleBackColor = true;
			this->CaptureClick->Click += gcnew System::EventHandler(this, &CameraForm::CaptureClick_Click);
			// 
			// startButton
			// 
			this->startButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->startButton->Location = System::Drawing::Point(44, 312);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(135, 30);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &CameraForm::cameraButton_Click);
			// 
			// captureFPSLabel
			// 
			this->captureFPSLabel->AutoSize = true;
			this->captureFPSLabel->Location = System::Drawing::Point(41, 88);
			this->captureFPSLabel->Name = L"captureFPSLabel";
			this->captureFPSLabel->Size = System::Drawing::Size(46, 16);
			this->captureFPSLabel->TabIndex = 1;
			this->captureFPSLabel->Text = L"FPS : -";
			// 
			// captureWHLabel
			// 
			this->captureWHLabel->AutoSize = true;
			this->captureWHLabel->Location = System::Drawing::Point(41, 50);
			this->captureWHLabel->Name = L"captureWHLabel";
			this->captureWHLabel->Size = System::Drawing::Size(112, 16);
			this->captureWHLabel->TabIndex = 0;
			this->captureWHLabel->Text = L"Image Size : WxH";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"JPeg Image|*.jpg";
			// 
			// CameraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 403);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"CameraForm";
			this->Text = L"CameraForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		Bitmap^ bmp;
		bool isStart = false;
	private: System::Void cameraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isStart) {
			isStart = false;
			startButton->Text = "Start";
			return;
		}
		VideoCapture capture(0);// 0, cv::CAP_MSMF);
		while (!capture.isOpened());
		int capWidth = (int)capture.get(CAP_PROP_FRAME_WIDTH);
		int capHeight = (int)capture.get(CAP_PROP_FRAME_HEIGHT);
		int capFPS = (int)capture.get(CAP_PROP_FPS);
		captureWHLabel->Text = System::String::Format("Image Size : {0:D}x{1:D}", capWidth, capHeight);
		captureFPSLabel->Text = System::String::Format("FPS : {0:D}", capFPS);
		isStart = true;
		bmp = gcnew Bitmap(capWidth, capHeight, Imaging::PixelFormat::Format24bppRgb);
		Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
		startButton->Text = "Stop";
		while (isStart) {
			System::Drawing::Imaging::BitmapData^ bmpData = bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
			// Using OpenCV: Create Image with data pointer
			Mat image(bmp->Height, bmp->Width, CV_8UC3, bmpData->Scan0.ToPointer(), bmpData->Stride);
			capture.read(image);
			// Unlock Bitmap Bits
			bmp->UnlockBits(bmpData);
			pictureBox->Image = bmp;
			Application::DoEvents();
		}
	}
	
	private: System::Void CaptureClick_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((bmp != nullptr) && (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)) {
			bmp->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
		}
	}
};
}
