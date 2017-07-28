#include "wx/wx.h"

class MyGestureFrame : public wxFrame
{
public:
    MyGestureFrame();

    void OnGesture(wxGestureEvent& event);
    void OnQuit(wxCloseEvent& event);

private:
    wxTextCtrl *m_logText;
};
 
class MyGesturePanel : public wxPanel
{
public:
    MyGesturePanel(MyGestureFrame* parent);
 
    void OnPaint(wxPaintEvent& event);
    void OnPan(wxPanGestureEvent& event);
    void OnZoom(wxZoomGestureEvent& event);
    void OnRotate(wxRotateGestureEvent& event);
    void OnTwoFingerTap(wxTwoFingerTapEvent& event);
    void OnLongPress(wxLongPressEvent& event);

private:
    wxBitmap m_bitmap;
    wxPoint2DDouble m_translateDistance;
    wxAffineMatrix2D m_affineMatrix;
};
