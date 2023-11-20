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

#ifndef MENUTEST_H
#define MENUTEST_H

#include <wx/wx.h>
#include <wx/image.h>

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class MenuTestFrame: public wxFrame {
public:
    // begin wxGlade: MenuTestFrame::ids
    enum {
        mn_ID1 = wxID_HIGHEST + 1000,
        mn_ID2 = wxID_HIGHEST + 1001,
        mn_ID3 = wxID_HIGHEST + 1002,
        mn_ID4 = wxID_HIGHEST + 1003,
        mn_ID1C = wxID_HIGHEST + 1004,
        mn_ID2C = wxID_HIGHEST + 1005,
        mn_ID3C = wxID_HIGHEST + 1006,
        mn_ID4C = wxID_HIGHEST + 1007,
        mn_ID1R = wxID_HIGHEST + 1008,
        mn_ID2R = wxID_HIGHEST + 1009,
        mn_ID3R = wxID_HIGHEST + 1010,
        mn_ID4R = wxID_HIGHEST + 1011,
    };
    // end wxGlade

    MenuTestFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:

protected:
    // begin wxGlade: MenuTestFrame::attributes
    wxMenuItem* m_Close;
    wxMenuItem* m_Exit;
    wxMenuItem* m_Close;
    wxMenuItem* m_Exit;
    wxMenuItem* m_Close;
    wxMenuItem* m_Exit;
    wxMenuItem* m_named;
    wxMenuItem* m_named4;
    wxMenuItem* m_named3C;
    wxMenuItem* m_named4C;
    wxMenuItem* m_named3R;
    wxMenuItem* m_named4R;
    wxMenuItem* m_auto3;
    wxMenuItem* m_auto4;
    wxMenuItem* m_auto3C;
    wxMenuItem* m_auto4C;
    wxMenuItem* m_auto3R;
    wxMenuItem* m_auto4R;
    wxMenuItem* m_Minus13;
    wxMenuItem* m_Minus14;
    wxMenuItem* m_Minus13C;
    wxMenuItem* m_Minus14C;
    wxMenuItem* m_Minus13R;
    wxMenuItem* m_Minus14R;
    wxMenuBar* test_menubar;
    // end wxGlade

    DECLARE_EVENT_TABLE();

public:
    virtual void onShowManual(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void onCloseFile(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void on_named2(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void on_named3(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void on_auto2(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void on_auto3(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void on_Minus12(wxCommandEvent &event); // wxGlade: <event_handler>
    virtual void on_Minus13(wxCommandEvent &event); // wxGlade: <event_handler>
}; // wxGlade: end class


#endif // MENUTEST_H
