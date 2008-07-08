/////////////////////////////////////////////////////////////////////////////
// Name:        wxwallctrlsample.h
// Purpose:     
// Author:      Mokhtar M. Khorshid
// Modified by: 
// Created:     06/07/2008 18:28:29
// RCS-ID:      
// Copyright:   Copyright 2008 by Mokhtar M. Khorshid
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 06/07/2008 18:28:29

#ifndef _WXWALLCTRLSAMPLE_H_
#define _WXWALLCTRLSAMPLE_H_


/*!
 * Includes
 */

#include "wx/wallctrl/wallctrlbitmapsource.h"

////@begin includes
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_WXWALLCTRLSAMPLE 10002
#define ID_WALLCTRL 10000
#define SYMBOL_WXWALLCTRLSAMPLE_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX|wxTAB_TRAVERSAL
#define SYMBOL_WXWALLCTRLSAMPLE_TITLE _("wxWallCtrlSample")
#define SYMBOL_WXWALLCTRLSAMPLE_IDNAME ID_WXWALLCTRLSAMPLE
#define SYMBOL_WXWALLCTRLSAMPLE_SIZE wxSize(400, 300)
#define SYMBOL_WXWALLCTRLSAMPLE_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * wxWallCtrlSample class declaration
 */

class wxWallCtrlSample: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( wxWallCtrlSample )
    DECLARE_EVENT_TABLE()
	wxWallCtrlBitmapSource * bitmapSource;

public:
    /// Constructors
    wxWallCtrlSample();
    wxWallCtrlSample( wxWindow* parent, wxWindowID id = SYMBOL_WXWALLCTRLSAMPLE_IDNAME, const wxString& caption = SYMBOL_WXWALLCTRLSAMPLE_TITLE, const wxPoint& pos = SYMBOL_WXWALLCTRLSAMPLE_POSITION, const wxSize& size = SYMBOL_WXWALLCTRLSAMPLE_SIZE, long style = SYMBOL_WXWALLCTRLSAMPLE_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_WXWALLCTRLSAMPLE_IDNAME, const wxString& caption = SYMBOL_WXWALLCTRLSAMPLE_TITLE, const wxPoint& pos = SYMBOL_WXWALLCTRLSAMPLE_POSITION, const wxSize& size = SYMBOL_WXWALLCTRLSAMPLE_SIZE, long style = SYMBOL_WXWALLCTRLSAMPLE_STYLE );

    /// Destructor
    ~wxWallCtrlSample();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin wxWallCtrlSample event handler declarations
////@end wxWallCtrlSample event handler declarations

////@begin wxWallCtrlSample member function declarations
    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end wxWallCtrlSample member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin wxWallCtrlSample member variables
////@end wxWallCtrlSample member variables
};

#endif
    // _WXWALLCTRLSAMPLE_H_
