// -*- C++ -*-
//
// generated by wxGlade
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#include "bug163.h"

// begin wxGlade: ::extracode
// end wxGlade



MyFrame::MyFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: MyFrame::MyFrame
    SetTitle(_("MyFrame"));
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    label_1 = new wxStaticText(this, wxID_ANY, _("Extraproperty example"));
    label_1->SetFont(wxFont(40, wxDEFAULT, wxNORMAL, wxNORMAL, 0, wxT("")));
    label_1->SetFoobar(1);
    sizer_1->Add(label_1, 1, wxALL, 5);
    
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    Layout();
    // end wxGlade
}

