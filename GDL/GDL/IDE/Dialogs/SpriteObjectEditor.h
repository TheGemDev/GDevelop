/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */
#if defined(GD_IDE_ONLY)
#ifndef SPRITEOBJECTEDITOR_H
#define SPRITEOBJECTEDITOR_H

//(*Headers(SpriteObjectEditor)
#include <wx/listctrl.h>
#include <wx/treectrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/aui/aui.h>
#include <wx/panel.h>
#include <wx/scrolbar.h>
#include <wx/dialog.h>
#include <wx/timer.h>
//*)
#include <wx/dnd.h>
#include <vector>
namespace gd { class MainFrameWrapper; }
class ResourcesEditor;
class SpriteObject;
class Resource;
class Game;
class Sprite;

class SpriteObjectEditor: public wxDialog
{
public:

    SpriteObjectEditor(wxWindow* parent, Game & game, SpriteObject & object, gd::MainFrameWrapper & mainFrameWrapper_ );
    virtual ~SpriteObjectEditor();

    /**
     * Used by DndTextSpriteObjectEditor so as to add a dragged image
     */
    void AddImageToCurrentAnimation(wxString image);

    //(*Declarations(SpriteObjectEditor)
    wxListCtrl* maskList;
    wxAuiManager* AuiManager1;
    wxMenu* MenuItem2;
    wxTreeCtrl* animationsTree;
    wxMenuItem* MenuItem8;
    wxListCtrl* pointsList;
    wxPanel* toolbarPanel;
    wxAuiToolBar* toolbar;
    wxMenuItem* MenuItem7;
    wxAuiToolBar* pointToolbar;
    wxAuiManager* mgr;
    wxAuiManager* AuiManager4;
    wxStaticText* statusTxt;
    wxMenuItem* MenuItem5;
    wxPanel* centerPanel;
    wxMenuItem* deleteItem;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem4;
    wxMenuItem* MenuItem11;
    wxPanel* Panel1;
    wxMenu animationsMenu;
    wxMenuItem* MenuItem10;
    wxAuiManager* AuiManager2;
    wxMenuItem* removeImageItem;
    wxPanel* Panel3;
    wxAuiToolBar* maskToolbar;
    wxPanel* animationsPanel;
    wxScrollBar* xScrollBar;
    wxTimer previewTimer;
    wxMenuItem* MenuItem3;
    wxAuiManager* AuiManager3;
    wxPanel* imagePanel;
    wxScrollBar* yScrollBar;
    wxMenu emptyImagesMenu;
    wxMenuItem* moveLeftItem;
    wxMenuItem* MenuItem6;
    wxPanel* previewPanel;
    wxPanel* maskPanel;
    wxMenuItem* moveRightItem;
    wxPanel* Panel2;
    wxMenuItem* automaticRotationItem;
    wxPanel* pointsPanel;
    wxMenuItem* MenuItem9;
    wxMenuItem* multipleDirectionsItem;
    wxListCtrl* imagesList;
    wxMenu imagesMenu;
    wxMenu maskMenu;
    wxPanel* imagesPanel;
    wxAuiToolBar* animationToolbar;
    //*)
    ResourcesEditor * resourcesEditorPnl;

protected:

    //(*Identifiers(SpriteObjectEditor)
    static const long ID_MASKITEM;
    static const long ID_POINTSITEM;
    static const long ID_AUITOOLBARITEM4;
    static const long ID_AUITOOLBARITEM2;
    static const long ID_AUITOOLBAR1;
    static const long ID_PANEL6;
    static const long ID_PANEL4;
    static const long ID_SCROLLBAR1;
    static const long ID_SCROLLBAR2;
    static const long ID_STATICTEXT1;
    static const long ID_PANEL1;
    static const long ID_AUITOOLBARITEM5;
    static const long ID_AUITOOLBARITEM8;
    static const long ID_TOOLLOOP;
    static const long ID_AUITOOLBARITEM10;
    static const long ID_AUITOOLBAR4;
    static const long ID_PANEL11;
    static const long ID_TREECTRL1;
    static const long ID_PANEL3;
    static const long ID_LISTCTRL1;
    static const long ID_PANEL2;
    static const long ID_AUITOOLBARITEM6;
    static const long ID_AUITOOLBARITEM7;
    static const long ID_AUITOOLBARITEM1;
    static const long ID_MASKAPPLYWHOLEANIMITEM;
    static const long ID_AUITOOLBAR3;
    static const long ID_PANEL9;
    static const long ID_LISTCTRL2;
    static const long ID_PANEL8;
    static const long ID_AUITOOLBARITEM3;
    static const long ID_DELETEPOINTITEM;
    static const long ID_POINTAPPLYWHOLEANIMITEM;
    static const long ID_AUITOOLBAR2;
    static const long ID_PANEL7;
    static const long ID_LISTCTRL3;
    static const long ID_PANEL5;
    static const long ID_PANEL10;
    static const long ID_MENUITEM5;
    static const long ID_MENUITEM6;
    static const long ID_MENUITEM4;
    static const long ID_MENUTIMEBETWEENFRAMES;
    static const long ID_MENULOOP;
    static const long ID_MENUITEM1;
    static const long ID_MENUITEM2;
    static const long ID_MENUITEM3;
    static const long ID_MENUITEM7;
    static const long ID_MENUITEM11;
    static const long ID_MENUITEM8;
    static const long ID_MENUITEM9;
    static const long ID_MENUITEM10;
    static const long ID_POSITIONMASKITEM;
    static const long ID_RESIZEMASKITEM;
    static const long ID_TIMER1;
    static const long ID_MENUITEM12;
    static const long ID_MENUITEM13;
    //*)

private:

