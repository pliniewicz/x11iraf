/* Generated by wbuild from "MenuBar.w"
** (generator version $Revision: 2.0 $ of $Date: 93/07/06 16:08:04 $)
*/
#ifndef _XfwfMenuBarP_H_
#define _XfwfMenuBarP_H_
#include "RowColP.h"
#include "MenuBar.h"
typedef void (*process_menu_Proc)(
#if NeedFunctionPrototypes
Widget,Widget ,Cursor 
#endif
);
#define XtInherit_process_menu ((process_menu_Proc) _XtInherit)
typedef struct {
/* methods */
process_menu_Proc process_menu;
/* class variables */
} XfwfMenuBarClassPart;
typedef struct _XfwfMenuBarClassRec {
CoreClassPart core_class;
CompositeClassPart composite_class;
XfwfCommonClassPart xfwfCommon_class;
XfwfFrameClassPart xfwfFrame_class;
XfwfBoardClassPart xfwfBoard_class;
XfwfRowColClassPart xfwfRowCol_class;
XfwfMenuBarClassPart xfwfMenuBar_class;
} XfwfMenuBarClassRec;

typedef struct {
/* resources */
/* private state */
Widget  current_menu;
} XfwfMenuBarPart;

typedef struct _XfwfMenuBarRec {
CorePart core;
CompositePart composite;
XfwfCommonPart xfwfCommon;
XfwfFramePart xfwfFrame;
XfwfBoardPart xfwfBoard;
XfwfRowColPart xfwfRowCol;
XfwfMenuBarPart xfwfMenuBar;
} XfwfMenuBarRec;

externalref XfwfMenuBarClassRec xfwfMenuBarClassRec;

#endif /* _XfwfMenuBarP_H_ */
