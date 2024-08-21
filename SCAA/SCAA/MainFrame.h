#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame() = delete;
	MainFrame(const wxString& title);

	// TODO_C, 생성자 및 복사생성자, 대입연산자 등 delete로 정리
};