    //(*Handlers(SpriteObjectEditor)
    void OnimagePanelPaint(wxPaintEvent& event);
    void OnimagePanelEraseBackground(wxEraseEvent& event);
    void OnimagesListItemSelect(wxListEvent& event);
    void OnimagePanelResize(wxSizeEvent& event);
    void OnanimationsTreeSelectionChanged(wxTreeEvent& event);
    void OnAddAnimationSelected(wxCommandEvent& event);
    void OnDeleteAnimationSelected(wxCommandEvent& event);
    void OnanimationsTreeItemRightClick(wxTreeEvent& event);
    void OnautomaticRotationItemSelected(wxCommandEvent& event);
    void OnmultipleDirectionsItemSelected(wxCommandEvent& event);
    void OnimagesListItemRClick(wxListEvent& event);
    void OnremoveImageItemSelected(wxCommandEvent& event);
    void OnMoveLeftSelected(wxCommandEvent& event);
    void OnMoveRightSelected(wxCommandEvent& event);
    void OnMaskEditClick(wxCommandEvent& event);
    void OnPointEditClick(wxCommandEvent& event);
    void OnmgrPaneClose(wxAuiManagerEvent& event);
    void OnpointsListBeginLabelEdit(wxListEvent& event);
    void OnpointsListEndLabelEdit(wxListEvent& event);
    void OnimagePanelLeftUp(wxMouseEvent& event);
    void OnpointsListItemSelect(wxListEvent& event);
    void OnDeletePointClick(wxCommandEvent& event);
    void OnAddPointClick(wxCommandEvent& event);
    void OnpointsListItemActivated(wxListEvent& event);
    void OnimagePanelLeftDown(wxMouseEvent& event);
    void OnimagePanelMouseMove(wxMouseEvent& event);
    void OnAddMaskClick(wxCommandEvent& event);
    void OnDeleteMaskClick(wxCommandEvent& event);
    void OnDefaultMaskClick(wxCommandEvent& event);
    void OnPositionMaskSelected(wxCommandEvent& event);
    void OnResizeMaskSelected(wxCommandEvent& event);
    void OnmaskListItemActivated(wxListEvent& event);
    void OnmaskListItemRClick(wxListEvent& event);
    void OnMenuLoopSelected(wxCommandEvent& event);
    void OnTimeBetweenFramesSelected(wxCommandEvent& event);
    void OnpreviewPanelEraseBackground(wxEraseEvent& event);
    void OnpreviewPanelResize(wxSizeEvent& event);
    void OnpreviewPanelPaint(wxPaintEvent& event);
    void OnTimer1Trigger(wxTimerEvent& event);
    void OnpreviewTimerTrigger(wxTimerEvent& event);
    void OnPreviewClick(wxCommandEvent& event);
    void OnimagesListKeyDown(wxListEvent& event);
    void OnAddImageFromFileSelected(wxCommandEvent& event);
    void OnAddFromImageBankSelected(wxCommandEvent& event);
    void OnHelpClick(wxCommandEvent& event);
    void OnToolLoopClick(wxCommandEvent& event);
    //*)
    void OnimagesListRightClick(wxMouseEvent& event);
    void RefreshAll();
    void RefreshAnimationTree();
    void RefreshAnimationToolbar();
    void RefreshImagesList();
    void RefreshImageAndControls();
    void RefreshPoints();
    void RefreshCollisionMasks();
    void ResetPreview();
    wxBitmap GetwxBitmapFromImageResource(Resource & resource);

    /**
     * Return a vector containing the sprites which must be modified when editing a point
     * or collision masks:
     * When buttons "Apply the changes to the whole animation" are checked, the vector contains
     * all the sprites of the animation. If the buttons are unchecked, the vector contains only
     * the sprite currently modified
     */
    std::vector < Sprite * > GetSpritesToModify();

    DECLARE_EVENT_TABLE()

    Game & game;
    SpriteObject & object;
    unsigned int selectedAnimation;
    unsigned int selectedDirection;
    unsigned int selectedImage;
    std::string selectedPoint;
    float spritePosX; ///< Used to remember the position where the sprite have been drawn.
    float spritePosY; ///< Used to remember the position where the sprite have been drawn.

    bool editingMask;
    bool editingPoint;

    std::string renamedPointOldName;

    bool movingBox;
    unsigned int selectedBox;
    float xSelectionOffset;
    float ySelectionOffset;

    float previewElapsedTime;
    int previewCurrentSprite;

    gd::MainFrameWrapper & mainFrameWrapper;
};

/**
 * \brief Tool class used by SpriteObjectEditor to enable inserting images using drag'n'drop
 */
class DndTextSpriteObjectEditor : public wxTextDropTarget
{
public:
    DndTextSpriteObjectEditor(SpriteObjectEditor & editor_) : editor(editor_) {}

    virtual bool OnDropText(wxCoord x, wxCoord y, const wxString& text);

private:

    SpriteObjectEditor & editor;
};
#endif
#endif
